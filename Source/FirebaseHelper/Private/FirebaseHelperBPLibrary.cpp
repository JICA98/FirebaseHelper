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

float UFirebaseHelperBPLibrary::AsRealtimeNumber(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsNumber();
}

TArray<FRealtimeValue> UFirebaseHelperBPLibrary::AsRealtimeArray(const FRealtimeValue RealtimeValue)
{
    TArray<FRealtimeValue> TempArray = TArray<FRealtimeValue>();
    for (const TSharedPtr<FJsonValue> Element : RealtimeValue.Value->AsArray())
    {
        TempArray.Add(FRealtimeValue(Element));
    }
    return TempArray;
}

bool UFirebaseHelperBPLibrary::AsRealtimeBool(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsBool();
}

FString UFirebaseHelperBPLibrary::AsRealtimeString(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsString();
}

TMap<FString,  FRealtimeValue> UFirebaseHelperBPLibrary::AsRealtimeObject(const FRealtimeValue RealtimeValue)
{
    TArray<FString> KeySet;
    TMap<FString,  FRealtimeValue> ReturnMap = TMap<FString,  FRealtimeValue>();
    TMap<FString, TSharedPtr<FJsonValue>> TempMap = RealtimeValue.Value->AsObject()->Values;
    
    TempMap.GetKeys(KeySet);
    for (FString Key : KeySet)
    {
        const TSharedPtr<FJsonValue> Value = TempMap[Key];
        ReturnMap.Add(Key, FRealtimeValue(Value));    
    }
    return  ReturnMap;
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

FString UFirebaseHelperBPLibrary::JsonStringFromNumber(const TMap<FString, float> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;
    
    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        JsonObject->SetField(Element, MakeShareable(new FJsonValueNumber(Map[Element])));
    }

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
   
    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonStringFromBool(const TMap<FString, bool> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;
    
    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        JsonObject->SetField(Element, MakeShareable(new FJsonValueBoolean(Map[Element])));
    }

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
   
    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonStringFromString(const TMap<FString, FString> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;
    
    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        JsonObject->SetField(Element, MakeShareable(new FJsonValueString(Map[Element])));
    }

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
   
    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonStringFromJsonString(const TArray<FString> Children)
{
    TSharedPtr<FJsonObject> ParentObject = MakeShareable(new FJsonObject());
    FString OutputString;

    for(FString Child: Children )
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        const TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(Child);

        if(FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            TArray<FString> KeySet;
            JsonObject->Values.GetKeys(KeySet);
            for(FString Key: KeySet)
            {
                ParentObject->SetField(Key, JsonObject->Values[Key]);
            }
        }
    }

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(ParentObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);
    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromBoolArray(const FString Key, const TArray<bool> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for(bool Element: Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueBoolean(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromNumberArray(const FString Key, const TArray<float> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for(float Element: Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueNumber(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromStringArray(const FString Key, const TArray<FString> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for(FString Element: Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueString(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::MakeParentChildJson(const FString Parent, const FString ChildKey, const FString ChildValue)
{
    TSharedPtr<FJsonObject> ParentObject = MakeShareable(new FJsonObject());
    TSharedPtr<FJsonObject> ChildObject = MakeShareable(new FJsonObject());
    FString OutputString;

    
    const TSharedRef< TJsonReader<> > ChildReader = TJsonReaderFactory<>::Create(ChildValue);
    const TSharedRef< TJsonReader<> > ParentReader = TJsonReaderFactory<>::Create(Parent);
    

    if(FJsonSerializer::Deserialize(ChildReader, ChildObject))
    {
        if(FJsonSerializer::Deserialize(ParentReader, ParentObject))
        {
            ParentObject->SetObjectField(ChildKey, ChildObject);
        }  
    }

    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(ParentObject.ToSharedRef(), Writer);
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


void UFirebaseHelperBPLibrary::RealtimeDatabaseWrite(const FString& Path, const FString& Content ,FRealtimeWriteOptions Options, FOperationComplete ResultCallback )
{
    if(Options.Update && Options.WriteAsChild)
    {
        throw "Cannot Update and Write as Child at the same time.";
    }
    if(Options.Update && Options.ReceiveExTag)
    {
        throw "Cannot Update and Receive ExTag at the same time.";
    }
    if(Options.Update && Options.WriteExTag!="None")
    {
        throw "Cannot Update and Write ExTag at the same time.";
    }
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	if(Options.Update)
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