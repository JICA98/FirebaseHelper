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
FString UFirebaseHelperBPLibrary::AuthEndPoint = "https://identitytoolkit.googleapis.com/v1/";
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
    HttpRequest->OnProcessRequestComplete().BindStatic(URealtimeDatabaseHelper::OnDeleteReceived, ResultCallback);
    HttpRequest->ProcessRequest();
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

	HttpRequest->OnProcessRequestComplete().BindStatic(URealtimeDatabaseHelper::OnWriteReceived, ResultCallback);
    HttpRequest->ProcessRequest();
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

    HttpRequest->OnRequestProgress().BindStatic(URealtimeDatabaseHelper::OnListenerDataReceived, ListenerCallback, RootData);

    //HttpRequest->OnProcessRequestComplete();

    //Processing
    HttpRequest->ProcessRequest();
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

    HttpRequest->OnProcessRequestComplete().BindStatic(URealtimeDatabaseHelper::OnReadReceived, ResultCallback);

    //Processing
    HttpRequest->ProcessRequest();
}

void UFirebaseHelperBPLibrary::OnAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FAuthOperationComplete ResultCallback)
{
    FFirebaseAuthResult Result = FFirebaseAuthResult();
    Result.WasSuccessful = Response->GetResponseCode() == 200;
    if(Result.WasSuccessful)
    {
        TSharedPtr<FJsonObject> AuthObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, AuthObject);
        if(AuthObject->HasField("idToken"))
        {
            Result.IdToken = AuthObject->GetStringField("idToken");
        }
        if(AuthObject->HasField("refreshToken"))
        {
            Result.RefreshToken = AuthObject->GetStringField("refreshToken");
        }
        if(AuthObject->HasField("expiresIn"))
        {
            Result.ExpiresIn = AuthObject->GetStringField("expiresIn");
        }
        if(AuthObject->HasField("token_type"))
        {
            Result.TokenType = AuthObject->GetStringField("token_type");
        }
        if(AuthObject->HasField("user_id"))
        {
            Result.UserId = AuthObject->GetStringField("user_id");
        }
        if(AuthObject->HasField("project_id"))
        {
            Result.ProjectId = AuthObject->GetStringField("project_id");
        }
        if(AuthObject->HasField("localId"))
        {
            Result.LocalId = AuthObject->GetStringField("localId");
        }
        if(AuthObject->HasField("email"))
        {
            Result.Email = AuthObject->GetStringField("email");
        }
        if(AuthObject->HasField("registered"))
        {
            Result.Registered = AuthObject->GetBoolField("registered");
        }
    } else
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if(ErrorObject->HasField("error"))
        {
            Result.ErrorData.ErrorCode = ErrorObject->GetObjectField("error")->GetNumberField("code");
            Result.ErrorData.ErrorMessage = ErrorObject->GetObjectField("error")->GetStringField("message");
        }
       
        const FString ResultString = "Auth Result Unsuccessful with code "+ FString::FromInt(Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
       UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if(ResultCallback.ExecuteIfBound(Result)){}
}


 void UFirebaseHelperBPLibrary::ExchangeCustomToken(const FString& CustomToken, FAuthOperationComplete AuthResultCallback)
 {
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = AuthEndPoint+"accounts:signInWithCustomToken?key="+APIKey;
    //Content
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("token", CustomToken);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;
    
    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    
    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest();
 }


void UFirebaseHelperBPLibrary::ExchangeRefreshToken(const FString& RefreshToken, FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
    const FString FinalURL = AuthEndPoint+"token?key="+APIKey;
    //Content
    HttpRequest->SetContentAsString(TEXT("grant_type=refresh_token&refresh_token="+RefreshToken));
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest(); 
}


void UFirebaseHelperBPLibrary::SignUpWithEmailAndPassword(const FString& Email, const FString& Password, FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = AuthEndPoint+"accounts:signUp?key="+APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("email", Email);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;
    
    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    
    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest(); 
}

void UFirebaseHelperBPLibrary::SignInWithEmailAndPassword(const FString& Email, const FString& Password, FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = AuthEndPoint+"accounts:signInWithPassword?key="+APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetStringField("email", Email);
    Content->SetStringField("password", Password);
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;
    
    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    
    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);

    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest(); 
}

void UFirebaseHelperBPLibrary::SignInAnonymously(FAuthOperationComplete AuthResultCallback)
{
    TSharedPtr<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    const FString FinalURL = AuthEndPoint+"accounts:signUp?key="+APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    Content->SetBoolField("returnSecureToken", true);

    FString OutputString;
    
    const TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    
    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalURL);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalURL);
    HttpRequest->OnProcessRequestComplete().BindStatic(UFirebaseHelperBPLibrary::OnAuthResultReceived, AuthResultCallback);
    HttpRequest->ProcessRequest(); 
}





