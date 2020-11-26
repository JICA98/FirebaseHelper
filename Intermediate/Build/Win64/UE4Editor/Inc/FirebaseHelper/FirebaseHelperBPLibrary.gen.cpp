// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/FirebaseHelperBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseHelperBPLibrary() {}
// Cross Module References
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseAuthResult();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAuthError();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeReadOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeWriteOptions();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
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
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseAuthResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ErrorData), Z_Construct_UScriptStruct_FAuthError, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Registered_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
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
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId = { "LocalId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, LocalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_LocalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The uid corresponding to the provided ID token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "The uid corresponding to the provided ID token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ProjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ProjectId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//A Firebase Auth ID token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "A Firebase Auth ID token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The Firebase Auth refresh token provided in the request or a new refresh token.\n" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "The Firebase Auth refresh token provided in the request or a new refresh token." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, IdToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_IdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The type of the refresh token, always \"Bearer\".\n" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "The type of the refresh token, always \"Bearer\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, RefreshToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "Comment", "//The number of seconds in which the ID token expires.\n" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "The number of seconds in which the ID token expires." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, TokenType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_TokenType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn = { "ExpiresIn", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAuthResult, ExpiresIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ExpiresIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "FirebaseAuthResult" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FFirebaseAuthResult*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseAuthResult), &Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_WasSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics::NewProp_ErrorData,
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
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseAuthResult_Hash() { return 2262549715U; }
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
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthError>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "AuthError" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthError, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "AuthError" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FAuthError_Hash() { return 89849782U; }
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execSignInAnonymously)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::SignInAnonymously(FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execSignInWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::SignInWithEmailAndPassword(Z_Param_Email,Z_Param_Password,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execSignUpWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::SignUpWithEmailAndPassword(Z_Param_Email,Z_Param_Password,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execExchangeRefreshToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RefreshToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::ExchangeRefreshToken(Z_Param_RefreshToken,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execExchangeCustomToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomToken);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AuthResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::ExchangeCustomToken(Z_Param_CustomToken,FAuthOperationComplete(Z_Param_AuthResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execRealtimeDatabaseListener)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT(FRealtimeReadOptions,Z_Param_RealtimeOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ListenerCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::RealtimeDatabaseListener(Z_Param_Path,Z_Param_RealtimeOptions,FOperationComplete(Z_Param_ListenerCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execRealtimeDatabaseRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT(FRealtimeReadOptions,Z_Param_RealtimeOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::RealtimeDatabaseRead(Z_Param_Path,Z_Param_RealtimeOptions,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execRealtimeDatabaseWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_UBOOL(Z_Param_Update);
		P_GET_STRUCT(FRealtimeWriteOptions,Z_Param_Options);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::RealtimeDatabaseWrite(Z_Param_Path,Z_Param_Content,Z_Param_Update,Z_Param_Options,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execRealtimeDatabaseDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_UseAuth);
		P_GET_UBOOL(Z_Param_ReceiveDataSent);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::RealtimeDatabaseDelete(Z_Param_Path,Z_Param_UseAuth,Z_Param_ReceiveDataSent,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execSetupFirebase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseHelperBPLibrary::SetupFirebase();
		P_NATIVE_END;
	}
	void UFirebaseHelperBPLibrary::StaticRegisterNativesUFirebaseHelperBPLibrary()
	{
		UClass* Class = UFirebaseHelperBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExchangeCustomToken", &UFirebaseHelperBPLibrary::execExchangeCustomToken },
			{ "ExchangeRefreshToken", &UFirebaseHelperBPLibrary::execExchangeRefreshToken },
			{ "RealtimeDatabaseDelete", &UFirebaseHelperBPLibrary::execRealtimeDatabaseDelete },
			{ "RealtimeDatabaseListener", &UFirebaseHelperBPLibrary::execRealtimeDatabaseListener },
			{ "RealtimeDatabaseRead", &UFirebaseHelperBPLibrary::execRealtimeDatabaseRead },
			{ "RealtimeDatabaseWrite", &UFirebaseHelperBPLibrary::execRealtimeDatabaseWrite },
			{ "SetupFirebase", &UFirebaseHelperBPLibrary::execSetupFirebase },
			{ "SignInAnonymously", &UFirebaseHelperBPLibrary::execSignInAnonymously },
			{ "SignInWithEmailAndPassword", &UFirebaseHelperBPLibrary::execSignInWithEmailAndPassword },
			{ "SignUpWithEmailAndPassword", &UFirebaseHelperBPLibrary::execSignUpWithEmailAndPassword },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics
	{
		struct FirebaseHelperBPLibrary_eventExchangeCustomToken_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventExchangeCustomToken_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_CustomToken = { "CustomToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventExchangeCustomToken_Parms, CustomToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_CustomToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::NewProp_CustomToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Exchange custom token for an ID and refresh token" },
		{ "Keywords", "FirebaseAuth CustomToken" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "ExchangeCustomToken", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventExchangeCustomToken_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics
	{
		struct FirebaseHelperBPLibrary_eventExchangeRefreshToken_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventExchangeRefreshToken_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventExchangeRefreshToken_Parms, RefreshToken), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_RefreshToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::NewProp_RefreshToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Exchange a refresh token for an ID token" },
		{ "Keywords", "Refresh Firebase ID" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "ExchangeRefreshToken", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventExchangeRefreshToken_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics
	{
		struct FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms
		{
			FString Path;
			bool UseAuth;
			bool ReceiveDataSent;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveDataSent_MetaData[];
#endif
		static void NewProp_ReceiveDataSent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReceiveDataSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAuth_MetaData[];
#endif
		static void NewProp_UseAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_SetBit(void* Obj)
	{
		((FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms*)Obj)->ReceiveDataSent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent = { "ReceiveDataSent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms), &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_SetBit(void* Obj)
	{
		((FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms*)Obj)->UseAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth = { "UseAuth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms), &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_UseAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "Comment", "/*\n\x09* REALTIME DATABASE FUNCTIONS\n\x09*/" },
		{ "DisplayName", "Delete From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Delete" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "* REALTIME DATABASE FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "RealtimeDatabaseDelete", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseDelete_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics
	{
		struct FirebaseHelperBPLibrary_eventRealtimeDatabaseListener_Parms
		{
			FString Path;
			FRealtimeReadOptions RealtimeOptions;
			FScriptDelegate ListenerCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ListenerCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_ListenerCallback = { "ListenerCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseListener_Parms, ListenerCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions = { "RealtimeOptions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseListener_Parms, RealtimeOptions), Z_Construct_UScriptStruct_FRealtimeReadOptions, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseListener_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_ListenerCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Listen From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Listen" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "RealtimeDatabaseListener", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseListener_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics
	{
		struct FirebaseHelperBPLibrary_eventRealtimeDatabaseRead_Parms
		{
			FString Path;
			FRealtimeReadOptions RealtimeOptions;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseRead_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions = { "RealtimeOptions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseRead_Parms, RealtimeOptions), Z_Construct_UScriptStruct_FRealtimeReadOptions, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseRead_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Read From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Delete" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "RealtimeDatabaseRead", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseRead_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics
	{
		struct FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms
		{
			FString Path;
			FString Content;
			bool Update;
			FRealtimeWriteOptions Options;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[];
#endif
		static void NewProp_Update_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Update;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms, Options), Z_Construct_UScriptStruct_FRealtimeWriteOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update_SetBit(void* Obj)
	{
		((FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms*)Obj)->Update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms), &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Write To RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Write" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "RealtimeDatabaseWrite", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventRealtimeDatabaseWrite_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Setup Firebase" },
		{ "Keywords", "FirebaseHelper Setup Firebase" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "SetupFirebase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics
	{
		struct FirebaseHelperBPLibrary_eventSignInAnonymously_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignInAnonymously_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::NewProp_AuthResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign in anonymously" },
		{ "Keywords", "Login Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "SignInAnonymously", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventSignInAnonymously_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics
	{
		struct FirebaseHelperBPLibrary_eventSignInWithEmailAndPassword_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignInWithEmailAndPassword_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignInWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignInWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign in with Email & Password" },
		{ "Keywords", "Login Firebase Auth" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "SignInWithEmailAndPassword", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventSignInWithEmailAndPassword_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics
	{
		struct FirebaseHelperBPLibrary_eventSignUpWithEmailAndPassword_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_AuthResultCallback = { "AuthResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignUpWithEmailAndPassword_Parms, AuthResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignUpWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventSignUpWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_AuthResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseAuth" },
		{ "DisplayName", "Sign up with Email & Password" },
		{ "Keywords", "Create Account Firebase" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "SignUpWithEmailAndPassword", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventSignUpWithEmailAndPassword_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary_NoRegister()
	{
		return UFirebaseHelperBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeCustomToken, "ExchangeCustomToken" }, // 3678890779
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_ExchangeRefreshToken, "ExchangeRefreshToken" }, // 7089568
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete, "RealtimeDatabaseDelete" }, // 1562556265
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener, "RealtimeDatabaseListener" }, // 2362876619
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead, "RealtimeDatabaseRead" }, // 2882182749
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite, "RealtimeDatabaseWrite" }, // 1613430391
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase, "SetupFirebase" }, // 2574688956
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInAnonymously, "SignInAnonymously" }, // 3009884758
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignInWithEmailAndPassword, "SignInWithEmailAndPassword" }, // 655066552
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_SignUpWithEmailAndPassword, "SignUpWithEmailAndPassword" }, // 3767345086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseHelperBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseHelperBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::ClassParams = {
		&UFirebaseHelperBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseHelperBPLibrary, 3752626899);
	template<> FIREBASEHELPER_API UClass* StaticClass<UFirebaseHelperBPLibrary>()
	{
		return UFirebaseHelperBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseHelperBPLibrary(Z_Construct_UClass_UFirebaseHelperBPLibrary, &UFirebaseHelperBPLibrary::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("UFirebaseHelperBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseHelperBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
