#include "URealtimeDatabaseHelper.h"

URealtimeDatabaseHelper::URealtimeDatabaseHelper(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

float URealtimeDatabaseHelper::AsRealtimeNumber(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsNumber();
}

TArray<FRealtimeValue> URealtimeDatabaseHelper::AsRealtimeArray(const FRealtimeValue RealtimeValue)
{
    TArray<FRealtimeValue> TempArray = TArray<FRealtimeValue>();
    for (const TSharedPtr<FJsonValue> Element : RealtimeValue.Value->AsArray())
    {
        TempArray.Add(FRealtimeValue(Element));
    }
    return TempArray;
}

bool URealtimeDatabaseHelper::AsRealtimeBool(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsBool();
}

FString URealtimeDatabaseHelper::AsRealtimeString(const FRealtimeValue RealtimeValue)
{
    return RealtimeValue.Value->AsString();
}

TMap<FString,  FRealtimeValue> URealtimeDatabaseHelper::AsRealtimeObject(const FRealtimeValue RealtimeValue)
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

FString URealtimeDatabaseHelper::JsonStringFromNumber(const TMap<FString, float> Map)
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

FString URealtimeDatabaseHelper::JsonStringFromBool(const TMap<FString, bool> Map)
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

FString URealtimeDatabaseHelper::JsonStringFromString(const TMap<FString, FString> Map)
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

FString URealtimeDatabaseHelper::JsonStringFromJsonString(const TArray<FString> Children)
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

FString URealtimeDatabaseHelper::JsonFieldFromBoolArray(const FString Key, const TArray<bool> Array)
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

FString URealtimeDatabaseHelper::JsonFieldFromNumberArray(const FString Key, const TArray<float> Array)
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

FString URealtimeDatabaseHelper::JsonFieldFromStringArray(const FString Key, const TArray<FString> Array)
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

FString URealtimeDatabaseHelper::MakeParentChildJson(const FString Parent, const FString ChildKey, const FString ChildValue)
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