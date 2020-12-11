// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/FirestoreValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirestoreValue() {}
// Cross Module References
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirestoreValue_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirestoreValue();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FJsonValueB();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoPoint();
// End Cross Module References
	DEFINE_FUNCTION(UFirestoreValue::execMapValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FJsonValueB>*)Z_Param__Result=UFirestoreValue::MapValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execArrayValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FJsonValueB>*)Z_Param__Result=UFirestoreValue::ArrayValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execGeoPointValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeoPoint*)Z_Param__Result=UFirestoreValue::GeoPointValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execReferenceValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirestoreValue::ReferenceValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execBytesValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirestoreValue::BytesValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execStringValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirestoreValue::StringValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execTimestampValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirestoreValue::TimestampValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execFloatValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirestoreValue::FloatValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execIntegerValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFirestoreValue::IntegerValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreValue::execBooleanValue)
	{
		P_GET_STRUCT(FJsonValueB,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFirestoreValue::BooleanValue(Z_Param_Value);
		P_NATIVE_END;
	}
	void UFirestoreValue::StaticRegisterNativesUFirestoreValue()
	{
		UClass* Class = UFirestoreValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrayValue", &UFirestoreValue::execArrayValue },
			{ "BooleanValue", &UFirestoreValue::execBooleanValue },
			{ "BytesValue", &UFirestoreValue::execBytesValue },
			{ "FloatValue", &UFirestoreValue::execFloatValue },
			{ "GeoPointValue", &UFirestoreValue::execGeoPointValue },
			{ "IntegerValue", &UFirestoreValue::execIntegerValue },
			{ "MapValue", &UFirestoreValue::execMapValue },
			{ "ReferenceValue", &UFirestoreValue::execReferenceValue },
			{ "StringValue", &UFirestoreValue::execStringValue },
			{ "TimestampValue", &UFirestoreValue::execTimestampValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics
	{
		struct FirestoreValue_eventArrayValue_Parms
		{
			FJsonValueB Value;
			TArray<FJsonValueB> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventArrayValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventArrayValue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Object (ArrayValue) An array value. Cannot directly contain another array value, though can contain an map which contains another array.\n" },
		{ "DisplayName", "Get Array of Firestore Values" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "Object (ArrayValue) An array value. Cannot directly contain another array value, though can contain an map which contains another array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "ArrayValue", nullptr, nullptr, sizeof(FirestoreValue_eventArrayValue_Parms), Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_ArrayValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics
	{
		struct FirestoreValue_eventBooleanValue_Parms
		{
			FJsonValueB Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBooleanValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirestoreValue_eventBooleanValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirestoreValue_eventBooleanValue_Parms), &Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//A boolean value.\n" },
		{ "DisplayName", "Get Boolean Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "A boolean value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "BooleanValue", nullptr, nullptr, sizeof(FirestoreValue_eventBooleanValue_Parms), Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_BooleanValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics
	{
		struct FirestoreValue_eventBytesValue_Parms
		{
			FJsonValueB Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBytesValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBytesValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//String (bytes format). A bytes value. Must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes are considered by queries. A base64-encoded string.\n" },
		{ "DisplayName", "Get Bytes Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "String (bytes format). A bytes value. Must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes are considered by queries. A base64-encoded string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "BytesValue", nullptr, nullptr, sizeof(FirestoreValue_eventBytesValue_Parms), Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_BytesValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics
	{
		struct FirestoreValue_eventFloatValue_Parms
		{
			FJsonValueB Value;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventFloatValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//number - A double value.\n" },
		{ "DisplayName", "Get Float Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "number - A double value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "FloatValue", nullptr, nullptr, sizeof(FirestoreValue_eventFloatValue_Parms), Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_FloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics
	{
		struct FirestoreValue_eventGeoPointValue_Parms
		{
			FJsonValueB Value;
			FGeoPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventGeoPointValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventGeoPointValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeoPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Object (LatLng) A geo point value representing a point on the surface of Earth.\n" },
		{ "DisplayName", "Get GeoPoint Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "Object (LatLng) A geo point value representing a point on the surface of Earth." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "GeoPointValue", nullptr, nullptr, sizeof(FirestoreValue_eventGeoPointValue_Parms), Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_GeoPointValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics
	{
		struct FirestoreValue_eventIntegerValue_Parms
		{
			FJsonValueB Value;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventIntegerValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventIntegerValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//string (int64 format) An integer value.\n" },
		{ "DisplayName", "Get Integer Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "string (int64 format) An integer value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "IntegerValue", nullptr, nullptr, sizeof(FirestoreValue_eventIntegerValue_Parms), Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_IntegerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_MapValue_Statics
	{
		struct FirestoreValue_eventMapValue_Parms
		{
			FJsonValueB Value;
			TMap<FString,FJsonValueB> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventMapValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventMapValue_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Object (MapValue). A map value.\n" },
		{ "DisplayName", "Get Map of String-Firestore Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "Object (MapValue). A map value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "MapValue", nullptr, nullptr, sizeof(FirestoreValue_eventMapValue_Parms), Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_MapValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics
	{
		struct FirestoreValue_eventReferenceValue_Parms
		{
			FJsonValueB Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventReferenceValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventReferenceValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//A reference to a document. For example: projects/{project_id}/databases/{database_id}/documents/{document_path}.\n" },
		{ "DisplayName", "Get Reference Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "A reference to a document. For example: projects/{project_id}/databases/{database_id}/documents/{document_path}." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "ReferenceValue", nullptr, nullptr, sizeof(FirestoreValue_eventReferenceValue_Parms), Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_ReferenceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_StringValue_Statics
	{
		struct FirestoreValue_eventStringValue_Parms
		{
			FJsonValueB Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventStringValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//A string value. The string, represented as UTF-8, must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes of the UTF-8 representation are considered by queries.\n" },
		{ "DisplayName", "Get String Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "A string value. The string, represented as UTF-8, must not exceed 1 MiB - 89 bytes. Only the first 1,500 bytes of the UTF-8 representation are considered by queries." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "StringValue", nullptr, nullptr, sizeof(FirestoreValue_eventStringValue_Parms), Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_StringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics
	{
		struct FirestoreValue_eventTimestampValue_Parms
		{
			FJsonValueB Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventTimestampValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventTimestampValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//string (Timestamp format) A timestamp value. Precise only to microseconds. When stored, any additional precision is rounded down. A timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\".\n" },
		{ "DisplayName", "Get TimeStamp Value" },
		{ "Keywords", "Cloud Firestore Boolean" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "string (Timestamp format) A timestamp value. Precise only to microseconds. When stored, any additional precision is rounded down. A timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreValue, nullptr, "TimestampValue", nullptr, nullptr, sizeof(FirestoreValue_eventTimestampValue_Parms), Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreValue_TimestampValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirestoreValue_NoRegister()
	{
		return UFirestoreValue::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreValue_ArrayValue, "ArrayValue" }, // 3256336308
		{ &Z_Construct_UFunction_UFirestoreValue_BooleanValue, "BooleanValue" }, // 4216417958
		{ &Z_Construct_UFunction_UFirestoreValue_BytesValue, "BytesValue" }, // 1440306507
		{ &Z_Construct_UFunction_UFirestoreValue_FloatValue, "FloatValue" }, // 3733167329
		{ &Z_Construct_UFunction_UFirestoreValue_GeoPointValue, "GeoPointValue" }, // 3678119697
		{ &Z_Construct_UFunction_UFirestoreValue_IntegerValue, "IntegerValue" }, // 123206592
		{ &Z_Construct_UFunction_UFirestoreValue_MapValue, "MapValue" }, // 976439700
		{ &Z_Construct_UFunction_UFirestoreValue_ReferenceValue, "ReferenceValue" }, // 1783429181
		{ &Z_Construct_UFunction_UFirestoreValue_StringValue, "StringValue" }, // 3661644672
		{ &Z_Construct_UFunction_UFirestoreValue_TimestampValue, "TimestampValue" }, // 497164297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirestoreValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreValue_Statics::ClassParams = {
		&UFirestoreValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirestoreValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirestoreValue, 1094212672);
	template<> FIREBASEHELPER_API UClass* StaticClass<UFirestoreValue>()
	{
		return UFirestoreValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirestoreValue(Z_Construct_UClass_UFirestoreValue, &UFirestoreValue::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("UFirestoreValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
