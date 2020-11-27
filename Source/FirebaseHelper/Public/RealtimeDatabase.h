﻿#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Templates/SharedPointer.h"
#include "RealtimeDatabase.generated.h"

USTRUCT(BlueprintType)
struct FRealtimeValue
{
	GENERATED_BODY()
	
	static TSharedPtr<FJsonValue> Value;

	FRealtimeValue(){}

	FRealtimeValue(TSharedPtr<FJsonValue> Val)
	{
		Value = Val;
	}
};

USTRUCT(BlueprintType)
struct FFirebaseData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FRealtimeValue> Data;
	UPROPERTY(BlueprintReadOnly)
	FString Status;
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful;
	UPROPERTY(BlueprintReadOnly)
	FString ExTag;

};

USTRUCT(BlueprintType)
struct FRealtimeReadOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	bool UseAuth=false;
	UPROPERTY(BlueprintReadWrite)
	bool Shallow=false;
	UPROPERTY(BlueprintReadWrite)
	int32 TimeOut=60;
	UPROPERTY(BlueprintReadWrite)
	FString OrderBy="None";
	UPROPERTY(BlueprintReadWrite)
	FString OrderByKeyOrValue="None";
	UPROPERTY(BlueprintReadWrite)
	FString StartAt="None";
	UPROPERTY(BlueprintReadWrite)
	FString EndAt="None";
	UPROPERTY(BlueprintReadWrite)
	FString LimitToFirst="None";
	UPROPERTY(BlueprintReadWrite)
	FString LimitToLast="None";
	UPROPERTY(BlueprintReadWrite)
	FString EqualTo="None";
};

USTRUCT(BlueprintType)
struct FRealtimeWriteOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	bool WriteAsChild=false;
	UPROPERTY(BlueprintReadWrite)
	bool ReceiveExTag=false;
	UPROPERTY(BlueprintReadWrite)
	FString WriteExTag="None";
	UPROPERTY(BlueprintReadWrite)
	bool ReceiveDataSent=false;
	UPROPERTY(BlueprintReadWrite)
	bool UseAuth=false;
};


DECLARE_DYNAMIC_DELEGATE_OneParam(FOperationComplete, FFirebaseData, ResultCallback);

UCLASS()
class URealtimeDatabase: public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()
public:
	/*
	* HTTP CALLBACK METHODS
	*/

	static void OnDeleteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback);

	static void OnWriteReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback);

	static void OnReadReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FOperationComplete ResultCallback);

	static void OnListenerDataReceived(FHttpRequestPtr Request, int32 BytesSent, int32 BytesReceived, FOperationComplete ResultCallback, FFirebaseData RootData);
	/*
	* REALTIME DATABASE FUNCTIONS
	*/
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete From RealtimeDatabase", Keywords = "RealtimeDatabase Delete"), Category = "RealtimeDatabase")
    static void RealtimeDatabaseDelete(const FString& Path, const bool UseAuth,const bool ReceiveDataSent, FOperationComplete ResultCallback  );

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Write To RealtimeDatabase", Keywords = "RealtimeDatabase Write"), Category = "RealtimeDatabase")
    static void RealtimeDatabaseWrite(const FString& Path, const FString& Content ,const bool Update, FRealtimeWriteOptions Options, FOperationComplete ResultCallback  );

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read From RealtimeDatabase", Keywords = "RealtimeDatabase Delete"), Category = "RealtimeDatabase")
    static void RealtimeDatabaseRead(const FString& Path, const FRealtimeReadOptions RealtimeOptions, FOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Listen From RealtimeDatabase", Keywords = "RealtimeDatabase Listen"), Category = "RealtimeDatabase")
    static void RealtimeDatabaseListener(const FString& Path, const FRealtimeReadOptions RealtimeOptions, FOperationComplete ListenerCallback);

    /*
	* REALTIME DATABASE HELPER FUNCTIONS
	*/
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Number from RealtimeValue", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Read Helper")
	static float AsRealtimeNumber(const FRealtimeValue RealtimeValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get String from RealtimeValue", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Read Helper")
    static FString AsRealtimeString(const FRealtimeValue RealtimeValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Boolean from RealtimeValue", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Read Helper")
	static bool AsRealtimeBool(const FRealtimeValue RealtimeValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Array from RealtimeValue", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Read Helper")
	static TArray<FRealtimeValue> AsRealtimeArray(const FRealtimeValue RealtimeValue);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get RealtimeMap", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Read Helper")
	static TMap<FString,  FRealtimeValue> AsRealtimeObject(const FRealtimeValue RealtimeValue);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Number Map to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString JsonStringFromNumber(const TMap<FString,  float> Map);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Map to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
	static FString JsonStringFromString(const TMap<FString,  FString> Map);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Map to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString JsonStringFromBool(const TMap<FString,  bool> Map);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Array to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString JsonFieldFromBoolArray(const FString Key, const TArray<bool> Array);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Map to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString JsonFieldFromStringArray(const FString Key, const TArray<FString> Array);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Map to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString JsonFieldFromNumberArray(const FString Key, const TArray<float> Array);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Combine JsonString to JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
	static FString JsonStringFromJsonString(const TArray<FString> Children);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Make Parent-Child JsonString", Keywords = "RealtimeDatabase Helper"), Category = "RealtimeDatabase Write Helper")
    static FString MakeParentChildJson(const FString Parent, const FString ChildKey, const FString ChildValue );
};