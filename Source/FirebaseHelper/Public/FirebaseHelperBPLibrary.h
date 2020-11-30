// Copyright Name: Jica, Year of Intended Publishing 2020.
#pragma once

#include "CloudFirestore.h"
#include "FirebaseAuth.h"
#include "RealtimeDatabase.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SharedPointer.h"
#include "FirebaseHelperBPLibrary.generated.h"

UCLASS()
class UFirebaseHelperBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()
protected:

public:
    /*
    * FIREBASE CONFIG MEMBERS
    */

    static FString DatabaseURL;
    static FString APIKey;
    static FString AuthToken;
    static FString OAuthAccessToken;
    static FString AuthEndPoint;
    static FString FirestoreEndPoint;
    static FString ProjectId;
    static TMap<EFirebaseAuthIdp, FString> ProviderURL;

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Setup Firebase", Keywords = "FirebaseHelper Setup Firebase"),
        Category = "FirebaseHelper")
    static void SetupFirebase();

    static TMap<FString, TSharedPtr<FJsonValue>> DeserializeData(const FString Content);
    static FString SerializeData(const TMap<FString, FRealtimeValue> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Auth ID", Keywords = "Firebase Helper Auth ID"), Category = "FirebaseHelper")
    static FString GetAuthID();

    /*
    * Firebase HELPER FUNCTIONS
    */

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Integer Map to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonStringFromInteger(const TMap<FString,  int32> Map);
    
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float Map to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonStringFromNumber(const TMap<FString,  float> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Map to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonStringFromString(const TMap<FString,  FString> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Map to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonStringFromBool(const TMap<FString,  bool> Map);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Boolean Array to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonFieldFromBoolArray(const FString Key, const TArray<bool> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "String Array to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonFieldFromStringArray(const FString Key, const TArray<FString> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Float Array to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonFieldFromNumberArray(const FString Key, const TArray<float> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Integer Array to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonFieldFromIntegerArray(const FString Key, const TArray<int32> Array);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Combine JsonString to JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString JsonStringFromJsonString(const TArray<FString> Children);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Make Parent-Child JsonString", Keywords = "Firebase Helper"), Category = "FirebaseHelper")
    static FString MakeParentChildJson(const FString Parent, const FString ChildKey, const FString ChildValue );
};
