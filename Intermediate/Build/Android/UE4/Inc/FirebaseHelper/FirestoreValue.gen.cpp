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
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FJsonValueB();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoPoint();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirestoreValue_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UFirestoreValue();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FJsonValueB::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FJsonValueB_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonValueB, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("JsonValueB"), sizeof(FJsonValueB), Get_Z_Construct_UScriptStruct_FJsonValueB_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FJsonValueB>()
{
	return FJsonValueB::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonValueB(FJsonValueB::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("JsonValueB"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFJsonValueB
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFJsonValueB()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonValueB")),new UScriptStruct::TCppStructOps<FJsonValueB>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFJsonValueB;
	struct Z_Construct_UScriptStruct_FJsonValueB_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonValueB_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonValueB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonValueB>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonValueB_Statics::NewProp_FieldType_MetaData[] = {
		{ "Category", "JsonValueB" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonValueB_Statics::NewProp_FieldType = { "FieldType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonValueB, FieldType), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonValueB_Statics::NewProp_FieldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonValueB_Statics::NewProp_FieldType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonValueB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonValueB_Statics::NewProp_FieldType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonValueB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"JsonValueB",
		sizeof(FJsonValueB),
		alignof(FJsonValueB),
		Z_Construct_UScriptStruct_FJsonValueB_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonValueB_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonValueB_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonValueB_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonValueB()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonValueB_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonValueB"), sizeof(FJsonValueB), Get_Z_Construct_UScriptStruct_FJsonValueB_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJsonValueB_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonValueB_Hash() { return 2209148777U; }
class UScriptStruct* FGeoPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FGeoPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoPoint, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("GeoPoint"), sizeof(FGeoPoint), Get_Z_Construct_UScriptStruct_FGeoPoint_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FGeoPoint>()
{
	return FGeoPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeoPoint(FGeoPoint::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("GeoPoint"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFGeoPoint
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFGeoPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeoPoint")),new UScriptStruct::TCppStructOps<FGeoPoint>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFGeoPoint;
	struct Z_Construct_UScriptStruct_FGeoPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n An object representing a latitude/longitude pair.\n This is expressed as a pair of doubles representing degrees latitude and degrees longitude.\n Unless specified otherwise, this must conform to the WGS84 standard. Values must be within normalized ranges.\n */" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "An object representing a latitude/longitude pair.\nThis is expressed as a pair of doubles representing degrees latitude and degrees longitude.\nUnless specified otherwise, this must conform to the WGS84 standard. Values must be within normalized ranges." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeoPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "GeoPoint" },
		{ "Comment", "//The latitude in degrees. It must be in the range [-90.0, +90.0].\n" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
		{ "ToolTip", "The latitude in degrees. It must be in the range [-90.0, +90.0]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeoPoint, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "GeoPoint" },
		{ "ModuleRelativePath", "Public/FirestoreValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeoPoint, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Latitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoPoint_Statics::NewProp_Latitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"GeoPoint",
		sizeof(FGeoPoint),
		alignof(FGeoPoint),
		Z_Construct_UScriptStruct_FGeoPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeoPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeoPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeoPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeoPoint"), sizeof(FGeoPoint), Get_Z_Construct_UScriptStruct_FGeoPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeoPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeoPoint_Hash() { return 3363496584U; }
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
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventArrayValue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventArrayValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ArrayValue_Statics::NewProp_Value,
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirestoreValue_eventBooleanValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirestoreValue_eventBooleanValue_Parms), &Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBooleanValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BooleanValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBytesValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventBytesValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_BytesValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventFloatValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_FloatValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventGeoPointValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeoPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventGeoPointValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_GeoPointValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventIntegerValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventIntegerValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_IntegerValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventMapValue_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventMapValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_MapValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventReferenceValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventReferenceValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_ReferenceValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventStringValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_StringValue_Statics::NewProp_Value,
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventTimestampValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreValue_eventTimestampValue_Parms, Value), Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreValue_TimestampValue_Statics::NewProp_Value,
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
		{ &Z_Construct_UFunction_UFirestoreValue_ArrayValue, "ArrayValue" }, // 2282396496
		{ &Z_Construct_UFunction_UFirestoreValue_BooleanValue, "BooleanValue" }, // 896709540
		{ &Z_Construct_UFunction_UFirestoreValue_BytesValue, "BytesValue" }, // 48512686
		{ &Z_Construct_UFunction_UFirestoreValue_FloatValue, "FloatValue" }, // 1958761227
		{ &Z_Construct_UFunction_UFirestoreValue_GeoPointValue, "GeoPointValue" }, // 2422481560
		{ &Z_Construct_UFunction_UFirestoreValue_IntegerValue, "IntegerValue" }, // 2481107086
		{ &Z_Construct_UFunction_UFirestoreValue_MapValue, "MapValue" }, // 275414147
		{ &Z_Construct_UFunction_UFirestoreValue_ReferenceValue, "ReferenceValue" }, // 4073311038
		{ &Z_Construct_UFunction_UFirestoreValue_StringValue, "StringValue" }, // 1516131529
		{ &Z_Construct_UFunction_UFirestoreValue_TimestampValue, "TimestampValue" }, // 2506413398
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
	IMPLEMENT_CLASS(UFirestoreValue, 2963165920);
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
