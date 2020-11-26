#include "URealtimeDatabaseHelper.h"

URealtimeDatabaseHelper::URealtimeDatabaseHelper(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void URealtimeDatabaseHelper::OnDeleteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
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

void URealtimeDatabaseHelper::OnReadReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
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

void URealtimeDatabaseHelper::OnListenerDataReceived(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived, FOperationComplete ResultCallback, FFirebaseData RootData)
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


void URealtimeDatabaseHelper::OnWriteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback)
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