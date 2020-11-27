// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirebaseHelperBPLibrary.h"

#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Misc/FileHelper.h"
#include "JsonObjectConverter.h"
#include "Templates/SharedPointer.h"

FString UFirebaseHelperBPLibrary::DatabaseURL = "";
FString UFirebaseHelperBPLibrary::APIKey = "";
FString UFirebaseHelperBPLibrary::AuthToken = "";
FString UFirebaseHelperBPLibrary::AuthEndPoint = "https://identitytoolkit.googleapis.com/v1/";
TSharedPtr<FJsonValue> FRealtimeValue::Value;
TMap<EFirebaseAuthIdp, FString> UFirebaseHelperBPLibrary::ProviderURL = {
		    {Apple ,"apple.com"},
            {AppleGameCenter,	"gc.apple.com"},
            {Facebook,	"facebook.com"},
            {GitHub,	"github.com"},
            {Google,	"google.com"},
            {GooglePlayGames,	"playgames.google.com"},
            {LinkedIn,	"linkedin.com"},
            {Microsoft,	"microsoft.com"},
            {Twitter,	"twitter.com"},
            {Yahoo,	"yahoo.com"},
};

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
























