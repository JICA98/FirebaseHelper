// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "URealtimeDatabaseHelper.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Templates/SharedPointer.h"
#include "FirebaseHelperBPLibrary.generated.h"


UCLASS()
class UFirebaseHelperBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	/*
	* FIREBASE CONFIG MEMBERS
	*/
	
	static FString DatabaseURL;
	static FString APIKey;
	static FString AuthToken;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Setup Firebase", Keywords = "FirebaseHelper Setup Firebase"), Category = "FirebaseHelper")
	static void SetupFirebase();

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

	static TMap<FString, TSharedPtr<FJsonValue>> DeserializeData(const FString Content);
	static FString SerializeData(const TMap<FString,  FRealtimeValue> Map);

	/*
	 * FIREBASE AUTH FUNCTIONS
	 */
	

};


