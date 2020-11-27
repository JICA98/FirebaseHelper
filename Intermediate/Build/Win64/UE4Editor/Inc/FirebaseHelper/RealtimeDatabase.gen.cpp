// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/RealtimeDatabase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtimeDatabase() {}
// Cross Module References
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseData();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeWriteOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeReadOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeValue();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_URealtimeDatabase_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_URealtimeDatabase();
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeWriteOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_UseAuth_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag = { "WriteExTag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeWriteOptions, WriteExTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_WriteExTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics::NewProp_ReceiveExTag_MetaData[] = {
		{ "Category", "RealtimeWriteOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeWriteOptions_Hash() { return 3316429143U; }
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeReadOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo = { "EqualTo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, EqualTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EqualTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast = { "LimitToLast", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, LimitToLast), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToLast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst = { "LimitToFirst", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, LimitToFirst), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_LimitToFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt = { "EndAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, EndAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_EndAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt = { "StartAt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, StartAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_StartAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue = { "OrderByKeyOrValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, OrderByKeyOrValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderByKeyOrValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, OrderBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_OrderBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut = { "TimeOut", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRealtimeReadOptions, TimeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_TimeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics::NewProp_Shallow_MetaData[] = {
		{ "Category", "RealtimeReadOptions" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeReadOptions_Hash() { return 1125040174U; }
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag = { "ExTag", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseData, ExTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_ExTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_WasSuccessful_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FirebaseData" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseData_Hash() { return 2024499216U; }
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
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
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
	uint32 Get_Z_Construct_UScriptStruct_FRealtimeValue_Hash() { return 3940306941U; }
	DEFINE_FUNCTION(URealtimeDatabase::execMakeParentChildJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Parent);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::MakeParentChildJson(Z_Param_Parent,Z_Param_ChildKey,Z_Param_ChildValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonStringFromJsonString)
	{
		P_GET_TARRAY(FString,Z_Param_Children);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonStringFromJsonString(Z_Param_Children);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonFieldFromNumberArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(float,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonFieldFromNumberArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonFieldFromStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonFieldFromStringArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonFieldFromBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(bool,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonFieldFromBoolArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonStringFromBool)
	{
		P_GET_TMAP(FString,bool,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonStringFromBool(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonStringFromString)
	{
		P_GET_TMAP(FString,FString,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonStringFromString(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execJsonStringFromNumber)
	{
		P_GET_TMAP(FString,float,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::JsonStringFromNumber(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execAsRealtimeObject)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FRealtimeValue>*)Z_Param__Result=URealtimeDatabase::AsRealtimeObject(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execAsRealtimeArray)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRealtimeValue>*)Z_Param__Result=URealtimeDatabase::AsRealtimeArray(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execAsRealtimeBool)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URealtimeDatabase::AsRealtimeBool(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execAsRealtimeString)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URealtimeDatabase::AsRealtimeString(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execAsRealtimeNumber)
	{
		P_GET_STRUCT(FRealtimeValue,Z_Param_RealtimeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URealtimeDatabase::AsRealtimeNumber(Z_Param_RealtimeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execRealtimeDatabaseListener)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT(FRealtimeReadOptions,Z_Param_RealtimeOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ListenerCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtimeDatabase::RealtimeDatabaseListener(Z_Param_Path,Z_Param_RealtimeOptions,FOperationComplete(Z_Param_ListenerCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execRealtimeDatabaseRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_STRUCT(FRealtimeReadOptions,Z_Param_RealtimeOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtimeDatabase::RealtimeDatabaseRead(Z_Param_Path,Z_Param_RealtimeOptions,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execRealtimeDatabaseWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_GET_UBOOL(Z_Param_Update);
		P_GET_STRUCT(FRealtimeWriteOptions,Z_Param_Options);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtimeDatabase::RealtimeDatabaseWrite(Z_Param_Path,Z_Param_Content,Z_Param_Update,Z_Param_Options,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtimeDatabase::execRealtimeDatabaseDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_UseAuth);
		P_GET_UBOOL(Z_Param_ReceiveDataSent);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtimeDatabase::RealtimeDatabaseDelete(Z_Param_Path,Z_Param_UseAuth,Z_Param_ReceiveDataSent,FOperationComplete(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	void URealtimeDatabase::StaticRegisterNativesURealtimeDatabase()
	{
		UClass* Class = URealtimeDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsRealtimeArray", &URealtimeDatabase::execAsRealtimeArray },
			{ "AsRealtimeBool", &URealtimeDatabase::execAsRealtimeBool },
			{ "AsRealtimeNumber", &URealtimeDatabase::execAsRealtimeNumber },
			{ "AsRealtimeObject", &URealtimeDatabase::execAsRealtimeObject },
			{ "AsRealtimeString", &URealtimeDatabase::execAsRealtimeString },
			{ "JsonFieldFromBoolArray", &URealtimeDatabase::execJsonFieldFromBoolArray },
			{ "JsonFieldFromNumberArray", &URealtimeDatabase::execJsonFieldFromNumberArray },
			{ "JsonFieldFromStringArray", &URealtimeDatabase::execJsonFieldFromStringArray },
			{ "JsonStringFromBool", &URealtimeDatabase::execJsonStringFromBool },
			{ "JsonStringFromJsonString", &URealtimeDatabase::execJsonStringFromJsonString },
			{ "JsonStringFromNumber", &URealtimeDatabase::execJsonStringFromNumber },
			{ "JsonStringFromString", &URealtimeDatabase::execJsonStringFromString },
			{ "MakeParentChildJson", &URealtimeDatabase::execMakeParentChildJson },
			{ "RealtimeDatabaseDelete", &URealtimeDatabase::execRealtimeDatabaseDelete },
			{ "RealtimeDatabaseListener", &URealtimeDatabase::execRealtimeDatabaseListener },
			{ "RealtimeDatabaseRead", &URealtimeDatabase::execRealtimeDatabaseRead },
			{ "RealtimeDatabaseWrite", &URealtimeDatabase::execRealtimeDatabaseWrite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics
	{
		struct RealtimeDatabase_eventAsRealtimeArray_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeArray_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get Array from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "AsRealtimeArray", nullptr, nullptr, sizeof(RealtimeDatabase_eventAsRealtimeArray_Parms), Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics
	{
		struct RealtimeDatabase_eventAsRealtimeBool_Parms
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
	void Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RealtimeDatabase_eventAsRealtimeBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealtimeDatabase_eventAsRealtimeBool_Parms), &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeBool_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get Boolean from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "AsRealtimeBool", nullptr, nullptr, sizeof(RealtimeDatabase_eventAsRealtimeBool_Parms), Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics
	{
		struct RealtimeDatabase_eventAsRealtimeNumber_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeNumber_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "Comment", "/*\n\x09* REALTIME DATABASE HELPER FUNCTIONS\n\x09*/" },
		{ "DisplayName", "Get Number from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
		{ "ToolTip", "* REALTIME DATABASE HELPER FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "AsRealtimeNumber", nullptr, nullptr, sizeof(RealtimeDatabase_eventAsRealtimeNumber_Parms), Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics
	{
		struct RealtimeDatabase_eventAsRealtimeObject_Parms
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
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeObject_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeObject_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get RealtimeMap" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "AsRealtimeObject", nullptr, nullptr, sizeof(RealtimeDatabase_eventAsRealtimeObject_Parms), Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics
	{
		struct RealtimeDatabase_eventAsRealtimeString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_RealtimeValue = { "RealtimeValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventAsRealtimeString_Parms, RealtimeValue), Z_Construct_UScriptStruct_FRealtimeValue, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_RealtimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::NewProp_RealtimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Read Helper" },
		{ "DisplayName", "Get String from RealtimeValue" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "AsRealtimeString", nullptr, nullptr, sizeof(RealtimeDatabase_eventAsRealtimeString_Parms), Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics
	{
		struct RealtimeDatabase_eventJsonFieldFromBoolArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromBoolArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromBoolArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromBoolArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Boolean Array to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonFieldFromBoolArray", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonFieldFromBoolArray_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics
	{
		struct RealtimeDatabase_eventJsonFieldFromNumberArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromNumberArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromNumberArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromNumberArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonFieldFromNumberArray", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonFieldFromNumberArray_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics
	{
		struct RealtimeDatabase_eventJsonFieldFromStringArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromStringArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromStringArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonFieldFromStringArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonFieldFromStringArray", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonFieldFromStringArray_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics
	{
		struct RealtimeDatabase_eventJsonStringFromBool_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromBool_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromBool_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Boolean Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonStringFromBool", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonStringFromBool_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics
	{
		struct RealtimeDatabase_eventJsonStringFromJsonString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromJsonString_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::NewProp_Children_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Combine JsonString to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonStringFromJsonString", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonStringFromJsonString_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics
	{
		struct RealtimeDatabase_eventJsonStringFromNumber_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromNumber_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Number Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonStringFromNumber", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonStringFromNumber_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics
	{
		struct RealtimeDatabase_eventJsonStringFromString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventJsonStringFromString_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "JsonStringFromString", nullptr, nullptr, sizeof(RealtimeDatabase_eventJsonStringFromString_Parms), Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics
	{
		struct RealtimeDatabase_eventMakeParentChildJson_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventMakeParentChildJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildValue = { "ChildValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventMakeParentChildJson_Parms, ChildValue), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventMakeParentChildJson_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_Parent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventMakeParentChildJson_Parms, Parent), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase Write Helper" },
		{ "DisplayName", "Make Parent-Child JsonString" },
		{ "Keywords", "RealtimeDatabase Helper" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "MakeParentChildJson", nullptr, nullptr, sizeof(RealtimeDatabase_eventMakeParentChildJson_Parms), Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics
	{
		struct RealtimeDatabase_eventRealtimeDatabaseDelete_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseDelete_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_SetBit(void* Obj)
	{
		((RealtimeDatabase_eventRealtimeDatabaseDelete_Parms*)Obj)->ReceiveDataSent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent = { "ReceiveDataSent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealtimeDatabase_eventRealtimeDatabaseDelete_Parms), &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_SetBit(void* Obj)
	{
		((RealtimeDatabase_eventRealtimeDatabaseDelete_Parms*)Obj)->UseAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth = { "UseAuth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealtimeDatabase_eventRealtimeDatabaseDelete_Parms), &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseDelete_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_ReceiveDataSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_UseAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "Comment", "/*\n\x09* REALTIME DATABASE FUNCTIONS\n\x09*/" },
		{ "DisplayName", "Delete From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Delete" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
		{ "ToolTip", "* REALTIME DATABASE FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "RealtimeDatabaseDelete", nullptr, nullptr, sizeof(RealtimeDatabase_eventRealtimeDatabaseDelete_Parms), Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics
	{
		struct RealtimeDatabase_eventRealtimeDatabaseListener_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_ListenerCallback = { "ListenerCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseListener_Parms, ListenerCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions = { "RealtimeOptions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseListener_Parms, RealtimeOptions), Z_Construct_UScriptStruct_FRealtimeReadOptions, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseListener_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_ListenerCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_RealtimeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Listen From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Listen" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "RealtimeDatabaseListener", nullptr, nullptr, sizeof(RealtimeDatabase_eventRealtimeDatabaseListener_Parms), Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics
	{
		struct RealtimeDatabase_eventRealtimeDatabaseRead_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseRead_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions = { "RealtimeOptions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseRead_Parms, RealtimeOptions), Z_Construct_UScriptStruct_FRealtimeReadOptions, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseRead_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_RealtimeOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Read From RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Delete" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "RealtimeDatabaseRead", nullptr, nullptr, sizeof(RealtimeDatabase_eventRealtimeDatabaseRead_Parms), Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics
	{
		struct RealtimeDatabase_eventRealtimeDatabaseWrite_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms, Options), Z_Construct_UScriptStruct_FRealtimeWriteOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update_SetBit(void* Obj)
	{
		((RealtimeDatabase_eventRealtimeDatabaseWrite_Parms*)Obj)->Update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms), &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms, Content), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtimeDatabase" },
		{ "DisplayName", "Write To RealtimeDatabase" },
		{ "Keywords", "RealtimeDatabase Write" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtimeDatabase, nullptr, "RealtimeDatabaseWrite", nullptr, nullptr, sizeof(RealtimeDatabase_eventRealtimeDatabaseWrite_Parms), Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URealtimeDatabase_NoRegister()
	{
		return URealtimeDatabase::StaticClass();
	}
	struct Z_Construct_UClass_URealtimeDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtimeDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealtimeDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeArray, "AsRealtimeArray" }, // 2759749590
		{ &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeBool, "AsRealtimeBool" }, // 423159596
		{ &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeNumber, "AsRealtimeNumber" }, // 1681535974
		{ &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeObject, "AsRealtimeObject" }, // 3329923042
		{ &Z_Construct_UFunction_URealtimeDatabase_AsRealtimeString, "AsRealtimeString" }, // 3797452860
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromBoolArray, "JsonFieldFromBoolArray" }, // 1107359696
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromNumberArray, "JsonFieldFromNumberArray" }, // 1539797196
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonFieldFromStringArray, "JsonFieldFromStringArray" }, // 1338545420
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonStringFromBool, "JsonStringFromBool" }, // 3289587462
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonStringFromJsonString, "JsonStringFromJsonString" }, // 2021269775
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonStringFromNumber, "JsonStringFromNumber" }, // 2467728633
		{ &Z_Construct_UFunction_URealtimeDatabase_JsonStringFromString, "JsonStringFromString" }, // 1819837551
		{ &Z_Construct_UFunction_URealtimeDatabase_MakeParentChildJson, "MakeParentChildJson" }, // 4251430244
		{ &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseDelete, "RealtimeDatabaseDelete" }, // 3539938951
		{ &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseListener, "RealtimeDatabaseListener" }, // 1873104232
		{ &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseRead, "RealtimeDatabaseRead" }, // 394863612
		{ &Z_Construct_UFunction_URealtimeDatabase_RealtimeDatabaseWrite, "RealtimeDatabaseWrite" }, // 3337646107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtimeDatabase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeDatabase.h" },
		{ "ModuleRelativePath", "Public/RealtimeDatabase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtimeDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URealtimeDatabase_Statics::ClassParams = {
		&URealtimeDatabase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealtimeDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtimeDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URealtimeDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URealtimeDatabase, 109590531);
	template<> FIREBASEHELPER_API UClass* StaticClass<URealtimeDatabase>()
	{
		return URealtimeDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URealtimeDatabase(Z_Construct_UClass_URealtimeDatabase, &URealtimeDatabase::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("URealtimeDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtimeDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
