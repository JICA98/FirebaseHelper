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
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirebaseHelperBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeReadOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeWriteOptions();
// End Cross Module References
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
			{ "RealtimeDatabaseDelete", &UFirebaseHelperBPLibrary::execRealtimeDatabaseDelete },
			{ "RealtimeDatabaseListener", &UFirebaseHelperBPLibrary::execRealtimeDatabaseListener },
			{ "RealtimeDatabaseRead", &UFirebaseHelperBPLibrary::execRealtimeDatabaseRead },
			{ "RealtimeDatabaseWrite", &UFirebaseHelperBPLibrary::execRealtimeDatabaseWrite },
			{ "SetupFirebase", &UFirebaseHelperBPLibrary::execSetupFirebase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseDelete, "RealtimeDatabaseDelete" }, // 1562556265
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseListener, "RealtimeDatabaseListener" }, // 2362876619
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseRead, "RealtimeDatabaseRead" }, // 2882182749
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_RealtimeDatabaseWrite, "RealtimeDatabaseWrite" }, // 1613430391
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_SetupFirebase, "SetupFirebase" }, // 2574688956
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
	IMPLEMENT_CLASS(UFirebaseHelperBPLibrary, 2017314847);
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
