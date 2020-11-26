// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "URealtimeDatabaseHelper.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Templates/SharedPointer.h"
#include "FirebaseHelperBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FAuthError
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString ErrorMessage;
	UPROPERTY(BlueprintReadOnly)
	int32 ErrorCode;
	
};

USTRUCT(BlueprintType)
struct FFirebaseAuthResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	bool WasSuccessful=false;
	UPROPERTY(BlueprintReadOnly)
	FString	ExpiresIn="";		//The number of seconds in which the ID token expires.
	UPROPERTY(BlueprintReadOnly)
	FString TokenType="";		//The type of the refresh token, always "Bearer".
	UPROPERTY(BlueprintReadOnly)
	FString RefreshToken="";		//The Firebase Auth refresh token provided in the request or a new refresh token.
	UPROPERTY(BlueprintReadOnly)
	FString IdToken="";		//A Firebase Auth ID token.
	UPROPERTY(BlueprintReadOnly)	
	FString UserId="";		//The uid corresponding to the provided ID token.
	UPROPERTY(BlueprintReadOnly)
	FString ProjectId="";
	UPROPERTY(BlueprintReadOnly)
	FString LocalId="";
	UPROPERTY(BlueprintReadOnly)
	FString Email="";
	UPROPERTY(BlueprintReadOnly)
	bool Registered=false;
	UPROPERTY(BlueprintReadOnly)
	FAuthError ErrorData;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FAuthOperationComplete, FFirebaseAuthResult, AuthComplete);

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
	static FString AuthEndPoint;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Setup Firebase", Keywords = "FirebaseHelper Setup Firebase"), Category = "FirebaseHelper")
	static void SetupFirebase();
	
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

	static void OnAuthResultReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, FAuthOperationComplete ResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange custom token for an ID and refresh token", Keywords = "FirebaseAuth CustomToken"), Category = "FirebaseAuth")
    static void ExchangeCustomToken(const FString& CustomToken, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exchange a refresh token for an ID token", Keywords = "Refresh Firebase ID"), Category = "FirebaseAuth")
    static void ExchangeRefreshToken(const FString& RefreshToken, FAuthOperationComplete AuthResultCallback);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign up with Email & Password", Keywords = "Create Account Firebase"), Category = "FirebaseAuth")
    static void SignUpWithEmailAndPassword(const FString& Email,const FString& Password, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign in with Email & Password", Keywords = "Login Firebase Auth"), Category = "FirebaseAuth")
    static void SignInWithEmailAndPassword(const FString& Email,const FString& Password, FAuthOperationComplete AuthResultCallback);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sign in anonymously",  Keywords = "Login Firebase Auth"), Category = "FirebaseAuth")
    static void SignInAnonymously(FAuthOperationComplete AuthResultCallback);

};


