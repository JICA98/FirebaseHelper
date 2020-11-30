// Copyright Name: Jica, Year of Intended Publishing 2020.

#include "FirebaseHelperBPLibrary.h"

#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "JsonObjectConverter.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"

FString UFirebaseHelperBPLibrary::ProjectId = "";
FString UFirebaseHelperBPLibrary::DatabaseURL = "";
FString UFirebaseHelperBPLibrary::APIKey = "";
FString UFirebaseHelperBPLibrary::AuthToken = "";
FString UFirebaseHelperBPLibrary::OAuthAccessToken="";
FString UFirebaseHelperBPLibrary::AuthEndPoint = "https://identitytoolkit.googleapis.com/v1/";
FString UFirebaseHelperBPLibrary::FirestoreEndPoint = "https://firestore.googleapis.com/v1beta1/";
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

FString UFirebaseHelperBPLibrary::GetAuthID()
{
    return AuthToken;
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
    FString file = FPaths::ProjectContentDir();
    file.Append(TEXT("StreamedAssets/google-services.json"));
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
                UFirebaseHelperBPLibrary::ProjectId = ProjectConfig->GetStringField("project_id");
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

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonStringFromInteger(const TMap<FString, int32> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        JsonObject->SetField(Element, MakeShareable(new FJsonValueNumber(Map[Element])));
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
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

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
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

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonStringFromJsonString(const TArray<FString> Children)
{
    TSharedPtr<FJsonObject> ParentObject = MakeShareable(new FJsonObject());
    FString OutputString;

    for (FString Child : Children)
    {
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Child);

        if (FJsonSerializer::Deserialize(Reader, JsonObject))
        {
            TArray<FString> KeySet;
            JsonObject->Values.GetKeys(KeySet);
            for (FString Key : KeySet)
            {
                ParentObject->SetField(Key, JsonObject->Values[Key]);
            }
        }
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(ParentObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);
    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromBoolArray(const FString Key, const TArray<bool> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (bool Element : Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueBoolean(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromNumberArray(const FString Key, const TArray<float> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (float Element : Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueNumber(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromIntegerArray(const FString Key, const TArray<int32> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (float Element : Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueNumber(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::JsonFieldFromStringArray(const FString Key, const TArray<FString> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (FString Element : Array)
    {
        ValueArray.Add(MakeShareable(new FJsonValueString(Element)));
    }
    JsonObject->SetArrayField(Key, ValueArray);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

FString UFirebaseHelperBPLibrary::MakeParentChildJson(const FString Parent, const FString ChildKey, const FString ChildValue)
{
    TSharedPtr<FJsonObject> ParentObject = MakeShareable(new FJsonObject());
    TSharedPtr<FJsonObject> ChildObject = MakeShareable(new FJsonObject());
    FString OutputString;


    const TSharedRef<TJsonReader<>> ChildReader = TJsonReaderFactory<>::Create(ChildValue);
    const TSharedRef<TJsonReader<>> ParentReader = TJsonReaderFactory<>::Create(Parent);


    if (FJsonSerializer::Deserialize(ChildReader, ChildObject))
    {
        if (FJsonSerializer::Deserialize(ParentReader, ParentObject))
        {
            ParentObject->SetObjectField(ChildKey, ChildObject);
        }
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(ParentObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return OutputString;
}

























