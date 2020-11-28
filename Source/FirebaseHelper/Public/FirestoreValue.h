#pragma once

#include "Templates/SharedPointer.h"
#include "FirestoreValue.generated.h"

/*
 An object representing a latitude/longitude pair.
 This is expressed as a pair of doubles representing degrees latitude and degrees longitude.
 Unless specified otherwise, this must conform to the WGS84 standard. Values must be within normalized ranges.
 */
USTRUCT(BlueprintType)
struct FGeoPoint
{
	GENERATED_BODY()
	
public:
	FGeoPoint()
	{
		Latitude = 0.0;
		Longitude = 0.0;
	}
	FGeoPoint(float Lat, float Lon)
	{
		Latitude = Lat;
		Longitude = Lon;
	}
	UPROPERTY(BlueprintReadWrite)
	float Latitude;			//The latitude in degrees. It must be in the range [-90.0, +90.0].
	UPROPERTY(BlueprintReadWrite)
	float Longitude;			//The longitude in degrees. It must be in the range [-180.0, +180.0].
	
};

USTRUCT(BlueprintType)
struct FJsonValueB
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString FieldType;
	TSharedPtr<FJsonValue> Value;
	FJsonValueB(){}
	FJsonValueB(const TSharedPtr<FJsonValue> Val,const FString FT)
	{
		Value = Val;
		FieldType = FT;
	}
	FJsonValueB(const TSharedPtr<FJsonValue> Val)
	{
		Value = Val;
		FieldType = "";
	}
	
	
};

UCLASS(Blueprintable)
class UFirestoreValue : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	//A boolean value.
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Boolean Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static bool BooleanValue(FJsonValueB Value);

	//string (int64 format) An integer value.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Integer Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	int64 IntegerValue(FJsonValueB Value) ;

	//number - A double value.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	float FloatValue(FJsonValueB Value) ;

	//string (Timestamp format) A timestamp value. Precise only to microseconds. When stored, any additional precision is rounded down. A timestamp in RFC3339 UTC "Zulu" format, with nanosecond resolution and up to nine fractional digits. Examples: "2014-10-02T15:01:23Z" and "2014-10-02T15:01:23.045123456Z".
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get TimeStamp Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	FString TimestampValue(FJsonValueB Value) ;

	//A string value. The string, represented as UTF-8, must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes of the UTF-8 representation are considered by queries.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get String Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	FString StringValue(FJsonValueB Value) ;

	//String (bytes format). A bytes value. Must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes are considered by queries. A base64-encoded string.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Bytes Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	FString BytesValue(FJsonValueB Value) ;						

	//A reference to a document. For example: projects/{project_id}/databases/{database_id}/documents/{document_path}.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Reference Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	FString ReferenceValue(FJsonValueB Value) ;
	
	//Object (LatLng) A geo point value representing a point on the surface of Earth.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get GeoPoint Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	FGeoPoint GeoPointValue(FJsonValueB Value) ;

	//Object (ArrayValue) An array value. Cannot directly contain another array value, though can contain an map which contains another array.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Array of Firestore Values", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	TArray<FJsonValueB> ArrayValue(FJsonValueB Value) ;

	//Object (MapValue). A map value.
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Map of String-Firestore Value", Keywords = "Cloud Firestore Boolean"), Category = "CloudFirestore")
	static	TMap<FString, FJsonValueB> MapValue(FJsonValueB Value) ;	
    
};
