#include "FirestoreValue.h"


///TSharedPtr<FJsonValue> FJsonValueB::Value;

UFirestoreValue::UFirestoreValue(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TArray<FJsonValueB> UFirestoreValue::ArrayValue(FJsonValueB Value)
{
    TArray<FJsonValueB> Temp = {};
    for(const TSharedPtr<FJsonValue> ArrayValue: Value.Value->AsArray())
    {
        Temp.Add(FJsonValueB(ArrayValue));
    }
    return TArray<FJsonValueB>();
}

FLatLng UFirestoreValue::GeoPointValue(FJsonValueB Value)
{
    return FLatLng(
        Value.Value->AsObject()->GetNumberField("latitude"),Value.Value->AsObject()->GetNumberField("longitude")
    );
}

FString UFirestoreValue::TimestampValue(FJsonValueB Value)
{
    return Value.Value->AsString();
}

FString UFirestoreValue::StringValue(FJsonValueB Value)
{
    return Value.Value->AsString();
}

FString UFirestoreValue::ReferenceValue(FJsonValueB Value)
{
    return Value.Value->AsString();
}

TMap<FString, FJsonValueB> UFirestoreValue::MapValue(FJsonValueB Value)
{
    TMap<FString, FJsonValueB> TempMap = {};
    TMap<FString, TSharedPtr<FJsonValue>> ObjectMap = Value.Value->AsObject()->Values;
    TArray<FString> KeySet ={};
    ObjectMap.GetKeys(KeySet);
    for(FString Key:KeySet)
    {
        TempMap.Add(Key, FJsonValueB(ObjectMap[Key]));
    }
    return TempMap;
}

int64 UFirestoreValue::IntegerValue(FJsonValueB Value)
{
    return Value.Value->AsNumber();
}

float UFirestoreValue::FloatValue(FJsonValueB Value)
{
    return Value.Value->AsNumber();
}

FString UFirestoreValue::BytesValue(FJsonValueB Value)
{
    return Value.Value->AsString();
}

bool UFirestoreValue::BooleanValue(FJsonValueB Value)
{
    return Value.Value->AsBool();
}










