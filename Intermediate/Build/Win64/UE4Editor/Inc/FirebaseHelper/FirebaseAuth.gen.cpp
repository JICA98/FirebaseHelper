// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/FirebaseAuth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseAuth() {}
// Cross Module References
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUserArray();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FEventResult();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FEmailPasswordResult();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FProviderInfo();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseOAuthResult();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseAuthResult();
	FIREBASEHELPER_API UEnum* Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAuthError();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUsersDataContent();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FProviderUserInfo();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseAuth_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseAuth();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventUsersDataComplete_Parms
		{
			FUserArray UserDataArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::NewProp_UserDataArray = { "UserDataArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventUsersDataComplete_Parms, UserDataArray), Z_Construct_UScriptStruct_FUserArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::NewProp_UserDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "UsersDataComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventUsersDataComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventEventComplete_Parms
		{
			FEventResult EvenComplete;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvenComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::NewProp_EvenComplete = { "EvenComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventEventComplete_Parms, EvenComplete), Z_Construct_UScriptStruct_FEventResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::NewProp_EvenComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "EventComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventEventComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventSendPasswordResetComplete_Parms
		{
			FEmailPasswordResult ResetSentComplete;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResetSentComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::NewProp_ResetSentComplete = { "ResetSentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventSendPasswordResetComplete_Parms, ResetSentComplete), Z_Construct_UScriptStruct_FEmailPasswordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::NewProp_ResetSentComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "SendPasswordResetComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventSendPasswordResetComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventFetchProviderComplete_Parms
		{
			FProviderInfo FetchComplete;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FetchComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::NewProp_FetchComplete = { "FetchComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventFetchProviderComplete_Parms, FetchComplete), Z_Construct_UScriptStruct_FProviderInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::NewProp_FetchComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "FetchProviderComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventFetchProviderComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventOAuthOperationComplete_Parms
		{
			FFirebaseOAuthResult OAuthComplete;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OAuthComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::NewProp_OAuthComplete = { "OAuthComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventOAuthOperationComplete_Parms, OAuthComplete), Z_Construct_UScriptStruct_FFirebaseOAuthResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::NewProp_OAuthComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "OAuthOperationComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventOAuthOperationComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventAuthOperationComplete_Parms
		{
			FFirebaseAuthResult AuthComplete;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::NewProp_AuthComplete = { "AuthComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventAuthOperationComplete_Parms, AuthComplete), Z_Construct_UScriptStruct_FFirebaseAuthResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::NewProp_AuthComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "AuthOperationComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventAuthOperationComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFirebaseAuthIdp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("EFirebaseAuthIdp"));
		}
		return Singleton;
	}
	template<> FIREBASEHELPER_API UEnum* StaticEnum<EFirebaseAuthIdp>()
	{
		return EFirebaseAuthIdp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseAuthIdp(EFirebaseAuthIdp_StaticEnum, TEXT("/Script/FirebaseHelper"), TEXT("EFirebaseAuthIdp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp_Hash() { return 2463876725U; }
	UEnum* Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseAuthIdp"), 0, Get_Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Apple", (int64)Apple },
				{ "AppleGameCenter", (int64)AppleGameCenter },
				{ "Facebook", (int64)Facebook },
				{ "GitHub", (int64)GitHub },
				{ "Google", (int64)Google },
				{ "GooglePlayGames", (int64)GooglePlayGames },
				{ "LinkedIn", (int64)LinkedIn },
				{ "Microsoft", (int64)Microsoft },
				{ "Twitter", (int64)Twitter },
				{ "Yahoo", (int64)Yahoo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Apple.Name", "Apple" },
				{ "AppleGameCenter.Name", "AppleGameCenter" },
				{ "BlueprintType", "true" },
				{ "Facebook.Name", "Facebook" },
				{ "GitHub.Name", "GitHub" },
				{ "Google.Name", "Google" },
				{ "GooglePlayGames.Name", "GooglePlayGames" },
				{ "LinkedIn.Name", "LinkedIn" },
				{ "Microsoft.Name", "Microsoft" },
				{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
				{ "Twitter.Name", "Twitter" },
				{ "Yahoo.Name", "Yahoo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper,
				nullptr,
				"EFirebaseAuthIdp",
				"EFirebaseAuthIdp",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEventResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FEventResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventResult, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("EventResult"), sizeof(FEventResult), Get_Z_Construct_UScriptStruct_FEventResult_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FEventResult>()
{
	return FEventResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventResult(FEventResult::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("EventResult"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFEventResult
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFEventResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventResult")),new UScriptStruct::TCppStructOps<FEventResult>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFEventResult;
	struct Z_Construct_UScriptStruct_FEventResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "EventResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventResult, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "EventResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FEventResult*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventResult), &Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventResult_Statics::NewProp_WasSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"EventResult",
		sizeof(FEventResult),
		alignof(FEventResult),
		Z_Construct_UScriptStruct_FEventResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventResult"), sizeof(FEventResult), Get_Z_Construct_UScriptStruct_FEventResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventResult_Hash() { return 2144882173U; }
class UScriptStruct* FEmailPasswordResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FEmailPasswordResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmailPasswordResult, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("EmailPasswordResult"), sizeof(FEmailPasswordResult), Get_Z_Construct_UScriptStruct_FEmailPasswordResult_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FEmailPasswordResult>()
{
	return FEmailPasswordResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmailPasswordResult(FEmailPasswordResult::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("EmailPasswordResult"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFEmailPasswordResult
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFEmailPasswordResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmailPasswordResult")),new UScriptStruct::TCppStructOps<FEmailPasswordResult>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFEmailPasswordResult;
	struct Z_Construct_UScriptStruct_FEmailPasswordResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmailPasswordResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "EmailPasswordResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailPasswordResult, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "EmailPasswordResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FEmailPasswordResult*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEmailPasswordResult), &Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "EmailPasswordResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailPasswordResult, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_WasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::NewProp_Email,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"EmailPasswordResult",
		sizeof(FEmailPasswordResult),
		alignof(FEmailPasswordResult),
		Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmailPasswordResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmailPasswordResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmailPasswordResult"), sizeof(FEmailPasswordResult), Get_Z_Construct_UScriptStruct_FEmailPasswordResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmailPasswordResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmailPasswordResult_Hash() { return 346982034U; }
class UScriptStruct* FProviderInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FProviderInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProviderInfo, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("ProviderInfo"), sizeof(FProviderInfo), Get_Z_Construct_UScriptStruct_FProviderInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FProviderInfo>()
{
	return FProviderInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProviderInfo(FProviderInfo::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("ProviderInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderInfo
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProviderInfo")),new UScriptStruct::TCppStructOps<FProviderInfo>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderInfo;
	struct Z_Construct_UScriptStruct_FProviderInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Registered_MetaData[];
#endif
		static void NewProp_Registered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Registered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProviderList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProviderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProviderInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "ProviderInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderInfo, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "ProviderInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FProviderInfo*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProviderInfo), &Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered_MetaData[] = {
		{ "Category", "ProviderInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered_SetBit(void* Obj)
	{
		((FProviderInfo*)Obj)->Registered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered = { "Registered", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProviderInfo), &Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList_MetaData[] = {
		{ "Category", "ProviderInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList = { "ProviderList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderInfo, ProviderList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList_Inner = { "ProviderList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProviderInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_WasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_Registered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderInfo_Statics::NewProp_ProviderList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProviderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"ProviderInfo",
		sizeof(FProviderInfo),
		alignof(FProviderInfo),
		Z_Construct_UScriptStruct_FProviderInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProviderInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProviderInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProviderInfo"), sizeof(FProviderInfo), Get_Z_Construct_UScriptStruct_FProviderInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProviderInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProviderInfo_Hash() { return 2377211119U; }
class UScriptStruct* FUserArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUserArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserArray, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("UserArray"), sizeof(FUserArray), Get_Z_Construct_UScriptStruct_FUserArray_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FUserArray>()
{
	return FUserArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserArray(FUserArray::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("UserArray"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFUserArray
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFUserArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserArray")),new UScriptStruct::TCppStructOps<FUserArray>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFUserArray;
	struct Z_Construct_UScriptStruct_FUserArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "UserArray" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserArray, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "UserArray" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FUserArray*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserArray), &Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "UserArray" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserArray, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUsersDataContent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_WasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserArray_Statics::NewProp_UserData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"UserArray",
		sizeof(FUserArray),
		alignof(FUserArray),
		Z_Construct_UScriptStruct_FUserArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserArray"), sizeof(FUserArray), Get_Z_Construct_UScriptStruct_FUserArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserArray_Hash() { return 1551444073U; }
class UScriptStruct* FUsersDataContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUsersDataContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsersDataContent, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("UsersDataContent"), sizeof(FUsersDataContent), Get_Z_Construct_UScriptStruct_FUsersDataContent_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FUsersDataContent>()
{
	return FUsersDataContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUsersDataContent(FUsersDataContent::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("UsersDataContent"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFUsersDataContent
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFUsersDataContent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UsersDataContent")),new UScriptStruct::TCppStructOps<FUsersDataContent>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFUsersDataContent;
	struct Z_Construct_UScriptStruct_FUsersDataContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAuth_MetaData[];
#endif
		static void NewProp_CustomAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CustomAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoginAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastLoginAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static void NewProp_Disabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidSince_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidSince;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PasswordUpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PasswordUpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailVerified_MetaData[];
#endif
		static void NewProp_EmailVerified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EmailVerified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderUserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProviderUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProviderUserInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PasswordHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PasswordHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsersDataContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth_SetBit(void* Obj)
	{
		((FUsersDataContent*)Obj)->CustomAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth = { "CustomAuth", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUsersDataContent), &Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LastLoginAt_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LastLoginAt = { "LastLoginAt", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, LastLoginAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LastLoginAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LastLoginAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled_SetBit(void* Obj)
	{
		((FUsersDataContent*)Obj)->Disabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUsersDataContent), &Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ValidSince_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ValidSince = { "ValidSince", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, ValidSince), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ValidSince_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ValidSince_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordUpdatedAt_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordUpdatedAt = { "PasswordUpdatedAt", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, PasswordUpdatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordUpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordUpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_UserInfo_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "Comment", "//\x09Whether the sign-in email is verified.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "Whether the sign-in email is verified." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, UserInfo), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_UserInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified_SetBit(void* Obj)
	{
		((FUsersDataContent*)Obj)->EmailVerified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified = { "EmailVerified", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUsersDataContent), &Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo = { "ProviderUserInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, ProviderUserInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo_Inner = { "ProviderUserInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProviderUserInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordHash_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordHash = { "PasswordHash", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, PasswordHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LocalId_MetaData[] = {
		{ "Category", "UsersDataContent" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LocalId = { "LocalId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsersDataContent, LocalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LocalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LocalId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsersDataContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CustomAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LastLoginAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ValidSince,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordUpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_UserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_EmailVerified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_ProviderUserInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_PasswordHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsersDataContent_Statics::NewProp_LocalId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsersDataContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"UsersDataContent",
		sizeof(FUsersDataContent),
		alignof(FUsersDataContent),
		Z_Construct_UScriptStruct_FUsersDataContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsersDataContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsersDataContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsersDataContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUsersDataContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UsersDataContent"), sizeof(FUsersDataContent), Get_Z_Construct_UScriptStruct_FUsersDataContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUsersDataContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUsersDataContent_Hash() { return 3752486477U; }
class UScriptStruct* FFirebaseOAuthResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseOAuthResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseOAuthResult, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("FirebaseOAuthResult"), sizeof(FFirebaseOAuthResult), Get_Z_Construct_UScriptStruct_FFirebaseOAuthResult_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FFirebaseOAuthResult>()
{
	return FFirebaseOAuthResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseOAuthResult(FFirebaseOAuthResult::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("FirebaseOAuthResult"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseOAuthResult
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseOAuthResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseOAuthResult")),new UScriptStruct::TCppStructOps<FFirebaseOAuthResult>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseOAuthResult;
	struct Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedConfirmation_MetaData[];
#endif
		static void NewProp_NeedConfirmation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedConfirmation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiresIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpiresIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OauthTokenSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OauthTokenSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OauthAccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OauthAccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OauthIdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OauthIdToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailVerified_MetaData[];
#endif
		static void NewProp_EmailVerified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EmailVerified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FederatedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FederatedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseOAuthResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_UserInfo_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//Whether another account with the same credential already exists. The user will need to sign in to the original account and then link the current credential to it.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "Whether another account with the same credential already exists. The user will need to sign in to the original account and then link the current credential to it." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, UserInfo), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_UserInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//The number of seconds in which the ID token expires.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The number of seconds in which the ID token expires." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation_SetBit(void* Obj)
	{
		((FFirebaseOAuthResult*)Obj)->NeedConfirmation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation = { "NeedConfirmation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseOAuthResult), &Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ExpiresIn_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//A Firebase Auth refresh token for the authenticated user.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "A Firebase Auth refresh token for the authenticated user." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ExpiresIn = { "ExpiresIn", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, ExpiresIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ExpiresIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ExpiresIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//A Firebase Auth ID token for the authenticated user.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "A Firebase Auth ID token for the authenticated user." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, RefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_IdToken_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//\x09The OAuth 1.0 token secret if available.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The OAuth 1.0 token secret if available." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, IdToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_IdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthTokenSecret_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//\x09The OAuth access token if available.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The OAuth access token if available." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthTokenSecret = { "OauthTokenSecret", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, OauthTokenSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthTokenSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthTokenSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthAccessToken_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//\x09The OIDC id token if available.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The OIDC id token if available." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthAccessToken = { "OauthAccessToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, OauthAccessToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthAccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthAccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthIdToken_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//\x09Whether the sign-in email is verified.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "Whether the sign-in email is verified." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthIdToken = { "OauthIdToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, OauthIdToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthIdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthIdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//The uid of the authenticated user.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The uid of the authenticated user." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified_SetBit(void* Obj)
	{
		((FFirebaseOAuthResult*)Obj)->EmailVerified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified = { "EmailVerified", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseOAuthResult), &Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_LocalId_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//The linked provider ID (e.g. \"google.com\" for the Google provider).\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The linked provider ID (e.g. \"google.com\" for the Google provider)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_LocalId = { "LocalId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, LocalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_LocalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_LocalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ProviderId_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "Comment", "//The unique ID identifies the IdP account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The unique ID identifies the IdP account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, ProviderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ProviderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_FederatedId_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_FederatedId = { "FederatedId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseOAuthResult, FederatedId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_FederatedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_FederatedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "FirebaseOAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FFirebaseOAuthResult*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseOAuthResult), &Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_UserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_NeedConfirmation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ExpiresIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_RefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthTokenSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthAccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_OauthIdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_EmailVerified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_LocalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_FederatedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::NewProp_WasSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"FirebaseOAuthResult",
		sizeof(FFirebaseOAuthResult),
		alignof(FFirebaseOAuthResult),
		Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseOAuthResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseOAuthResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseOAuthResult"), sizeof(FFirebaseOAuthResult), Get_Z_Construct_UScriptStruct_FFirebaseOAuthResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseOAuthResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseOAuthResult_Hash() { return 159341530U; }
class UScriptStruct* FUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInfo, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("UserInfo"), sizeof(FUserInfo), Get_Z_Construct_UScriptStruct_FUserInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FUserInfo>()
{
	return FUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserInfo(FUserInfo::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("UserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFUserInfo
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFUserInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserInfo")),new UScriptStruct::TCppStructOps<FUserInfo>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFUserInfo;
	struct Z_Construct_UScriptStruct_FUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotoUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawUserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RawUserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The photo Url for the account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The photo Url for the account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_PhotoUrl_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The display name for the account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The display name for the account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_PhotoUrl = { "PhotoUrl", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, PhotoUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_PhotoUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_PhotoUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The full name for the account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The full name for the account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FullName_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The last name for the account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The last name for the account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastName_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The first name for the account.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The first name for the account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FirstName_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "Comment", "//The stringified JSON response containing all the IdP data corresponding to the provided OAuth credential.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The stringified JSON response containing all the IdP data corresponding to the provided OAuth credential." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_RawUserInfo_MetaData[] = {
		{ "Category", "UserInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_RawUserInfo = { "RawUserInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfo, RawUserInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_RawUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_RawUserInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_PhotoUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_RawUserInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"UserInfo",
		sizeof(FUserInfo),
		alignof(FUserInfo),
		Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserInfo"), sizeof(FUserInfo), Get_Z_Construct_UScriptStruct_FUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserInfo_Hash() { return 3871063223U; }
class UScriptStruct* FFirebaseAuthResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseAuthResult, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("FirebaseAuthResult"), sizeof(FFirebaseAuthResult), Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FFirebaseAuthResult>()
{
	return FFirebaseAuthResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseAuthResult(FFirebaseAuthResult::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("FirebaseAuthResult"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseAuthResult
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseAuthResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseAuthResult")),new UScriptStruct::TCppStructOps<FFirebaseAuthResult>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseAuthResult;
	struct Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderUserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProviderUserInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProviderUserInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PasswordHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PasswordHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Registered_MetaData[];
#endif
		static void NewProp_Registered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Registered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiresIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpiresIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseAuthResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo = { "ProviderUserInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ProviderUserInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo_Inner = { "ProviderUserInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProviderUserInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_PasswordHash_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_PasswordHash = { "PasswordHash", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, PasswordHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_PasswordHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_PasswordHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_SetBit(void* Obj)
	{
		((FFirebaseAuthResult*)Obj)->Registered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered = { "Registered", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseAuthResult), &Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId = { "LocalId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, LocalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The uid corresponding to the provided ID token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The uid corresponding to the provided ID token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ProjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//A Firebase Auth ID token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "A Firebase Auth ID token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The Firebase Auth refresh token provided in the request or a new refresh token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The Firebase Auth refresh token provided in the request or a new refresh token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, IdToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The type of the refresh token, always \"Bearer\".\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The type of the refresh token, always \"Bearer\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, RefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The number of seconds in which the ID token expires.\n" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
		{ "ToolTip", "The number of seconds in which the ID token expires." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, TokenType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn = { "ExpiresIn", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ExpiresIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FFirebaseAuthResult*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseAuthResult), &Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProviderUserInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_PasswordHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"FirebaseAuthResult",
		sizeof(FFirebaseAuthResult),
		alignof(FFirebaseAuthResult),
		Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseAuthResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseAuthResult"), sizeof(FFirebaseAuthResult), Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash() { return 110260564U; }
class UScriptStruct* FProviderUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FProviderUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProviderUserInfo, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("ProviderUserInfo"), sizeof(FProviderUserInfo), Get_Z_Construct_UScriptStruct_FProviderUserInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FProviderUserInfo>()
{
	return FProviderUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProviderUserInfo(FProviderUserInfo::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("ProviderUserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderUserInfo
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderUserInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProviderUserInfo")),new UScriptStruct::TCppStructOps<FProviderUserInfo>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFProviderUserInfo;
	struct Z_Construct_UScriptStruct_FProviderUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FederatedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FederatedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProviderUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_FederatedId_MetaData[] = {
		{ "Category", "ProviderUserInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_FederatedId = { "FederatedId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderUserInfo, FederatedId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_FederatedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_FederatedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_ProviderId_MetaData[] = {
		{ "Category", "ProviderUserInfo" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderUserInfo, ProviderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_ProviderId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProviderUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_FederatedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderUserInfo_Statics::NewProp_ProviderId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProviderUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"ProviderUserInfo",
		sizeof(FProviderUserInfo),
		alignof(FProviderUserInfo),
		Z_Construct_UScriptStruct_FProviderUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProviderUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProviderUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProviderUserInfo"), sizeof(FProviderUserInfo), Get_Z_Construct_UScriptStruct_FProviderUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProviderUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProviderUserInfo_Hash() { return 3259496935U; }
class UScriptStruct* FAuthError::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FAuthError_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthError, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("AuthError"), sizeof(FAuthError), Get_Z_Construct_UScriptStruct_FAuthError_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FAuthError>()
{
	return FAuthError::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthError(FAuthError::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("AuthError"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFAuthError
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFAuthError()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AuthError")),new UScriptStruct::TCppStructOps<FAuthError>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFAuthError;
	struct Z_Construct_UScriptStruct_FAuthError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthError>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "AuthError" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthError, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "AuthError" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthError, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"AuthError",
		sizeof(FAuthError),
		alignof(FAuthError),
		Z_Construct_UScriptStruct_FAuthError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthError()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthError_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthError"), sizeof(FAuthError), Get_Z_Construct_UScriptStruct_FAuthError_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthError_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthError_Hash() { return 1458284633U; }
	DEFINE_FUNCTION(UFirebaseAuth::execGetUserData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::GetUserData(Z_Param_IdToken,FUsersDataComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execDeleteAccountFirebaseAuth)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::DeleteAccountFirebaseAuth(Z_Param_IdToken,FEventComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execConfirmEmailVerification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ConfirmEmailVerification(Z_Param_Code,FAuthOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSendEmailVerification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SendEmailVerification(Z_Param_IdToken,FSendPasswordResetComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execUnlinkProvider)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_TARRAY(FString,Z_Param_ListOfProviders);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::UnlinkProvider(FAuthOperationComplete(Z_Param_ResultCallback),Z_Param_IdToken,Z_Param_ListOfProviders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execLinkWithOAuthCredential)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OAuthResultCallback);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProviderAccessToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestUri);
		P_GET_PROPERTY(FByteProperty,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::LinkWithOAuthCredential(FOAuthOperationComplete(Z_Param_OAuthResultCallback),Z_Param_IdToken,Z_Param_ProviderAccessToken,Z_Param_RequestUri,EFirebaseAuthIdp(Z_Param_Provider));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execLinkWithEmailPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::LinkWithEmailPassword(Z_Param_IdToken,Z_Param_Email,Z_Param_Password,FAuthOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execUpdateProfile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotoUrl);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_ListOfAttributesToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::UpdateProfile(Z_Param_IdToken,Z_Param_DisplayName,Z_Param_PhotoUrl,FAuthOperationComplete(Z_Param_ResultCallback),Z_Param_ListOfAttributesToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execChangePassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ChangePassword(Z_Param_IdToken,Z_Param_Password,FAuthOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execChangeEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ChangeEmail(Z_Param_IdToken,Z_Param_Email,FAuthOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execConfirmPasswordReset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPassword);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ConfirmPasswordReset(Z_Param_Code,Z_Param_NewPassword,FSendPasswordResetComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execVerifyPasswordResetCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::VerifyPasswordResetCode(Z_Param_Code,FSendPasswordResetComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSendPasswordResetEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SendPasswordResetEmail(Z_Param_Email,FSendPasswordResetComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execFetchProvidersForEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContinueUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::FetchProvidersForEmail(Z_Param_Email,FFetchProviderComplete(Z_Param_ResultCallback),Z_Param_ContinueUri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSignInWithOAuthCredential)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OAuthResultCallback);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_RequestUri);
		P_GET_PROPERTY(FByteProperty,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SignInWithOAuthCredential(FOAuthOperationComplete(Z_Param_OAuthResultCallback),Z_Param_IdToken,Z_Param_RequestUri,EFirebaseAuthIdp(Z_Param_Provider));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSignInAnonymously)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SignInAnonymously(FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSignInWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SignInWithEmailAndPassword(Z_Param_Email,Z_Param_Password,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execSignUpWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::SignUpWithEmailAndPassword(Z_Param_Email,Z_Param_Password,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execExchangeRefreshToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RefreshToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ExchangeRefreshToken(Z_Param_RefreshToken,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuth::execExchangeCustomToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAuth::ExchangeCustomToken(Z_Param_CustomToken,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	void UFirebaseAuth::StaticRegisterNativesUFirebaseAuth()
	{
		UClass* Class = UFirebaseAuth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeEmail", &UFirebaseAuth::execChangeEmail },
			{ "ChangePassword", &UFirebaseAuth::execChangePassword },
			{ "ConfirmEmailVerification", &UFirebaseAuth::execConfirmEmailVerification },
			{ "ConfirmPasswordReset", &UFirebaseAuth::execConfirmPasswordReset },
			{ "DeleteAccountFirebaseAuth", &UFirebaseAuth::execDeleteAccountFirebaseAuth },
			{ "ExchangeCustomToken", &UFirebaseAuth::execExchangeCustomToken },
			{ "ExchangeRefreshToken", &UFirebaseAuth::execExchangeRefreshToken },
			{ "FetchProvidersForEmail", &UFirebaseAuth::execFetchProvidersForEmail },
			{ "GetUserData", &UFirebaseAuth::execGetUserData },
			{ "LinkWithEmailPassword", &UFirebaseAuth::execLinkWithEmailPassword },
			{ "LinkWithOAuthCredential", &UFirebaseAuth::execLinkWithOAuthCredential },
			{ "SendEmailVerification", &UFirebaseAuth::execSendEmailVerification },
			{ "SendPasswordResetEmail", &UFirebaseAuth::execSendPasswordResetEmail },
			{ "SignInAnonymously", &UFirebaseAuth::execSignInAnonymously },
			{ "SignInWithEmailAndPassword", &UFirebaseAuth::execSignInWithEmailAndPassword },
			{ "SignInWithOAuthCredential", &UFirebaseAuth::execSignInWithOAuthCredential },
			{ "SignUpWithEmailAndPassword", &UFirebaseAuth::execSignUpWithEmailAndPassword },
			{ "UnlinkProvider", &UFirebaseAuth::execUnlinkProvider },
			{ "UpdateProfile", &UFirebaseAuth::execUpdateProfile },
			{ "VerifyPasswordResetCode", &UFirebaseAuth::execVerifyPasswordResetCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics
	{
		struct FirebaseAuth_eventChangeEmail_Parms
		{
			FString IdToken;
			FString Email;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangeEmail_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangeEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangeEmail_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Change Email FirebaseAuth" },
		{ "Keywords", "Change email" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ChangeEmail", nullptr, nullptr, sizeof(FirebaseAuth_eventChangeEmail_Parms), Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ChangeEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ChangeEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics
	{
		struct FirebaseAuth_eventChangePassword_Parms
		{
			FString IdToken;
			FString Password;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangePassword_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangePassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventChangePassword_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Change password FirebaseAuth" },
		{ "Keywords", "Change password" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ChangePassword", nullptr, nullptr, sizeof(FirebaseAuth_eventChangePassword_Parms), Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ChangePassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ChangePassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics
	{
		struct FirebaseAuth_eventConfirmEmailVerification_Parms
		{
			FString Code;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventConfirmEmailVerification_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventConfirmEmailVerification_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Confirm email verification FirebaseAuth" },
		{ "Keywords", "Send email verification" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ConfirmEmailVerification", nullptr, nullptr, sizeof(FirebaseAuth_eventConfirmEmailVerification_Parms), Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics
	{
		struct FirebaseAuth_eventConfirmPasswordReset_Parms
		{
			FString Code;
			FString NewPassword;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventConfirmPasswordReset_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_NewPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_NewPassword = { "NewPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventConfirmPasswordReset_Parms, NewPassword), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_NewPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_NewPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventConfirmPasswordReset_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_NewPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Confirm Password Reset" },
		{ "Keywords", "Confirm password reset" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ConfirmPasswordReset", nullptr, nullptr, sizeof(FirebaseAuth_eventConfirmPasswordReset_Parms), Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics
	{
		struct FirebaseAuth_eventDeleteAccountFirebaseAuth_Parms
		{
			FString IdToken;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventDeleteAccountFirebaseAuth_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventDeleteAccountFirebaseAuth_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "CDelete Account FirebaseAuth" },
		{ "Keywords", "Send email verification" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "DeleteAccountFirebaseAuth", nullptr, nullptr, sizeof(FirebaseAuth_eventDeleteAccountFirebaseAuth_Parms), Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics
	{
		struct FirebaseAuth_eventExchangeCustomToken_Parms
		{
			FString CustomToken;
			FScriptDelegate AuthResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AuthResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventExchangeCustomToken_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_CustomToken = { "CustomToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventExchangeCustomToken_Parms, CustomToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::NewProp_CustomToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Exchange custom token for an ID and refresh token" },
		{ "Keywords", "FirebaseAuth CustomToken" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ExchangeCustomToken", nullptr, nullptr, sizeof(FirebaseAuth_eventExchangeCustomToken_Parms), Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics
	{
		struct FirebaseAuth_eventExchangeRefreshToken_Parms
		{
			FString RefreshToken;
			FScriptDelegate AuthResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AuthResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventExchangeRefreshToken_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventExchangeRefreshToken_Parms, RefreshToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::NewProp_RefreshToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Exchange a refresh token for an ID token" },
		{ "Keywords", "Refresh Firebase ID" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "ExchangeRefreshToken", nullptr, nullptr, sizeof(FirebaseAuth_eventExchangeRefreshToken_Parms), Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics
	{
		struct FirebaseAuth_eventFetchProvidersForEmail_Parms
		{
			FString Email;
			FScriptDelegate ResultCallback;
			FString ContinueUri;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContinueUri;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ContinueUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ContinueUri = { "ContinueUri", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventFetchProvidersForEmail_Parms, ContinueUri), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ContinueUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ContinueUri_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventFetchProvidersForEmail_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventFetchProvidersForEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ContinueUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "CPP_Default_ContinueUri", "http://localhost:8080/app" },
		{ "DisplayName", "Fetch providers for Email" },
		{ "Keywords", "Providers for Email Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "FetchProvidersForEmail", nullptr, nullptr, sizeof(FirebaseAuth_eventFetchProvidersForEmail_Parms), Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics
	{
		struct FirebaseAuth_eventGetUserData_Parms
		{
			FString IdToken;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventGetUserData_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventGetUserData_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Get User Data" },
		{ "Keywords", "Send email verification" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "GetUserData", nullptr, nullptr, sizeof(FirebaseAuth_eventGetUserData_Parms), Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_GetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_GetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics
	{
		struct FirebaseAuth_eventLinkWithEmailPassword_Parms
		{
			FString IdToken;
			FString Email;
			FString Password;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithEmailPassword_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithEmailPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithEmailPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithEmailPassword_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Link with Email/Password" },
		{ "Keywords", "Link with email/password" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "LinkWithEmailPassword", nullptr, nullptr, sizeof(FirebaseAuth_eventLinkWithEmailPassword_Parms), Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics
	{
		struct FirebaseAuth_eventLinkWithOAuthCredential_Parms
		{
			FScriptDelegate OAuthResultCallback;
			FString IdToken;
			FString ProviderAccessToken;
			FString RequestUri;
			TEnumAsByte<EFirebaseAuthIdp> Provider;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestUri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderAccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderAccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OAuthResultCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_Provider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithOAuthCredential_Parms, Provider), Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_RequestUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_RequestUri = { "RequestUri", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithOAuthCredential_Parms, RequestUri), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_RequestUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_RequestUri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_ProviderAccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_ProviderAccessToken = { "ProviderAccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithOAuthCredential_Parms, ProviderAccessToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_ProviderAccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_ProviderAccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithOAuthCredential_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_OAuthResultCallback = { "OAuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventLinkWithOAuthCredential_Parms, OAuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_RequestUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_ProviderAccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::NewProp_OAuthResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "CPP_Default_IdToken", "" },
		{ "CPP_Default_Provider", "Google" },
		{ "CPP_Default_ProviderAccessToken", "" },
		{ "CPP_Default_RequestUri", "http://localhost" },
		{ "DisplayName", "Link with OAuth credential" },
		{ "Keywords", "Link with OAuth credential" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "LinkWithOAuthCredential", nullptr, nullptr, sizeof(FirebaseAuth_eventLinkWithOAuthCredential_Parms), Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics
	{
		struct FirebaseAuth_eventSendEmailVerification_Parms
		{
			FString IdToken;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSendEmailVerification_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSendEmailVerification_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Send email verification FirebaseAuth" },
		{ "Keywords", "Send email verification" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SendEmailVerification", nullptr, nullptr, sizeof(FirebaseAuth_eventSendEmailVerification_Parms), Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics
	{
		struct FirebaseAuth_eventSendPasswordResetEmail_Parms
		{
			FString Email;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSendPasswordResetEmail_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSendPasswordResetEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Send password reset Email" },
		{ "Keywords", "Send password reset email" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SendPasswordResetEmail", nullptr, nullptr, sizeof(FirebaseAuth_eventSendPasswordResetEmail_Parms), Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics
	{
		struct FirebaseAuth_eventSignInAnonymously_Parms
		{
			FScriptDelegate AuthResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AuthResultCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInAnonymously_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::NewProp_AuthResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign in anonymously" },
		{ "Keywords", "Anonymously Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SignInAnonymously", nullptr, nullptr, sizeof(FirebaseAuth_eventSignInAnonymously_Parms), Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics
	{
		struct FirebaseAuth_eventSignInWithEmailAndPassword_Parms
		{
			FString Email;
			FString Password;
			FScriptDelegate AuthResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AuthResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithEmailAndPassword_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign in with Email & Password" },
		{ "Keywords", "Login Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SignInWithEmailAndPassword", nullptr, nullptr, sizeof(FirebaseAuth_eventSignInWithEmailAndPassword_Parms), Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics
	{
		struct FirebaseAuth_eventSignInWithOAuthCredential_Parms
		{
			FScriptDelegate OAuthResultCallback;
			FString IdToken;
			FString RequestUri;
			TEnumAsByte<EFirebaseAuthIdp> Provider;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestUri;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OAuthResultCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_Provider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithOAuthCredential_Parms, Provider), Z_Construct_UEnum_FirebaseHelper_EFirebaseAuthIdp, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_RequestUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_RequestUri = { "RequestUri", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithOAuthCredential_Parms, RequestUri), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_RequestUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_RequestUri_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithOAuthCredential_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_OAuthResultCallback = { "OAuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignInWithOAuthCredential_Parms, OAuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_RequestUri,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::NewProp_OAuthResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "CPP_Default_IdToken", "" },
		{ "CPP_Default_Provider", "Google" },
		{ "CPP_Default_RequestUri", "http://localhost" },
		{ "DisplayName", "Sign in with OAuth Credential" },
		{ "Keywords", "OAuth Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SignInWithOAuthCredential", nullptr, nullptr, sizeof(FirebaseAuth_eventSignInWithOAuthCredential_Parms), Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics
	{
		struct FirebaseAuth_eventSignUpWithEmailAndPassword_Parms
		{
			FString Email;
			FString Password;
			FScriptDelegate AuthResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AuthResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignUpWithEmailAndPassword_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignUpWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventSignUpWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign up with Email & Password" },
		{ "Keywords", "Create Account Firebase" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "SignUpWithEmailAndPassword", nullptr, nullptr, sizeof(FirebaseAuth_eventSignUpWithEmailAndPassword_Parms), Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics
	{
		struct FirebaseAuth_eventUnlinkProvider_Parms
		{
			FScriptDelegate ResultCallback;
			FString IdToken;
			TArray<FString> ListOfProviders;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfProviders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfProviders;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListOfProviders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders = { "ListOfProviders", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUnlinkProvider_Parms, ListOfProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders_Inner = { "ListOfProviders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUnlinkProvider_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUnlinkProvider_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ListOfProviders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::NewProp_ResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Unlink provider FirebaseAuth" },
		{ "Keywords", "Unlink provider" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "UnlinkProvider", nullptr, nullptr, sizeof(FirebaseAuth_eventUnlinkProvider_Parms), Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics
	{
		struct FirebaseAuth_eventUpdateProfile_Parms
		{
			FString IdToken;
			FString DisplayName;
			FString PhotoUrl;
			FScriptDelegate ResultCallback;
			TArray<FString> ListOfAttributesToDelete;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfAttributesToDelete;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListOfAttributesToDelete_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotoUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ListOfAttributesToDelete = { "ListOfAttributesToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUpdateProfile_Parms, ListOfAttributesToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ListOfAttributesToDelete_Inner = { "ListOfAttributesToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUpdateProfile_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_PhotoUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_PhotoUrl = { "PhotoUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUpdateProfile_Parms, PhotoUrl), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_PhotoUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_PhotoUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUpdateProfile_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventUpdateProfile_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_IdToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ListOfAttributesToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ListOfAttributesToDelete_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_PhotoUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::NewProp_IdToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Update profile FirebaseAuth" },
		{ "Keywords", "Update profile" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "UpdateProfile", nullptr, nullptr, sizeof(FirebaseAuth_eventUpdateProfile_Parms), Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_UpdateProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_UpdateProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics
	{
		struct FirebaseAuth_eventVerifyPasswordResetCode_Parms
		{
			FString Code;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventVerifyPasswordResetCode_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuth_eventVerifyPasswordResetCode_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Verify password reset Code" },
		{ "Keywords", "Verify password reset code" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuth, nullptr, "VerifyPasswordResetCode", nullptr, nullptr, sizeof(FirebaseAuth_eventVerifyPasswordResetCode_Parms), Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseAuth_NoRegister()
	{
		return UFirebaseAuth::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseAuth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseAuth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseAuth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseAuth_ChangeEmail, "ChangeEmail" }, // 135758199
		{ &Z_Construct_UFunction_UFirebaseAuth_ChangePassword, "ChangePassword" }, // 4262456808
		{ &Z_Construct_UFunction_UFirebaseAuth_ConfirmEmailVerification, "ConfirmEmailVerification" }, // 1207279471
		{ &Z_Construct_UFunction_UFirebaseAuth_ConfirmPasswordReset, "ConfirmPasswordReset" }, // 78151656
		{ &Z_Construct_UFunction_UFirebaseAuth_DeleteAccountFirebaseAuth, "DeleteAccountFirebaseAuth" }, // 3062884590
		{ &Z_Construct_UFunction_UFirebaseAuth_ExchangeCustomToken, "ExchangeCustomToken" }, // 349485060
		{ &Z_Construct_UFunction_UFirebaseAuth_ExchangeRefreshToken, "ExchangeRefreshToken" }, // 507951801
		{ &Z_Construct_UFunction_UFirebaseAuth_FetchProvidersForEmail, "FetchProvidersForEmail" }, // 1775439697
		{ &Z_Construct_UFunction_UFirebaseAuth_GetUserData, "GetUserData" }, // 434696050
		{ &Z_Construct_UFunction_UFirebaseAuth_LinkWithEmailPassword, "LinkWithEmailPassword" }, // 827755470
		{ &Z_Construct_UFunction_UFirebaseAuth_LinkWithOAuthCredential, "LinkWithOAuthCredential" }, // 1576480758
		{ &Z_Construct_UFunction_UFirebaseAuth_SendEmailVerification, "SendEmailVerification" }, // 3403350305
		{ &Z_Construct_UFunction_UFirebaseAuth_SendPasswordResetEmail, "SendPasswordResetEmail" }, // 812930185
		{ &Z_Construct_UFunction_UFirebaseAuth_SignInAnonymously, "SignInAnonymously" }, // 4027464413
		{ &Z_Construct_UFunction_UFirebaseAuth_SignInWithEmailAndPassword, "SignInWithEmailAndPassword" }, // 1820507439
		{ &Z_Construct_UFunction_UFirebaseAuth_SignInWithOAuthCredential, "SignInWithOAuthCredential" }, // 4004623175
		{ &Z_Construct_UFunction_UFirebaseAuth_SignUpWithEmailAndPassword, "SignUpWithEmailAndPassword" }, // 4238701775
		{ &Z_Construct_UFunction_UFirebaseAuth_UnlinkProvider, "UnlinkProvider" }, // 3297812430
		{ &Z_Construct_UFunction_UFirebaseAuth_UpdateProfile, "UpdateProfile" }, // 2285948346
		{ &Z_Construct_UFunction_UFirebaseAuth_VerifyPasswordResetCode, "VerifyPasswordResetCode" }, // 3588279726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseAuth_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseAuth.h" },
		{ "ModuleRelativePath", "Public/FirebaseAuth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseAuth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseAuth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseAuth_Statics::ClassParams = {
		&UFirebaseAuth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseAuth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAuth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseAuth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseAuth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseAuth, 1592349224);
	template<> FIREBASEHELPER_API UClass* StaticClass<UFirebaseAuth>()
	{
		return UFirebaseAuth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseAuth(Z_Construct_UClass_UFirebaseAuth, &UFirebaseAuth::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("UFirebaseAuth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseAuth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
