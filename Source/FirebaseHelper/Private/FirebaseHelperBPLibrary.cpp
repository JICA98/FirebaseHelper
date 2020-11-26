// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirebaseHelperBPLibrary.h"
#include "FirebaseHelper.h"
#include "..\Public\FirebaseHelperBPLibrary.h"

#include <string>

#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Misc/FileHelper.h"
#include "JsonObjectConverter.h"
#include "Templates/SharedPointer.h"

FString UFirebaseHelperBPLibrary::DatabaseURL = "";
FString UFirebaseHelperBPLibrary::APIKey = "";
FString UFirebaseHelperBPLibrary::AuthToken = "";
TSharedPtr<FJsonValue> FRealtimeValue::Value;

UFirebaseHelperBPLibrary::UFirebaseHelperBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TMap<FString, TSharedPtr<FJsonValue>> UFirebaseHelperBPLibrary::DeserializeData(const FString Content)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    const TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(Content);

    if(FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        return JsonObject->Values;
    }
    return TMap<FString, TSharedPtr<FJsonValue>>();
}

FString UFirebaseHelperBPLibrary::SerializeData(const TMap<FString,  FRealtimeValue> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    TArray<FString> KeySet = {};
    Map.GetKeys(KeySet);
    for(FString Key: KeySet)
    {
        JsonObject->SetField(Key, Map[Key].Value);
        UE_LOG(LogTemp, Warning, TEXT("%s %s"), *Key, *Map[Key].Value->AsString());
    }
    
    FString OutputString;
    
    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);
    return OutputString;
}

void UFirebaseHelperBPLibrary::SetupFirebase() {
    FString file = FPaths::ProjectDir();
    file.Append(TEXT("google-services.json"));
    IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
    FString FileContent;
    TSharedPtr<FJsonObject> FirebaseConfig = MakeShareable(new FJsonObject());
    if (FileManager.FileExists(*file))
    {
        // We use the LoadFileToString to load the file into
        if (FFileHelper::LoadFileToString(FileContent, *file, FFileHelper::EHashOptions::None))
        {
            TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(FileContent);
            if (FJsonSerializer::Deserialize(Reader, FirebaseConfig))
            {
                
                TSharedPtr<FJsonObject> ProjectConfig = FirebaseConfig->GetObjectField("project_info");
                UFirebaseHelperBPLibrary::DatabaseURL = ProjectConfig->GetStringField("firebase_url");
                TArray<TSharedPtr<FJsonValue>> clients = FirebaseConfig->GetArrayField("client");
                TSharedPtr<FJsonObject> cc = clients[0]->AsObject();
                TArray<TSharedPtr<FJsonValue>> apikeys = cc->GetArrayField("api_key");
                UFirebaseHelperBPLibrary::APIKey = apikeys[0]->AsObject()->GetStringField("current_key");
                UE_LOG(LogTemp, Warning, TEXT("%s"), *UFirebaseHelperBPLibrary::APIKey);
            }
            else {
                UE_LOG(LogTemp, Warning, TEXT("FirebaseHelper : Invalid JSON File!"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Did not load text from file"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("FileManipulation: ERROR: Can not read the file because it was not found."));
        UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Expected file location: %s"), *file);
    }
}

void UFirebaseHelperBPLibrary::OnDeleteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
{
    FFirebaseData firebaseData = FFirebaseData();
    firebaseData.Data = TMap<FString, FRealtimeValue>();
    firebaseData.WasSuccessful  = bWasSuccessful;
    firebaseData.Status = FString::FromInt(Response->GetResponseCode());
    if (!bWasSuccessful)
    {
        UE_LOG(LogTemp, Error, TEXT("Error %s"), *Response->GetContentAsString()); 
    }
    if(ResultCallback.ExecuteIfBound(firebaseData)){}
}


void UFirebaseHelperBPLibrary::RealtimeDatabaseDelete(const FString& Path, const bool UseAuth,bool ReceiveDataSent, FOperationComplete ResultCallback)
{
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));

    HttpRequest->SetVerb("DELETE");

    FString FinalURL = UFirebaseHelperBPLibrary::DatabaseURL + "/" + Path.TrimStartAndEnd() + ".json";
    if (UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
        FinalURL += "?auth=" + UFirebaseHelperBPLibrary::AuthToken;
        if(!ReceiveDataSent)
        {
            FinalURL += "&print=silent";
        }
    } else if(!ReceiveDataSent)
    {
        FinalURL += "?print=silent";
    }
    
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("Error %s"), *FinalURL); 
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnDeleteReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseHelperBPLibrary::OnWriteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
{
    FFirebaseData firebaseData = FFirebaseData();
    firebaseData.Data = TMap<FString, FRealtimeValue>();
    firebaseData.ExTag = Response->GetHeader("ETag");
    UE_LOG(LogTemp, Error, TEXT("RequestReceived"));
    firebaseData.WasSuccessful  = bWasSuccessful;
    if (bWasSuccessful)
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());

        FJsonSerializer::Deserialize(JsonReader, JsonObject);
        FString ss = Response->GetContentAsString();
        TArray<FString> KeySet;
        JsonObject->Values.GetKeys(KeySet);
        for (FString Key : KeySet)
        {
            const TSharedPtr<FJsonValue> Value = JsonObject->Values[Key];
            //UE_LOG(LogTemp, Warning, TEXT("%s %s"), *Key, *Value);
            firebaseData.Data.Add(Key, FRealtimeValue(Value));    
        }
            
        firebaseData.Status = "200";
    }
    else
    {
        int32 string = Response->GetResponseCode();
        firebaseData.Status = "" + string;
           
        UE_LOG(LogTemp, Error, TEXT("Error %s"), string);
    }
	    
}

void UFirebaseHelperBPLibrary::RealtimeDatabaseWrite(const FString& Path, const FString& Content ,	bool Update,FRealtimeWriteOptions Options, FOperationComplete ResultCallback )
{
    if(Update && Options.WriteAsChild)
    {
        throw "Cannot Update and Write as Child at the same time.";
    }
    if(Update && Options.ReceiveExTag)
    {
        throw "Cannot Update and Receive ExTag at the same time.";
    }
    if(Update && Options.WriteExTag!="None")
    {
        throw "Cannot Update and Write ExTag at the same time.";
    }
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	if(Update)
	{
	    HttpRequest->SetVerb("PATCH");
	} else if(Options.WriteAsChild)
	{
	    HttpRequest->SetVerb("POST");
	} else
	{
	    HttpRequest->SetVerb("PUT");
	}
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));
    if(Options.ReceiveExTag)
    {
        HttpRequest->SetHeader(TEXT("X-Firebase-ETag"), TEXT("true"));
    }
    if(Options.WriteExTag!="None")
    {
        HttpRequest->SetHeader(TEXT("if-match"), Options.WriteExTag);
    }
    FString FinalURL = UFirebaseHelperBPLibrary::DatabaseURL + "/" + Path.TrimStartAndEnd() + ".json";
    if (Options.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
        FinalURL += "?auth=" + UFirebaseHelperBPLibrary::AuthToken;
        if(!Options.ReceiveDataSent)
        {
            FinalURL += "&print=silent";
        }
    } else if(!Options.ReceiveDataSent)
    {
        FinalURL += "?print=silent";
    }
	HttpRequest->SetURL(FinalURL);

    HttpRequest->SetContentAsString(Content);

	HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnWriteReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UFirebaseHelperBPLibrary::OnListenerDataReceived(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived, FOperationComplete ResultCallback, FFirebaseData RootData)
{
    //firebaseData.WasSuccessful = bWasSuccessful;
    UE_LOG(LogTemp, Error, TEXT("Data %s"), *Request->GetResponse()->GetContentAsString());
    UE_LOG(LogTemp, Error, TEXT("CODE %d"), Request->GetResponse()->GetResponseCode());
    if (Request->GetResponse()->GetResponseCode() != 307)
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        const FString Content = Request->GetResponse()->GetContentAsString();
        const FString Data = Content.RightChop(Content.Find("data: ")+5);
        const TSharedRef<TJsonReader<TCHAR>> JsonReader =
                TJsonReaderFactory<TCHAR>::Create(Data);

        FJsonSerializer::Deserialize(JsonReader, JsonObject);

        TSharedPtr<FJsonObject> DataObject = JsonObject->GetObjectField("data");

        
        
        if(JsonObject->GetStringField("path") == "/")
        {
            FFirebaseData TempData = FFirebaseData();
            TArray<FString> KeySet;
            DataObject->Values.GetKeys(KeySet);
            for (FString Key : KeySet)
            {
                const TSharedPtr<FJsonValue> Value = JsonObject->Values[Key];
                UE_LOG(LogTemp, Error, TEXT("Data %s %s"), *Key, *Value->AsString());
                TempData.Data.Add(Key, FRealtimeValue(Value));    
            }
            RootData.Data = TempData.Data;

        } else
        {
            TArray<FString> Children;
            JsonObject->GetStringField("path").ParseIntoArray(Children, TEXT("/"), true);
                  
            TSharedPtr<FJsonValue> TempValue;
            TSharedPtr<FJsonObject> TempObject = MakeShareable(new FJsonObject());

            TArray<FString> KeySet;
            RootData.Data.GetKeys(KeySet);
            for(FString Key: KeySet)
            {
                TempObject->SetField(Key, RootData.Data[Key].Value);
            }

            
            for(int32 i=0; i<Children.Num()-1; ++i)
            {
                TSharedPtr<FJsonObject> LoopObject = MakeShareable(new FJsonObject());
                LoopObject->SetField(Children[i], TempObject->Values[Children[i]]);
                TempObject = LoopObject;
            }

            TempObject->SetField(Children[Children.Num()-1], DataObject->Values["data"]);

    
            
            
        }
        
        RootData.ExTag = Request->GetHeader("ETag");
        RootData.WasSuccessful = true;
        RootData.Status = "0";
        if(ResultCallback.ExecuteIfBound(RootData)){}
    }
    else
    {
        RootData.Status = FString::FromInt(Request->GetResponse()->GetResponseCode());
        UE_LOG(LogTemp, Error, TEXT("Source Changed %d"), *RootData.Status);
    }
}

FJsonObject GetObject(FJsonObject Object, FString MKey, TSharedPtr<FJsonValue> MVal)
{
    TArray<FString> KeySet;
    Object.Values.GetKeys(KeySet);
    for(FString Key: KeySet)
    {
         
    }
    return Object;
}

void UFirebaseHelperBPLibrary::RealtimeDatabaseListener(const FString& Path, const FRealtimeReadOptions RealtimeOptions, FOperationComplete ListenerCallback)
{
    
    if(RealtimeOptions.OrderBy!="None" && RealtimeOptions.OrderByKeyOrValue!="None")
    {
        throw "Cannot be ordered by both Key and Value. Change one of them to \"None\"";
    }
    if((RealtimeOptions.StartAt!="None" || RealtimeOptions.EndAt!="None" || RealtimeOptions.LimitToFirst!="None"
           || RealtimeOptions.LimitToLast!="None" || RealtimeOptions.EqualTo!="None")
            && (RealtimeOptions.OrderBy=="None" && RealtimeOptions.OrderByKeyOrValue=="None" ))
    {
        throw "orderBy must be defined when other query parameters are defined";
    }
    if(RealtimeOptions.LimitToFirst!="None" && RealtimeOptions.LimitToLast!="None")
    {
        throw "Cannot use both limits together";
    }
    
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

    HttpRequest->SetVerb("GET");

    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("text/event-stream"));
    HttpRequest->SetHeader(TEXT("Accept"), TEXT("text/event-stream"));
    HttpRequest->SetHeader(TEXT("Cache-Control"), TEXT("no-cache"));
    
    FString finalURL = UFirebaseHelperBPLibrary::DatabaseURL + "/" + Path.TrimStartAndEnd() + ".json";
    FString OriginURL = finalURL;
    if(RealtimeOptions.OrderBy!="None")
    {
        finalURL += "?orderBy=\""+RealtimeOptions.OrderBy+"\"";
    }
    if(RealtimeOptions.OrderByKeyOrValue!="None")
    {
        finalURL += "?orderBy=\"$"+RealtimeOptions.OrderByKeyOrValue+"\"";
    }
    if(RealtimeOptions.StartAt!="None")
    {
        finalURL += "&startAt="+RealtimeOptions.StartAt;
    }
    if(RealtimeOptions.EndAt!="None")
    {
        finalURL += "&endAt="+RealtimeOptions.EndAt;
    }
    if(RealtimeOptions.LimitToFirst!="None")
    {
        finalURL += "&limitToFirst="+RealtimeOptions.LimitToFirst;
    }
    if(RealtimeOptions.LimitToLast!="None")
    {
        finalURL += "&limitToLast="+RealtimeOptions.LimitToLast;
    }
    if(RealtimeOptions.EqualTo!="None")
    {
        finalURL += "&equalTo="+RealtimeOptions.EqualTo;
    }
    if(OriginURL==finalURL)
    {
        if (RealtimeOptions.Shallow) {
            finalURL += "?shallow=true";
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
            }
            finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
        }
        else {
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "?auth=" + UFirebaseHelperBPLibrary::AuthToken;
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            } else
            {
                finalURL += "?timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            }
        }        
    } else
    {
        if (RealtimeOptions.Shallow) {
            finalURL += "&shallow=true";
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
            }
            finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
        }
        else {
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            } else
            {
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            }
        }
    }
    HttpRequest->SetURL(finalURL);

    FFirebaseData RootData = FFirebaseData();

    HttpRequest->OnRequestProgress().BindStatic(UFirebaseHelperBPLibrary::OnListenerDataReceived, ListenerCallback, RootData);

    //HttpRequest->OnProcessRequestComplete();

    //Processing
    HttpRequest->ProcessRequest();
}


void UFirebaseHelperBPLibrary::OnReadReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
{
    FFirebaseData firebaseData = FFirebaseData();
    firebaseData.Data = TMap<FString, FRealtimeValue>();
    firebaseData.ExTag = Response->GetHeader("ETag");
    firebaseData.WasSuccessful = bWasSuccessful;
    if (bWasSuccessful)
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());

        FJsonSerializer::Deserialize(JsonReader, JsonObject);
        FString ss = Response->GetContentAsString();
        TArray<FString> KeySet;
        JsonObject->Values.GetKeys(KeySet);
        for (FString Key : KeySet)
        {
            const TSharedPtr<FJsonValue> Value = JsonObject->Values[Key];
            firebaseData.Data.Add(Key, FRealtimeValue(Value));    
        }
        firebaseData.WasSuccessful = true;
        firebaseData.Status = "200";
    }
    else
    {
        firebaseData.Status = "" + Response->GetResponseCode();
        UE_LOG(LogTemp, Error, TEXT("Error %d"), *firebaseData.Status);
    }
}


void UFirebaseHelperBPLibrary::RealtimeDatabaseRead(const FString& Path, const FRealtimeReadOptions RealtimeOptions, FOperationComplete ResultCallback) {

    if(RealtimeOptions.OrderBy!="None" && RealtimeOptions.OrderByKeyOrValue!="None")
    {
        throw "Cannot be ordered by both Key and Value. Change one of them to \"None\"";
    }
    if((RealtimeOptions.StartAt!="None" || RealtimeOptions.EndAt!="None" || RealtimeOptions.LimitToFirst!="None"
           || RealtimeOptions.LimitToLast!="None" || RealtimeOptions.EqualTo!="None")
            && (RealtimeOptions.OrderBy=="None" && RealtimeOptions.OrderByKeyOrValue=="None" ))
    {
        throw "orderBy must be defined when other query parameters are defined";
    }
    if(RealtimeOptions.LimitToFirst!="None" && RealtimeOptions.LimitToLast!="None")
    {
        throw "Cannot use both limits together";
    }
    
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    UE_LOG(LogTemp, Warning, TEXT("Read Request"));
    HttpRequest->SetVerb("GET");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));
    FString finalURL = UFirebaseHelperBPLibrary::DatabaseURL + "/" + Path.TrimStartAndEnd() + ".json";
    FString OriginURL = finalURL;
    if(RealtimeOptions.OrderBy!="None")
    {
        finalURL += "?orderBy=\""+RealtimeOptions.OrderBy+"\"";
    }
    if(RealtimeOptions.OrderByKeyOrValue!="None")
    {
        finalURL += "?orderBy=\"$"+RealtimeOptions.OrderByKeyOrValue+"\"";
    }
    if(RealtimeOptions.StartAt!="None")
    {
        finalURL += "&startAt="+RealtimeOptions.StartAt;
    }
    if(RealtimeOptions.EndAt!="None")
    {
        finalURL += "&endAt="+RealtimeOptions.EndAt;
    }
    if(RealtimeOptions.LimitToFirst!="None")
    {
        finalURL += "&limitToFirst="+RealtimeOptions.LimitToFirst;
    }
    if(RealtimeOptions.LimitToLast!="None")
    {
        finalURL += "&limitToLast="+RealtimeOptions.LimitToLast;
    }
    if(RealtimeOptions.EqualTo!="None")
    {
        finalURL += "&equalTo="+RealtimeOptions.EqualTo;
    }
    if(OriginURL==finalURL)
    {
        if (RealtimeOptions.Shallow) {
            finalURL += "?shallow=true";
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
            }
            finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
        }
        else {
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "?auth=" + UFirebaseHelperBPLibrary::AuthToken;
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            } else
            {
                finalURL += "?timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            }
        }        
    } else
    {
        if (RealtimeOptions.Shallow) {
            finalURL += "&shallow=true";
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
            }
            finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
        }
        else {
            if (RealtimeOptions.UseAuth && UFirebaseHelperBPLibrary::AuthToken != "") {
                finalURL += "&auth=" + UFirebaseHelperBPLibrary::AuthToken;
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            } else
            {
                finalURL += "&timeout=" + FString::FromInt(RealtimeOptions.TimeOut) + "s";
            }
        }
    }
    HttpRequest->SetURL(finalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnReadReceived, ResultCallback);

    //Processing
    HttpRequest->ProcessRequest();
}