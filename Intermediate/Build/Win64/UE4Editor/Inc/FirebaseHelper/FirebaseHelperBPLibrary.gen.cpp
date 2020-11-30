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
// End Cross Module References
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execMakeParentChildJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Parent);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::MakeParentChildJson(Z_Param_Parent,Z_Param_ChildKey,Z_Param_ChildValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonStringFromJsonString)
	{
		P_GET_TARRAY(FString,Z_Param_Children);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonStringFromJsonString(Z_Param_Children);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonFieldFromIntegerArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(int32,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonFieldFromIntegerArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonFieldFromNumberArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(float,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonFieldFromNumberArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonFieldFromStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonFieldFromStringArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonFieldFromBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(bool,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonFieldFromBoolArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonStringFromBool)
	{
		P_GET_TMAP(FString,bool,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonStringFromBool(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonStringFromString)
	{
		P_GET_TMAP(FString,FString,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonStringFromString(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonStringFromNumber)
	{
		P_GET_TMAP(FString,float,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonStringFromNumber(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execJsonStringFromInteger)
	{
		P_GET_TMAP(FString,int32,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::JsonStringFromInteger(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseHelperBPLibrary::execGetAuthID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseHelperBPLibrary::GetAuthID();
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
			{ "GetAuthID", &UFirebaseHelperBPLibrary::execGetAuthID },
			{ "JsonFieldFromBoolArray", &UFirebaseHelperBPLibrary::execJsonFieldFromBoolArray },
			{ "JsonFieldFromIntegerArray", &UFirebaseHelperBPLibrary::execJsonFieldFromIntegerArray },
			{ "JsonFieldFromNumberArray", &UFirebaseHelperBPLibrary::execJsonFieldFromNumberArray },
			{ "JsonFieldFromStringArray", &UFirebaseHelperBPLibrary::execJsonFieldFromStringArray },
			{ "JsonStringFromBool", &UFirebaseHelperBPLibrary::execJsonStringFromBool },
			{ "JsonStringFromInteger", &UFirebaseHelperBPLibrary::execJsonStringFromInteger },
			{ "JsonStringFromJsonString", &UFirebaseHelperBPLibrary::execJsonStringFromJsonString },
			{ "JsonStringFromNumber", &UFirebaseHelperBPLibrary::execJsonStringFromNumber },
			{ "JsonStringFromString", &UFirebaseHelperBPLibrary::execJsonStringFromString },
			{ "MakeParentChildJson", &UFirebaseHelperBPLibrary::execMakeParentChildJson },
			{ "SetupFirebase", &UFirebaseHelperBPLibrary::execSetupFirebase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics
	{
		struct FirebaseHelperBPLibrary_eventGetAuthID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventGetAuthID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Get Auth ID" },
		{ "Keywords", "Firebase Helper Auth ID" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "GetAuthID", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventGetAuthID_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonFieldFromBoolArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromBoolArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromBoolArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromBoolArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Boolean Array to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonFieldFromBoolArray", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonFieldFromBoolArray_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonFieldFromIntegerArray_Parms
		{
			FString Key;
			TArray<int32> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromIntegerArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromIntegerArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromIntegerArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Integer Array to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonFieldFromIntegerArray", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonFieldFromIntegerArray_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonFieldFromNumberArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromNumberArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromNumberArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromNumberArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Float Array to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonFieldFromNumberArray", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonFieldFromNumberArray_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonFieldFromStringArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromStringArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromStringArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonFieldFromStringArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "String Array to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonFieldFromStringArray", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonFieldFromStringArray_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonStringFromBool_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromBool_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromBool_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Boolean Map to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonStringFromBool", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonStringFromBool_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonStringFromInteger_Parms
		{
			TMap<FString,int32> Map;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromInteger_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "Comment", "/*\n    * Firebase HELPER FUNCTIONS\n    */" },
		{ "DisplayName", "Integer Map to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
		{ "ToolTip", "* Firebase HELPER FUNCTIONS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonStringFromInteger", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonStringFromInteger_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonStringFromJsonString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromJsonString_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::NewProp_Children_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Combine JsonString to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonStringFromJsonString", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonStringFromJsonString_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonStringFromNumber_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromNumber_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Float Map to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonStringFromNumber", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonStringFromNumber_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics
	{
		struct FirebaseHelperBPLibrary_eventJsonStringFromString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventJsonStringFromString_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "String Map to JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "JsonStringFromString", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventJsonStringFromString_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics
	{
		struct FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildValue = { "ChildValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms, ChildValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_Parent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms, Parent), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::NewProp_Parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "FirebaseHelper" },
		{ "DisplayName", "Make Parent-Child JsonString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/FirebaseHelperBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseHelperBPLibrary, nullptr, "MakeParentChildJson", nullptr, nullptr, sizeof(FirebaseHelperBPLibrary_eventMakeParentChildJson_Parms), Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_GetAuthID, "GetAuthID" }, // 4035905015
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromBoolArray, "JsonFieldFromBoolArray" }, // 1750302380
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromIntegerArray, "JsonFieldFromIntegerArray" }, // 2536222017
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromNumberArray, "JsonFieldFromNumberArray" }, // 2408728837
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonFieldFromStringArray, "JsonFieldFromStringArray" }, // 4021468431
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromBool, "JsonStringFromBool" }, // 457677801
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromInteger, "JsonStringFromInteger" }, // 2856438885
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromJsonString, "JsonStringFromJsonString" }, // 2490727693
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromNumber, "JsonStringFromNumber" }, // 44889028
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_JsonStringFromString, "JsonStringFromString" }, // 4268331060
		{ &Z_Construct_UFunction_UFirebaseHelperBPLibrary_MakeParentChildJson, "MakeParentChildJson" }, // 1464165550
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
	IMPLEMENT_CLASS(UFirebaseHelperBPLibrary, 2554765664);
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
