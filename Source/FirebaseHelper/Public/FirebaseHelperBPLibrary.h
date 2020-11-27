// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "FirebaseAuth.h"
#include "RealtimeDatabase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
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
	static FString AuthEndPoint;
	static TMap<EFirebaseAuthIdp, FString> ProviderURL;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Setup Firebase", Keywords = "FirebaseHelper Setup Firebase"), Category = "FirebaseHelper")
	static void SetupFirebase();
	
	static TMap<FString, TSharedPtr<FJsonValue>> DeserializeData(const FString Content);
	static FString SerializeData(const TMap<FString,  FRealtimeValue> Map);

};


