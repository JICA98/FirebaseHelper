// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/URealtimeDatabaseHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeURealtimeDatabaseHelper() {}
// Cross Module References
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseData();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeWriteOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeReadOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeValue();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_URealtimeDatabaseHelper_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_URealtimeDatabaseHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventOperationComplete_Parms
		{
			FFirebaseData ResultCallback;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventOperationComplete_Parms, ResultCallback), Z_Construct_UScriptStruct_FFirebaseData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::NewProp_ResultCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "OperationComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventOperationComplete_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRealtimeWriteOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeWriteOptions, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("RealtimeWriteOptions"), sizeof(FRealtimeWriteOptions), Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FRealtimeWriteOptions>()
{
	return FRealtimeWriteOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealtimeWriteOptions(FRealtimeWriteOptions::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("RealtimeWriteOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeWriteOptions
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeWriteOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealtimeWriteOptions")),new UScriptStruct::TCppStructOps<FRealtimeWriteOptions>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeWriteOptions;
	struct Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAuth_MetaData[];
#endif
		static void NewProp_UseAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveDataSent_MetaData[];
#endif
		static void NewProp_ReceiveDataSent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReceiveDataSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteExTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WriteExTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveExTag_MetaData[];
#endif
		static void NewProp_ReceiveExTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReceiveExTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WriteAsChild_MetaData[];
#endif
		static void NewProp_WriteAsChild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WriteAsChild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeWriteOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_SetBit(void* Obj)
	{
		((FRealtimeWriteOptions*)Obj)->UseAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth = { "UseAuth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeWriteOptions), &Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent_SetBit(void* Obj)
	{
		((FRealtimeWriteOptions*)Obj)->ReceiveDataSent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent = { "ReceiveDataSent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeWriteOptions), &Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag = { "WriteExTag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeWriteOptions, WriteExTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_SetBit(void* Obj)
	{
		((FRealtimeWriteOptions*)Obj)->ReceiveExTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag = { "ReceiveExTag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeWriteOptions), &Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild_SetBit(void* Obj)
	{
		((FRealtimeWriteOptions*)Obj)->WriteAsChild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild = { "WriteAsChild", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeWriteOptions), &Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveDataSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteAsChild,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"RealtimeWriteOptions",
		sizeof(FRealtimeWriteOptions),
		alignof(FRealtimeWriteOptions),
		Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealtimeWriteOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealtimeWriteOptions"), sizeof(FRealtimeWriteOptions), Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash() { return 4058429243U; }
class UScriptStruct* FRealtimeReadOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeReadOptions, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("RealtimeReadOptions"), sizeof(FRealtimeReadOptions), Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FRealtimeReadOptions>()
{
	return FRealtimeReadOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealtimeReadOptions(FRealtimeReadOptions::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("RealtimeReadOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeReadOptions
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeReadOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealtimeReadOptions")),new UScriptStruct::TCppStructOps<FRealtimeReadOptions>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeReadOptions;
	struct Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EqualTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EqualTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitToLast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LimitToLast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitToFirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LimitToFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderByKeyOrValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderByKeyOrValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shallow_MetaData[];
#endif
		static void NewProp_Shallow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Shallow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAuth_MetaData[];
#endif
		static void NewProp_UseAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeReadOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo = { "EqualTo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, EqualTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast = { "LimitToLast", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, LimitToLast), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst = { "LimitToFirst", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, LimitToFirst), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt = { "EndAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, EndAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt = { "StartAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, StartAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue = { "OrderByKeyOrValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, OrderByKeyOrValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, OrderBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, TimeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_SetBit(void* Obj)
	{
		((FRealtimeReadOptions*)Obj)->Shallow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow = { "Shallow", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeReadOptions), &Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth_SetBit(void* Obj)
	{
		((FRealtimeReadOptions*)Obj)->UseAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth = { "UseAuth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRealtimeReadOptions), &Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_UseAuth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"RealtimeReadOptions",
		sizeof(FRealtimeReadOptions),
		alignof(FRealtimeReadOptions),
		Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealtimeReadOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealtimeReadOptions"), sizeof(FRealtimeReadOptions), Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash() { return 2266155022U; }
class UScriptStruct* FFirebaseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseData, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("FirebaseData"), sizeof(FFirebaseData), Get_Z_Construct_UScriptStruct_FFirebaseData_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FFirebaseData>()
{
	return FFirebaseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseData(FFirebaseData::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("FirebaseData"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseData
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseData")),new UScriptStruct::TCppStructOps<FFirebaseData>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFFirebaseData;
	struct Z_Construct_UScriptStruct_FFirebaseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasSuccessful_MetaData[];
#endif
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag = { "ExTag", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseData, ExTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((FFirebaseData*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseData), &Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseData, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"FirebaseData",
		sizeof(FFirebaseData),
		alignof(FFirebaseData),
		Z_Construct_UScriptStruct_FFirebaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseData"), sizeof(FFirebaseData), Get_Z_Construct_UScriptStruct_FFirebaseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseData_Hash() { return 2311797607U; }
class UScriptStruct* FRealtimeValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeValue, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("RealtimeValue"), sizeof(FRealtimeValue), Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FRealtimeValue>()
{
	return FRealtimeValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRealtimeValue(FRealtimeValue::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("RealtimeValue"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeValue
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RealtimeValue")),new UScriptStruct::TCppStructOps<FRealtimeValue>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFRealtimeValue;
	struct Z_Construct_UScriptStruct_FRealtimeValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtimeValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"RealtimeValue",
		sizeof(FRealtimeValue),
		alignof(FRealtimeValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealtimeValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RealtimeValue"), sizeof(FRealtimeValue), Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRealtimeValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash() { return 2621411695U; }
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execMakeParentChildJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Parent);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::MakeParentChildJson(Z_Param_Parent,Z_Param_ChildKey,Z_Param_ChildValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonStringFromJsonString)
	{
		P_GET_TARRAY(FString,Z_Param_Children);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonStringFromJsonString(Z_Param_Children);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonFieldFromNumberArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(float,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonFieldFromNumberArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonFieldFromStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonFieldFromStringArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonFieldFromBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(bool,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonFieldFromBoolArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonStringFromBool)
	{
		P_GET_TMAP(FString,bool,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonStringFromBool(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonStringFromString)
	{
		P_GET_TMAP(FString,FString,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonStringFromString(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execJsonStringFromNumber)
	{
		P_GET_TMAP(FString,float,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::JsonStringFromNumber(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execAsRealtimeObject)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FRealtimeValue>*)Z_Param__Result=URealtimeDatabaseHelper::AsRealtimeObject(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execAsRealtimeArray)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRealtimeValue>*)Z_Param__Result=URealtimeDatabaseHelper::AsRealtimeArray(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execAsRealtimeBool)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URealtimeDatabaseHelper::AsRealtimeBool(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execAsRealtimeString)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabaseHelper::AsRealtimeString(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabaseHelper::execAsRealtimeNumber)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URealtimeDatabaseHelper::AsRealtimeNumber(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	void URealtimeDatabaseHelper::StaticRegisterNativesURealtimeDatabaseHelper()
	{
		UClass* Class = URealtimeDatabaseHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsRealtimeArray", &URealtimeDatabaseHelper::execAsRealtimeArray },
			{ "AsRealtimeBool", &URealtimeDatabaseHelper::execAsRealtimeBool },
			{ "AsRealtimeNumber", &URealtimeDatabaseHelper::execAsRealtimeNumber },
			{ "AsRealtimeObject", &URealtimeDatabaseHelper::execAsRealtimeObject },
			{ "AsRealtimeString", &URealtimeDatabaseHelper::execAsRealtimeString },
			{ "JsonFieldFromBoolArray", &URealtimeDatabaseHelper::execJsonFieldFromBoolArray },
			{ "JsonFieldFromNumberArray", &URealtimeDatabaseHelper::execJsonFieldFromNumberArray },
			{ "JsonFieldFromStringArray", &URealtimeDatabaseHelper::execJsonFieldFromStringArray },
			{ "JsonStringFromBool", &URealtimeDatabaseHelper::execJsonStringFromBool },
			{ "JsonStringFromJsonString", &URealtimeDatabaseHelper::execJsonStringFromJsonString },
			{ "JsonStringFromNumber", &URealtimeDatabaseHelper::execJsonStringFromNumber },
			{ "JsonStringFromString", &URealtimeDatabaseHelper::execJsonStringFromString },
			{ "MakeParentChildJson", &URealtimeDatabaseHelper::execMakeParentChildJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics
	{
		struct RealtimeDatabaseHelper_eventAsRealtimeArray_Parms
		{
			FRealtimeValue RealtimeValue;
			TArray<FRealtimeValue> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeArray_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get Array from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "AsRealtimeArray", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventAsRealtimeArray_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics
	{
		struct RealtimeDatabaseHelper_eventAsRealtimeBool_Parms
		{
			FRealtimeValue RealtimeValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RealtimeDatabaseHelper_eventAsRealtimeBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealtimeDatabaseHelper_eventAsRealtimeBool_Parms), &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeBool_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get Boolean from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "AsRealtimeBool", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventAsRealtimeBool_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics
	{
		struct RealtimeDatabaseHelper_eventAsRealtimeNumber_Parms
		{
			FRealtimeValue RealtimeValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeNumber_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "Comment", "/*\n\x09* REALTIME DATABASE HELPER FUNCTIONS\n\x09*/" },
		{ "DisplayName", "Get Number from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
		{ "ToolTip", "* REALTIME DATABASE HELPER FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "AsRealtimeNumber", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventAsRealtimeNumber_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics
	{
		struct RealtimeDatabaseHelper_eventAsRealtimeObject_Parms
		{
			FRealtimeValue RealtimeValue;
			TMap<FString,FRealtimeValue> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeObject_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeObject_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get RealtimeMap" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "AsRealtimeObject", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventAsRealtimeObject_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics
	{
		struct RealtimeDatabaseHelper_eventAsRealtimeString_Parms
		{
			FRealtimeValue RealtimeValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealtimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RealtimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventAsRealtimeString_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get String from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "AsRealtimeString", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventAsRealtimeString_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonFieldFromBoolArray_Parms
		{
			FString Key;
			TArray<bool> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromBoolArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromBoolArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromBoolArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Boolean Array to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonFieldFromBoolArray", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonFieldFromBoolArray_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonFieldFromNumberArray_Parms
		{
			FString Key;
			TArray<float> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromNumberArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromNumberArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromNumberArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonFieldFromNumberArray", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonFieldFromNumberArray_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonFieldFromStringArray_Parms
		{
			FString Key;
			TArray<FString> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromStringArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromStringArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonFieldFromStringArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonFieldFromStringArray", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonFieldFromStringArray_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonStringFromBool_Parms
		{
			TMap<FString,bool> Map;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromBool_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromBool_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Boolean Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonStringFromBool", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonStringFromBool_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonStringFromJsonString_Parms
		{
			TArray<FString> Children;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromJsonString_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::NewProp_Children_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Combine JsonString to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonStringFromJsonString", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonStringFromJsonString_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonStringFromNumber_Parms
		{
			TMap<FString,float> Map;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromNumber_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Number Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonStringFromNumber", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonStringFromNumber_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics
	{
		struct RealtimeDatabaseHelper_eventJsonStringFromString_Parms
		{
			TMap<FString,FString> Map;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventJsonStringFromString_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "JsonStringFromString", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventJsonStringFromString_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics
	{
		struct RealtimeDatabaseHelper_eventMakeParentChildJson_Parms
		{
			FString Parent;
			FString ChildKey;
			FString ChildValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventMakeParentChildJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildValue = { "ChildValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventMakeParentChildJson_Parms, ChildValue), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventMakeParentChildJson_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_Parent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabaseHelper_eventMakeParentChildJson_Parms, Parent), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Make Parent-Child JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabaseHelper, nullptr, "MakeParentChildJson", nullptr, nullptr, sizeof(RealtimeDatabaseHelper_eventMakeParentChildJson_Parms), Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URealtimeDatabaseHelper_NoRegister()
	{
		return URealtimeDatabaseHelper::StaticClass();
	}
	struct Z_Construct_UClass_URealtimeDatabaseHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtimeDatabaseHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealtimeDatabaseHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeArray, "AsRealtimeArray" }, // 329300142
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeBool, "AsRealtimeBool" }, // 674647953
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeNumber, "AsRealtimeNumber" }, // 2482763394
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeObject, "AsRealtimeObject" }, // 890230621
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_AsRealtimeString, "AsRealtimeString" }, // 76107117
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromBoolArray, "JsonFieldFromBoolArray" }, // 3725374977
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromNumberArray, "JsonFieldFromNumberArray" }, // 2506458159
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonFieldFromStringArray, "JsonFieldFromStringArray" }, // 2076793699
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromBool, "JsonStringFromBool" }, // 2088956936
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromJsonString, "JsonStringFromJsonString" }, // 2347756019
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromNumber, "JsonStringFromNumber" }, // 2091284929
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_JsonStringFromString, "JsonStringFromString" }, // 3310928434
		{ &Z_Construct_UFunction_URealtimeDatabaseHelper_MakeParentChildJson, "MakeParentChildJson" }, // 4270351388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtimeDatabaseHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "URealtimeDatabaseHelper.h" },
		{ "ModuleRelativePath", "Public/URealtimeDatabaseHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtimeDatabaseHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeDatabaseHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URealtimeDatabaseHelper_Statics::ClassParams = {
		&URealtimeDatabaseHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealtimeDatabaseHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeDatabaseHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtimeDatabaseHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URealtimeDatabaseHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URealtimeDatabaseHelper, 2767414197);
	template<> FIREBASEHELPER_API UClass* StaticClass<URealtimeDatabaseHelper>()
	{
		return URealtimeDatabaseHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URealtimeDatabaseHelper(Z_Construct_UClass_URealtimeDatabaseHelper, &URealtimeDatabaseHelper::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("URealtimeDatabaseHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtimeDatabaseHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
