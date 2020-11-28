﻿#include "CloudFirestore.h"


#include "FirebaseHelperBPLibrary.h"
#include "HttpModule.h"

UCloudFirestore::UCloudFirestore(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

FString UCloudFirestore::StringArrayToDocumentPath(TArray<FString> DocumentPath)
{
    FString FullPath="";
    for(FString Path: DocumentPath)
    {
        FullPath += Path + "/";
    }
    FullPath.RemoveFromEnd("/");
    return FullPath;
}

FString UCloudFirestore::SetDataAsMapFirestore(FString FirestoreString, FString Key)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;
    const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(FirestoreString);

    if (FJsonSerializer::Deserialize(Reader, JsonObject))
    {
    }
    
    const TSharedPtr<FJsonObject> FieldObject = MakeShareable(new FJsonObject());
    FieldObject->SetObjectField("fields", JsonObject);
    const TSharedPtr<FJsonObject> MapObject = MakeShareable(new FJsonObject());
    MapObject->SetObjectField("mapValue", FieldObject);
    const TSharedPtr<FJsonObject> FirestoreObject = MakeShareable(new FJsonObject());
    MapObject->SetObjectField(Key, FieldObject);
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(FirestoreObject.ToSharedRef(), Writer);
    return OutputString;
}


FFireString UCloudFirestore::FirestoreStringFromGeoPointMap(const TMap<FString, FLatLng> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        const TSharedPtr<FJsonObject> GeoPointObj = MakeShareable(new FJsonObject());
        GeoPointObj->SetNumberField("latitude", Map[Element].Latitude);
        GeoPointObj->SetNumberField("longitude", Map[Element].Longitude);
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("geoPointValue", MakeShareable(new FJsonValueObject(GeoPointObj)));
        JsonObject->SetObjectField(Element, ValueObj);
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFromGeoPointArray(const FString Key, const TArray<FLatLng> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (const FLatLng Element : Array)
    {
        const TSharedPtr<FJsonObject> GeoPointObj = MakeShareable(new FJsonObject());
        GeoPointObj->SetNumberField("latitude", Element.Latitude);
        GeoPointObj->SetNumberField("longitude", Element.Longitude);
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("geoPointValue", MakeShareable(new FJsonValueObject(GeoPointObj)));
        ValueArray.Add(MakeShareable(new FJsonValueObject(ValueObj)));
    }
    TSharedPtr<FJsonObject> ValueObject = MakeShareable(new FJsonObject());
    ValueObject->SetArrayField("values", ValueArray);
    TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
    ArrayObject->SetObjectField("arrayValue", ValueObject);
    
    JsonObject->SetObjectField(Key, ArrayObject);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return FFireString(OutputString);
}


FFireString UCloudFirestore::FirestoreStringFromNumber(const TMap<FString, float> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("doubleValue", MakeShareable(new FJsonValueNumber(Map[Element])));
        JsonObject->SetObjectField(Element, ValueObj);
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFromInteger(const TMap<FString, int32> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("integerValue", MakeShareable(new FJsonValueNumber(Map[Element])));
        JsonObject->SetObjectField(Element, ValueObj);
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFromBool(const TMap<FString, bool> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("booleanValue", MakeShareable(new FJsonValueBoolean(Map[Element])));
        JsonObject->SetObjectField(Element, ValueObj);
    }

    const TSharedPtr<FJsonObject> MapObject = MakeShareable(new FJsonObject());
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFromString(const TMap<FString, FString> Map)
{
    const TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<FString> KeySet;
    Map.GetKeys(KeySet);
    for (FString Element : KeySet)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("doubleValue", MakeShareable(new FJsonValueString(Map[Element])));
        JsonObject->SetObjectField(Element, ValueObj);
    }

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFromJsonString(const TArray<FString> Children)
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
    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFieldFromBoolArray(const FString Key, const TArray<bool> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (const bool Element : Array)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("booleanValue", MakeShareable(new FJsonValueBoolean(Element)));
        ValueArray.Add(MakeShareable(new FJsonValueObject(ValueObj)));
    }
    TSharedPtr<FJsonObject> ValueObject = MakeShareable(new FJsonObject());
    ValueObject->SetArrayField("values", ValueArray);
    TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
    ArrayObject->SetObjectField("arrayValue", ValueObject);
    
    JsonObject->SetObjectField(Key, ArrayObject);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFieldFromNumberArray(const FString Key, const TArray<float> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (const float Element : Array)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("integerValue", MakeShareable(new FJsonValueNumber(Element)));
        ValueArray.Add(MakeShareable(new FJsonValueObject(ValueObj)));
    }
    TSharedPtr<FJsonObject> ValueObject = MakeShareable(new FJsonObject());
    ValueObject->SetArrayField("values", ValueArray);
    TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
    ArrayObject->SetObjectField("arrayValue", ValueObject);
    
    JsonObject->SetObjectField(Key, ArrayObject);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFieldFromIntegerArray(const FString Key, const TArray<int32> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (const int32 Element : Array)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("integerValue", MakeShareable(new FJsonValueNumber(Element)));
        ValueArray.Add(MakeShareable(new FJsonValueObject(ValueObj)));
    }
    TSharedPtr<FJsonObject> ValueObject = MakeShareable(new FJsonObject());
    ValueObject->SetArrayField("values", ValueArray);
    TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
    ArrayObject->SetObjectField("arrayValue", ValueObject);
    
    JsonObject->SetObjectField(Key, ArrayObject);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return FFireString(OutputString);
}

FFireString UCloudFirestore::FirestoreStringFieldFromStringArray(const FString Key, const TArray<FString> Array)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    FString OutputString;

    TArray<TSharedPtr<FJsonValue>> ValueArray = {};

    for (const FString Element : Array)
    {
        const TSharedPtr<FJsonObject> ValueObj = MakeShareable(new FJsonObject());
        ValueObj->SetField("booleanValue", MakeShareable(new FJsonValueString(Element)));
        ValueArray.Add(MakeShareable(new FJsonValueObject(ValueObj)));
    }
    TSharedPtr<FJsonObject> ValueObject = MakeShareable(new FJsonObject());
    ValueObject->SetArrayField("values", ValueArray);
    TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
    ArrayObject->SetObjectField("arrayValue", ValueObject);
    
    JsonObject->SetObjectField(Key, ArrayObject);

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);

    return FFireString(OutputString);
}


void UCloudFirestore::OnBatchDocumentsFetch(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FBatchDocumentsFetch ResultCallback)
{
    bWasSuccessful = false;
    FMultipleDocuments MultipleDocuments = FMultipleDocuments();
    TArray<FString> MissingDocuments = {};
    FErrorData ErrorData = FErrorData();
   if(Response != nullptr)
   {
       const FString JsonString = "{ \"array\": "+Response->GetContentAsString()+"}";
       //UE_LOG(LogTemp, Error, TEXT("%s"), *JsonString);
       TSharedPtr<FJsonObject> ArrayObject = MakeShareable(new FJsonObject());
       const TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(JsonString);

       if(FJsonSerializer::Deserialize(Reader, ArrayObject))
       {
           TArray<TSharedPtr<FJsonValue>> JsonValueArray = ArrayObject->GetArrayField("array");
           for(TSharedPtr<FJsonValue> Element: JsonValueArray)
           {
               TSharedPtr<FJsonObject> JsonObject = Element->AsObject();
               if(JsonObject->HasField("found"))
               {
                   TSharedPtr<FJsonObject> FoundObject = JsonObject->GetObjectField("found");
                   FDocumentSnapshot DocumentSnapshot = FDocumentSnapshot();
                   bWasSuccessful = true;
                   DocumentSnapshot.ResourceName = FoundObject->GetStringField("name");
                   TMap<FString, TSharedPtr<FJsonValue>> TempMap = FoundObject->GetObjectField("fields")->Values;
                   TMap<FString, FJsonValueB> Fields = {};
                   TArray<FString> KeySet = {};
                   TempMap.GetKeys(KeySet);
                   for(FString Key: KeySet)
                   {
                       TMap<FString, TSharedPtr<FJsonValue>> ObjectMap = TempMap[Key]->AsObject()->Values;
                       TArray<FString> Keys;
                       ObjectMap.GetKeys(Keys);
                       FString KKeyE = Keys.Pop();
                       Fields.Add(Key, FJsonValueB(ObjectMap[KKeyE], KKeyE));
                   }
                   DocumentSnapshot.Fields = Fields;
                   DocumentSnapshot.CreateTime = FoundObject->GetStringField("createTime");
                   DocumentSnapshot.UpdateTime = FoundObject->GetStringField("updateTime");
                   MultipleDocuments.DocumentSnapshots.Add(DocumentSnapshot);
                   
               } else if(JsonObject->HasField("missing"))
               {
                   bWasSuccessful = true;
                   MissingDocuments.Add(JsonObject->GetStringField("missing"));
               }
           }
       } else
       {
           UE_LOG(LogTemp, Error, TEXT("Couldn't Parse"), );
       }
   }
    if(!bWasSuccessful)
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            ErrorData.Code = ErrorObject->GetObjectField("error")->GetNumberField("code");
            ErrorData.Message = ErrorObject->GetObjectField("error")->GetStringField("message");
            ErrorData.Status = ErrorObject->GetObjectField("error")->GetStringField("status");
        }

        const FString ResultString = "Operation Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if(ResultCallback.ExecuteIfBound(MultipleDocuments, {},  bWasSuccessful, ErrorData)){} 
}



void UCloudFirestore::OnDocumentReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FGetDocumentResult ResultCallback)
{
    bWasSuccessful = false;
    FDocumentSnapshot DocumentSnapshot = FDocumentSnapshot();
    FErrorData ErrorData = FErrorData();
   if(Response != nullptr)
   {
       UE_LOG(LogTemp, Error, TEXT("%s"), *Response->GetContentAsString());
       TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
       const TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

       if(FJsonSerializer::Deserialize(Reader, JsonObject))
       {
          if(JsonObject->HasField("name"))
          {
            bWasSuccessful = true;
            DocumentSnapshot.ResourceName = JsonObject->GetStringField("name");
            TMap<FString, TSharedPtr<FJsonValue>> TempMap = JsonObject->GetObjectField("fields")->Values;
            TMap<FString, FJsonValueB> Fields = {};
            TArray<FString> KeySet = {};
            TempMap.GetKeys(KeySet);
            for(FString Key: KeySet)
            {
                TMap<FString, TSharedPtr<FJsonValue>> ObjectMap = TempMap[Key]->AsObject()->Values;
                TArray<FString> Keys;
                ObjectMap.GetKeys(Keys);
                FString KKeyE = Keys.Pop();
                Fields.Add(Key, FJsonValueB(ObjectMap[KKeyE], KKeyE));
            }
            DocumentSnapshot.Fields = Fields;
            DocumentSnapshot.CreateTime = JsonObject->GetStringField("createTime");
            DocumentSnapshot.UpdateTime = JsonObject->GetStringField("updateTime");
          }  
       }
   }
    if(!bWasSuccessful)
    {
        TSharedPtr<FJsonObject> ErrorObject = MakeShareable(new FJsonObject());
        const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(
            Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, ErrorObject);

        if (ErrorObject->HasField("error"))
        {
            ErrorData.Code = ErrorObject->GetObjectField("error")->GetNumberField("code");
            ErrorData.Message = ErrorObject->GetObjectField("error")->GetStringField("message");
            ErrorData.Status = ErrorObject->GetObjectField("error")->GetStringField("status");
        }

        const FString ResultString = "Operation Unsuccessful with code " + FString::FromInt(
                Response->GetResponseCode())
            + " \nDescription " + Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("%s"), *ResultString);
    }
    if(ResultCallback.ExecuteIfBound(DocumentSnapshot, bWasSuccessful, ErrorData )){}
}

void UCloudFirestore::GetDocumentFirestoreString(FString DocumentPath, FGetDocumentResult ResultCallback, TArray<FString> FieldsToReturn)
{
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("GET");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));

    FString FinalUrl = UFirebaseHelperBPLibrary::FirestoreEndPoint+
            "projects/"+UFirebaseHelperBPLibrary::ProjectId+"/databases/(default)/documents/"+DocumentPath
                +"?key=" + UFirebaseHelperBPLibrary::APIKey;
    if(FieldsToReturn.Num()!=0)
    {
        for(FString Field: FieldsToReturn)
        {
            FinalUrl += "&mask.FieldPaths=" + Field;
        }
    }
    HttpRequest->SetURL(FinalUrl);
    HttpRequest->OnProcessRequestComplete().BindStatic(OnDocumentReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UCloudFirestore::GetMultipleDocumentsDifferent(TArray<FString> DocumentPaths, FBatchDocumentsFetch ResultCallback, TArray<FString> FieldsToReturn)
{
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));

    FString FinalUrl = UFirebaseHelperBPLibrary::FirestoreEndPoint+"projects/"
    +UFirebaseHelperBPLibrary::ProjectId+"/databases/(default)/documents:batchGet"+"?key=" + UFirebaseHelperBPLibrary::APIKey;
    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());

    TArray<TSharedPtr<FJsonValue>> DocumentPathsJsonValues = {};
    for(FString DocPath: DocumentPaths)
    {
        DocumentPathsJsonValues.Add(MakeShareable(new FJsonValueString("projects/"+UFirebaseHelperBPLibrary::ProjectId
            +"/databases/(default)/documents/"+DocPath)));
    }
    Content->SetArrayField("documents", DocumentPathsJsonValues);

    if(FieldsToReturn.Num()!=0)
    {
        TSharedPtr<FJsonObject> MaskContent = MakeShareable(new FJsonObject());

        TArray<TSharedPtr<FJsonValue>> FieldPathsJsonValues = {};
        for(FString Field: FieldsToReturn)
        {
            FieldPathsJsonValues.Add(MakeShareable(new FJsonValueString(Field)));
        }
        MaskContent->SetArrayField("fieldPaths", DocumentPathsJsonValues);
        Content->SetObjectField("mask", MaskContent);
    }
   // Content->SetObjectField("newTransaction", MakeShareable(new FJsonObject()));

    FString OutputString;

    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Error, TEXT("%s"), *FinalUrl);
    UE_LOG(LogTemp, Error, TEXT("%s"), *OutputString);

    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalUrl);
    HttpRequest->OnProcessRequestComplete().BindStatic(OnBatchDocumentsFetch, ResultCallback);
    HttpRequest->ProcessRequest();
}


void UCloudFirestore::CreateDocument(FFireString FirestoreData,FString CollectionPath, FGetDocumentResult ResultCallback, TArray<FString> FieldsToReturn,FString OptionalDocumentId)
{
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));

    FString FinalUrl = UFirebaseHelperBPLibrary::FirestoreEndPoint+
            "projects/"+UFirebaseHelperBPLibrary::ProjectId+"/databases/(default)/documents/"+CollectionPath
                +"?key=" + UFirebaseHelperBPLibrary::APIKey;
    if(FieldsToReturn.Num()!=0)
    {
        for(FString Field: FieldsToReturn)
        {
            FinalUrl += "&mask.FieldPaths=" + Field;
        }
    }

    //Content
    TSharedPtr<FJsonObject> Content = MakeShareable(new FJsonObject());
    TSharedPtr<FJsonObject> FirestoreDataObject = MakeShareable(new FJsonObject());

    const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(FirestoreData.Object);
    FJsonSerializer::Deserialize(JsonReader, FirestoreDataObject);
    
    Content->SetObjectField("fields", FirestoreDataObject);
    
    FString OutputString;
    
    if(OptionalDocumentId !="")
    {
        FinalUrl += "&documentId=" + OptionalDocumentId;
    }

    
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(Content.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *OutputString);
    
    HttpRequest->SetContentAsString(OutputString);
    HttpRequest->SetURL(FinalUrl);
    HttpRequest->OnProcessRequestComplete().BindStatic(OnDocumentReceived, ResultCallback);
    HttpRequest->ProcessRequest();
}



