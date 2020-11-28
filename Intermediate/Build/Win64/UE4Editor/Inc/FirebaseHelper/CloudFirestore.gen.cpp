// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseHelper/Public/CloudFirestore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudFirestore() {}
// Cross Module References
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FErrorData();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FMultipleDocuments();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentSnapshot();
	FIREBASEHELPER_API UEnum* Z_Construct_UEnum_FirebaseHelper_EValueType();
	FIREBASEHELPER_API UEnum* Z_Construct_UEnum_FirebaseHelper_EOrderBy();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FListOptions();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFireString();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FJsonValueB();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UCloudFirestore_NoRegister();
	FIREBASEHELPER_API UClass* Z_Construct_UClass_UCloudFirestore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASEHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoPoint();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventListDocumentsResult_Parms
		{
			FMultipleDocuments FoundDocuments;
			FString NextPageToken;
			bool WasSuccessful;
			FErrorData ErrorData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
		static void NewProp_WasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessful;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextPageToken;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoundDocuments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventListDocumentsResult_Parms, ErrorData), Z_Construct_UScriptStruct_FErrorData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_WasSuccessful_SetBit(void* Obj)
	{
		((_Script_FirebaseHelper_eventListDocumentsResult_Parms*)Obj)->WasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_WasSuccessful = { "WasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FirebaseHelper_eventListDocumentsResult_Parms), &Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_WasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_NextPageToken = { "NextPageToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventListDocumentsResult_Parms, NextPageToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_FoundDocuments = { "FoundDocuments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventListDocumentsResult_Parms, FoundDocuments), Z_Construct_UScriptStruct_FMultipleDocuments, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_WasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_NextPageToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::NewProp_FoundDocuments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "ListDocumentsResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventListDocumentsResult_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventDeleteDocumentResult_Parms
		{
			FErrorData ErrorData;
			bool WasSucessful;
		};
		static void NewProp_WasSucessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSucessful;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_WasSucessful_SetBit(void* Obj)
	{
		((_Script_FirebaseHelper_eventDeleteDocumentResult_Parms*)Obj)->WasSucessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_WasSucessful = { "WasSucessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FirebaseHelper_eventDeleteDocumentResult_Parms), &Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_WasSucessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventDeleteDocumentResult_Parms, ErrorData), Z_Construct_UScriptStruct_FErrorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_WasSucessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::NewProp_ErrorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "DeleteDocumentResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventDeleteDocumentResult_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventBatchDocumentsFetch_Parms
		{
			FMultipleDocuments FoundDocuments;
			FString MissingDocuments;
			bool WasSuccessfull;
			FErrorData ErrorData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
		static void NewProp_WasSuccessfull_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessfull;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MissingDocuments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoundDocuments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms, ErrorData), Z_Construct_UScriptStruct_FErrorData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_WasSuccessfull_SetBit(void* Obj)
	{
		((_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms*)Obj)->WasSuccessfull = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_WasSuccessfull = { "WasSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms), &Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_WasSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_MissingDocuments = { "MissingDocuments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms, MissingDocuments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_FoundDocuments = { "FoundDocuments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms, FoundDocuments), Z_Construct_UScriptStruct_FMultipleDocuments, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_WasSuccessfull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_MissingDocuments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::NewProp_FoundDocuments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "BatchDocumentsFetch__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics
	{
		struct _Script_FirebaseHelper_eventGetDocumentResult_Parms
		{
			FDocumentSnapshot DocumentSnapshot;
			bool WasSuccessfull;
			FErrorData ErrorData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorData;
		static void NewProp_WasSuccessfull_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasSuccessfull;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DocumentSnapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventGetDocumentResult_Parms, ErrorData), Z_Construct_UScriptStruct_FErrorData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_WasSuccessfull_SetBit(void* Obj)
	{
		((_Script_FirebaseHelper_eventGetDocumentResult_Parms*)Obj)->WasSuccessfull = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_WasSuccessfull = { "WasSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FirebaseHelper_eventGetDocumentResult_Parms), &Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_WasSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_DocumentSnapshot = { "DocumentSnapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseHelper_eventGetDocumentResult_Parms, DocumentSnapshot), Z_Construct_UScriptStruct_FDocumentSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_WasSuccessfull,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::NewProp_DocumentSnapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper, nullptr, "GetDocumentResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseHelper_eventGetDocumentResult_Parms), Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseHelper_EValueType, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("EValueType"));
		}
		return Singleton;
	}
	template<> FIREBASEHELPER_API UEnum* StaticEnum<EValueType>()
	{
		return EValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EValueType(EValueType_StaticEnum, TEXT("/Script/FirebaseHelper"), TEXT("EValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseHelper_EValueType_Hash() { return 4105084477U; }
	UEnum* Z_Construct_UEnum_FirebaseHelper_EValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EValueType"), 0, Get_Z_Construct_UEnum_FirebaseHelper_EValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BooleanValue", (int64)BooleanValue },
				{ "IntegerValue", (int64)IntegerValue },
				{ "DoubleValue", (int64)DoubleValue },
				{ "TimestampValue", (int64)TimestampValue },
				{ "StringValue", (int64)StringValue },
				{ "BytesValue", (int64)BytesValue },
				{ "ReferenceValue", (int64)ReferenceValue },
				{ "GeoPointValue", (int64)GeoPointValue },
				{ "ArrayValue", (int64)ArrayValue },
				{ "MapValue", (int64)MapValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArrayValue.Name", "ArrayValue" },
				{ "BlueprintType", "true" },
				{ "BooleanValue.Name", "BooleanValue" },
				{ "BytesValue.Name", "BytesValue" },
				{ "DoubleValue.Name", "DoubleValue" },
				{ "GeoPointValue.Name", "GeoPointValue" },
				{ "IntegerValue.Name", "IntegerValue" },
				{ "MapValue.Name", "MapValue" },
				{ "ModuleRelativePath", "Public/CloudFirestore.h" },
				{ "ReferenceValue.Name", "ReferenceValue" },
				{ "StringValue.Name", "StringValue" },
				{ "TimestampValue.Name", "TimestampValue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper,
				nullptr,
				"EValueType",
				"EValueType",
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
	static UEnum* EOrderBy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseHelper_EOrderBy, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("EOrderBy"));
		}
		return Singleton;
	}
	template<> FIREBASEHELPER_API UEnum* StaticEnum<EOrderBy>()
	{
		return EOrderBy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrderBy(EOrderBy_StaticEnum, TEXT("/Script/FirebaseHelper"), TEXT("EOrderBy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseHelper_EOrderBy_Hash() { return 3778457184U; }
	UEnum* Z_Construct_UEnum_FirebaseHelper_EOrderBy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrderBy"), 0, Get_Z_Construct_UEnum_FirebaseHelper_EOrderBy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Priority", (int64)Priority },
				{ "Desc", (int64)Desc },
				{ "Name", (int64)Name },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Desc.Name", "Desc" },
				{ "ModuleRelativePath", "Public/CloudFirestore.h" },
				{ "Name.Name", "Name" },
				{ "None.Name", "None" },
				{ "Priority.Name", "Priority" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseHelper,
				nullptr,
				"EOrderBy",
				"EOrderBy",
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
class UScriptStruct* FListOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FListOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FListOptions, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("ListOptions"), sizeof(FListOptions), Get_Z_Construct_UScriptStruct_FListOptions_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FListOptions>()
{
	return FListOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FListOptions(FListOptions::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("ListOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFListOptions
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFListOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ListOptions")),new UScriptStruct::TCppStructOps<FListOptions>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFListOptions;
	struct Z_Construct_UScriptStruct_FListOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMissing_MetaData[];
#endif
		static void NewProp_ShowMissing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMissing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PageToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FListOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FListOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing_MetaData[] = {
		{ "Category", "ListOptions" },
		{ "Comment", "//If the list should show missing documents. A missing document is a document that does not exist but has sub-documents. These documents will be returned with a key but will not have fields, Document.create_time, or Document.update_time set.\n//Requests with showMissing may not specify where or orderBy.\n" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "If the list should show missing documents. A missing document is a document that does not exist but has sub-documents. These documents will be returned with a key but will not have fields, Document.create_time, or Document.update_time set.\nRequests with showMissing may not specify where or orderBy." },
	};
#endif
	void Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing_SetBit(void* Obj)
	{
		((FListOptions*)Obj)->ShowMissing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing = { "ShowMissing", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FListOptions), &Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageToken_MetaData[] = {
		{ "Category", "ListOptions" },
		{ "Comment", "//The nextPageToken value returned from a previous List request, if any.\n" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "The nextPageToken value returned from a previous List request, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageToken = { "PageToken", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListOptions, PageToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageSize_MetaData[] = {
		{ "Category", "ListOptions" },
		{ "Comment", "//By Default Everything. The maximum number of documents to return.\n" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "By Default Everything. The maximum number of documents to return." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FListOptions, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FListOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_ShowMissing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListOptions_Statics::NewProp_PageSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FListOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"ListOptions",
		sizeof(FListOptions),
		alignof(FListOptions),
		Z_Construct_UScriptStruct_FListOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FListOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FListOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FListOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ListOptions"), sizeof(FListOptions), Get_Z_Construct_UScriptStruct_FListOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FListOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FListOptions_Hash() { return 2640580753U; }
class UScriptStruct* FFireString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFireString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFireString, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("FireString"), sizeof(FFireString), Get_Z_Construct_UScriptStruct_FFireString_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FFireString>()
{
	return FFireString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFireString(FFireString::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("FireString"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFFireString
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFFireString()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FireString")),new UScriptStruct::TCppStructOps<FFireString>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFFireString;
	struct Z_Construct_UScriptStruct_FFireString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A Basic Firestore Object\n" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "A Basic Firestore Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFireString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFireString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireString_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "FireString" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFireString_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFireString, Object), METADATA_PARAMS(Z_Construct_UScriptStruct_FFireString_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFireString_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFireString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFireString_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFireString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"FireString",
		sizeof(FFireString),
		alignof(FFireString),
		Z_Construct_UScriptStruct_FFireString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFireString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFireString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFireString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFireString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFireString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FireString"), sizeof(FFireString), Get_Z_Construct_UScriptStruct_FFireString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFireString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFireString_Hash() { return 3125977090U; }
class UScriptStruct* FErrorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FErrorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FErrorData, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("ErrorData"), sizeof(FErrorData), Get_Z_Construct_UScriptStruct_FErrorData_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FErrorData>()
{
	return FErrorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FErrorData(FErrorData::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("ErrorData"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFErrorData
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFErrorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ErrorData")),new UScriptStruct::TCppStructOps<FErrorData>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFErrorData;
	struct Z_Construct_UScriptStruct_FErrorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErrorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErrorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "ErrorData" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorData, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "ErrorData" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorData, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "ErrorData" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FErrorData, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErrorData_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErrorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"ErrorData",
		sizeof(FErrorData),
		alignof(FErrorData),
		Z_Construct_UScriptStruct_FErrorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FErrorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErrorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FErrorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FErrorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ErrorData"), sizeof(FErrorData), Get_Z_Construct_UScriptStruct_FErrorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FErrorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FErrorData_Hash() { return 1521706826U; }
class UScriptStruct* FMultipleDocuments::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FMultipleDocuments_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultipleDocuments, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("MultipleDocuments"), sizeof(FMultipleDocuments), Get_Z_Construct_UScriptStruct_FMultipleDocuments_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FMultipleDocuments>()
{
	return FMultipleDocuments::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultipleDocuments(FMultipleDocuments::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("MultipleDocuments"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFMultipleDocuments
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFMultipleDocuments()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MultipleDocuments")),new UScriptStruct::TCppStructOps<FMultipleDocuments>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFMultipleDocuments;
	struct Z_Construct_UScriptStruct_FMultipleDocuments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DocumentSnapshots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DocumentSnapshots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleDocuments_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultipleDocuments>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots_MetaData[] = {
		{ "Category", "MultipleDocuments" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots = { "DocumentSnapshots", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultipleDocuments, DocumentSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots_Inner = { "DocumentSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDocumentSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultipleDocuments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultipleDocuments_Statics::NewProp_DocumentSnapshots_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultipleDocuments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"MultipleDocuments",
		sizeof(FMultipleDocuments),
		alignof(FMultipleDocuments),
		Z_Construct_UScriptStruct_FMultipleDocuments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleDocuments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultipleDocuments_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultipleDocuments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultipleDocuments()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultipleDocuments_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultipleDocuments"), sizeof(FMultipleDocuments), Get_Z_Construct_UScriptStruct_FMultipleDocuments_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultipleDocuments_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultipleDocuments_Hash() { return 407559449U; }
class UScriptStruct* FDocumentSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEHELPER_API uint32 Get_Z_Construct_UScriptStruct_FDocumentSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocumentSnapshot, Z_Construct_UPackage__Script_FirebaseHelper(), TEXT("DocumentSnapshot"), sizeof(FDocumentSnapshot), Get_Z_Construct_UScriptStruct_FDocumentSnapshot_Hash());
	}
	return Singleton;
}
template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<FDocumentSnapshot>()
{
	return FDocumentSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDocumentSnapshot(FDocumentSnapshot::StaticStruct, TEXT("/Script/FirebaseHelper"), TEXT("DocumentSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseHelper_StaticRegisterNativesFDocumentSnapshot
{
	FScriptStruct_FirebaseHelper_StaticRegisterNativesFDocumentSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DocumentSnapshot")),new UScriptStruct::TCppStructOps<FDocumentSnapshot>);
	}
} ScriptStruct_FirebaseHelper_StaticRegisterNativesFDocumentSnapshot;
	struct Z_Construct_UScriptStruct_FDocumentSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fields;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fields_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A Firestore document.        Must not exceed 1 MiB - 4 bytes.\n" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "A Firestore document.        Must not exceed 1 MiB - 4 bytes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocumentSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "Category", "DocumentSnapshot" },
		{ "Comment", "/*\n    Output only. The time at which the document was last changed.\n    This value is initially set to the createTime then increases monotonically with each change to the document. It can also be compared to values from other documents and the readTime of a query.\n    A timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\".\n     */" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Output only. The time at which the document was last changed.\nThis value is initially set to the createTime then increases monotonically with each change to the document. It can also be compared to values from other documents and the readTime of a query.\nA timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_UpdateTime = { "UpdateTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentSnapshot, UpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_UpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_CreateTime_MetaData[] = {
		{ "Category", "DocumentSnapshot" },
		{ "Comment", "/*\n    Output only. The time at which the document was created.\n    This value increases monotonically when a document is deleted then recreated. It can also be compared to values from other documents and the readTime of a query.\n    A timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\".\n     */" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Output only. The time at which the document was created.\nThis value increases monotonically when a document is deleted then recreated. It can also be compared to values from other documents and the readTime of a query.\nA timestamp in RFC3339 UTC \"Zulu\" format, with nanosecond resolution and up to nine fractional digits. Examples: \"2014-10-02T15:01:23Z\" and \"2014-10-02T15:01:23.045123456Z\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_CreateTime = { "CreateTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentSnapshot, CreateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_CreateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_CreateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_MetaData[] = {
		{ "Category", "DocumentSnapshot" },
		{ "Comment", "/*\n    Map (key: string, value: object (Value))\n    The map's fields.\n    The map keys represent field names. Field names matching the regular expression __.*__ are reserved. Reserved field names are forbidden except in certain documented contexts. The map keys, represented as UTF-8, must not exceed 1,500 bytes and cannot be empty.\n    An object containing a list of \"key\": value pairs. Example: { \"name\": \"wrench\", \"mass\": \"1.3kg\", \"count\": \"3\" }.\n     */" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Map (key: string, value: object (Value))\nThe map's fields.\nThe map keys represent field names. Field names matching the regular expression __.*__ are reserved. Reserved field names are forbidden except in certain documented contexts. The map keys, represented as UTF-8, must not exceed 1,500 bytes and cannot be empty.\nAn object containing a list of \"key\": value pairs. Example: { \"name\": \"wrench\", \"mass\": \"1.3kg\", \"count\": \"3\" }." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentSnapshot, Fields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FJsonValueB, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_ResourceName_MetaData[] = {
		{ "Category", "DocumentSnapshot" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentSnapshot, ResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_ResourceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_UpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_CreateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_Fields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::NewProp_ResourceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
		nullptr,
		&NewStructOps,
		"DocumentSnapshot",
		sizeof(FDocumentSnapshot),
		alignof(FDocumentSnapshot),
		Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDocumentSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDocumentSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DocumentSnapshot"), sizeof(FDocumentSnapshot), Get_Z_Construct_UScriptStruct_FDocumentSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDocumentSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDocumentSnapshot_Hash() { return 4060436302U; }
	DEFINE_FUNCTION(UCloudFirestore::execUpdateDocument)
	{
		P_GET_STRUCT(FFireString,Z_Param_FirestoreData);
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DocumentId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_FieldsToReturn);
		P_GET_TARRAY(FString,Z_Param_FieldsToUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::UpdateDocument(Z_Param_FirestoreData,Z_Param_CollectionPath,Z_Param_DocumentId,FGetDocumentResult(Z_Param_ResultCallback),Z_Param_FieldsToReturn,Z_Param_FieldsToUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execListDocuments)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionPath);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_FieldsToReturn);
		P_GET_STRUCT(FListOptions,Z_Param_ListOptions);
		P_GET_PROPERTY(FByteProperty,Z_Param_OrderBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::ListDocuments(Z_Param_CollectionPath,FListDocumentsResult(Z_Param_ResultCallback),Z_Param_FieldsToReturn,Z_Param_ListOptions,EOrderBy(Z_Param_OrderBy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execDeleteDocument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DocumentPath);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::DeleteDocument(Z_Param_DocumentPath,FDeleteDocumentResult(Z_Param_ResultCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execCreateDocument)
	{
		P_GET_STRUCT(FFireString,Z_Param_FirestoreData);
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionPath);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_FieldsToReturn);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalDocumentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::CreateDocument(Z_Param_FirestoreData,Z_Param_CollectionPath,FGetDocumentResult(Z_Param_ResultCallback),Z_Param_FieldsToReturn,Z_Param_OptionalDocumentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execGetMultipleDocumentsDifferent)
	{
		P_GET_TARRAY(FString,Z_Param_DocumentPaths);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_FieldsToReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::GetMultipleDocumentsDifferent(Z_Param_DocumentPaths,FBatchDocumentsFetch(Z_Param_ResultCallback),Z_Param_FieldsToReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execGetDocumentFirestoreString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DocumentPath);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultCallback);
		P_GET_TARRAY(FString,Z_Param_FieldsToReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCloudFirestore::GetDocumentFirestoreString(Z_Param_DocumentPath,FGetDocumentResult(Z_Param_ResultCallback),Z_Param_FieldsToReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromJsonString)
	{
		P_GET_TARRAY(FFireString,Z_Param_Children);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromJsonString(Z_Param_Children);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFieldFromIntegerArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(int32,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFieldFromIntegerArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFieldFromNumberArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(float,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFieldFromNumberArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFieldFromStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFieldFromStringArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFieldFromBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(bool,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFieldFromBoolArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromBool)
	{
		P_GET_TMAP(FString,bool,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromBool(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromString)
	{
		P_GET_TMAP(FString,FString,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromString(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromNumber)
	{
		P_GET_TMAP(FString,float,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromNumber(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromInteger)
	{
		P_GET_TMAP(FString,int32,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromInteger(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromGeoPointArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FGeoPoint,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromGeoPointArray(Z_Param_Key,Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execFirestoreStringFromGeoPointMap)
	{
		P_GET_TMAP(FString,FGeoPoint,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::FirestoreStringFromGeoPointMap(Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execStringArrayToDocumentPath)
	{
		P_GET_TARRAY(FString,Z_Param_DocumentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCloudFirestore::StringArrayToDocumentPath(Z_Param_DocumentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudFirestore::execSetDataAsMapFirestore)
	{
		P_GET_STRUCT(FFireString,Z_Param_FirestoreString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFireString*)Z_Param__Result=UCloudFirestore::SetDataAsMapFirestore(Z_Param_FirestoreString,Z_Param_Key);
		P_NATIVE_END;
	}
	void UCloudFirestore::StaticRegisterNativesUCloudFirestore()
	{
		UClass* Class = UCloudFirestore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDocument", &UCloudFirestore::execCreateDocument },
			{ "DeleteDocument", &UCloudFirestore::execDeleteDocument },
			{ "FirestoreStringFieldFromBoolArray", &UCloudFirestore::execFirestoreStringFieldFromBoolArray },
			{ "FirestoreStringFieldFromIntegerArray", &UCloudFirestore::execFirestoreStringFieldFromIntegerArray },
			{ "FirestoreStringFieldFromNumberArray", &UCloudFirestore::execFirestoreStringFieldFromNumberArray },
			{ "FirestoreStringFieldFromStringArray", &UCloudFirestore::execFirestoreStringFieldFromStringArray },
			{ "FirestoreStringFromBool", &UCloudFirestore::execFirestoreStringFromBool },
			{ "FirestoreStringFromGeoPointArray", &UCloudFirestore::execFirestoreStringFromGeoPointArray },
			{ "FirestoreStringFromGeoPointMap", &UCloudFirestore::execFirestoreStringFromGeoPointMap },
			{ "FirestoreStringFromInteger", &UCloudFirestore::execFirestoreStringFromInteger },
			{ "FirestoreStringFromJsonString", &UCloudFirestore::execFirestoreStringFromJsonString },
			{ "FirestoreStringFromNumber", &UCloudFirestore::execFirestoreStringFromNumber },
			{ "FirestoreStringFromString", &UCloudFirestore::execFirestoreStringFromString },
			{ "GetDocumentFirestoreString", &UCloudFirestore::execGetDocumentFirestoreString },
			{ "GetMultipleDocumentsDifferent", &UCloudFirestore::execGetMultipleDocumentsDifferent },
			{ "ListDocuments", &UCloudFirestore::execListDocuments },
			{ "SetDataAsMapFirestore", &UCloudFirestore::execSetDataAsMapFirestore },
			{ "StringArrayToDocumentPath", &UCloudFirestore::execStringArrayToDocumentPath },
			{ "UpdateDocument", &UCloudFirestore::execUpdateDocument },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics
	{
		struct CloudFirestore_eventCreateDocument_Parms
		{
			FFireString FirestoreData;
			FString CollectionPath;
			FScriptDelegate ResultCallback;
			TArray<FString> FieldsToReturn;
			FString OptionalDocumentId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalDocumentId;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToReturn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToReturn_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirestoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_OptionalDocumentId = { "OptionalDocumentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventCreateDocument_Parms, OptionalDocumentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FieldsToReturn = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventCreateDocument_Parms, FieldsToReturn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FieldsToReturn_Inner = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventCreateDocument_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_CollectionPath = { "CollectionPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventCreateDocument_Parms, CollectionPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FirestoreData = { "FirestoreData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventCreateDocument_Parms, FirestoreData), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_OptionalDocumentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FieldsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FieldsToReturn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_CollectionPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::NewProp_FirestoreData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FieldsToReturn" },
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Creates a new Firestore document.\n" },
		{ "CPP_Default_OptionalDocumentId", "" },
		{ "DisplayName", "Create Document Firestore" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Creates a new Firestore document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "CreateDocument", nullptr, nullptr, sizeof(CloudFirestore_eventCreateDocument_Parms), Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_CreateDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_CreateDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics
	{
		struct CloudFirestore_eventDeleteDocument_Parms
		{
			FString DocumentPath;
			FScriptDelegate ResultCallback;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventDeleteDocument_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::NewProp_DocumentPath = { "DocumentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventDeleteDocument_Parms, DocumentPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::NewProp_DocumentPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Deletes a document.\n" },
		{ "DisplayName", "Delete Document Firestore" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Deletes a document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "DeleteDocument", nullptr, nullptr, sizeof(CloudFirestore_eventDeleteDocument_Parms), Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_DeleteDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_DeleteDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics
	{
		struct CloudFirestore_eventFirestoreStringFieldFromBoolArray_Parms
		{
			FString Key;
			TArray<bool> Array;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromBoolArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromBoolArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromBoolArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Boolean Array to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFieldFromBoolArray", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFieldFromBoolArray_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics
	{
		struct CloudFirestore_eventFirestoreStringFieldFromIntegerArray_Parms
		{
			FString Key;
			TArray<int32> Array;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromIntegerArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromIntegerArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromIntegerArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Integer Array to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFieldFromIntegerArray", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFieldFromIntegerArray_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics
	{
		struct CloudFirestore_eventFirestoreStringFieldFromNumberArray_Parms
		{
			FString Key;
			TArray<float> Array;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromNumberArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromNumberArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromNumberArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Float Array to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFieldFromNumberArray", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFieldFromNumberArray_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics
	{
		struct CloudFirestore_eventFirestoreStringFieldFromStringArray_Parms
		{
			FString Key;
			TArray<FString> Array;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromStringArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromStringArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFieldFromStringArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "String Array to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFieldFromStringArray", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFieldFromStringArray_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromBool_Parms
		{
			TMap<FString,bool> Map;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromBool_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Boolean Map to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromBool", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromBool_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromGeoPointArray_Parms
		{
			FString Key;
			TArray<FGeoPoint> Array;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromGeoPointArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromGeoPointArray_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeoPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromGeoPointArray_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "GeoPointArray to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromGeoPointArray", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromGeoPointArray_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromGeoPointMap_Parms
		{
			TMap<FString,FGeoPoint> Map;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromGeoPointMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromGeoPointMap_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGeoPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "GeoPointMap to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromGeoPointMap", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromGeoPointMap_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromInteger_Parms
		{
			TMap<FString,int32> Map;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromInteger_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Integer Map to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromInteger", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromInteger_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromJsonString_Parms
		{
			TArray<FFireString> Children;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromJsonString_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromJsonString_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::NewProp_Children_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Combine FFireString to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromJsonString", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromJsonString_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromNumber_Parms
		{
			TMap<FString,float> Map;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromNumber_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "Float Map to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromNumber", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromNumber_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics
	{
		struct CloudFirestore_eventFirestoreStringFromString_Parms
		{
			TMap<FString,FString> Map;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventFirestoreStringFromString_Parms, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::NewProp_Map_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestoreHelper" },
		{ "DisplayName", "String Map to FireString" },
		{ "Keywords", "Firebase Helper" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "FirestoreStringFromString", nullptr, nullptr, sizeof(CloudFirestore_eventFirestoreStringFromString_Parms), Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics
	{
		struct CloudFirestore_eventGetDocumentFirestoreString_Parms
		{
			FString DocumentPath;
			FScriptDelegate ResultCallback;
			TArray<FString> FieldsToReturn;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToReturn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToReturn_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_FieldsToReturn = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetDocumentFirestoreString_Parms, FieldsToReturn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_FieldsToReturn_Inner = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetDocumentFirestoreString_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_DocumentPath = { "DocumentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetDocumentFirestoreString_Parms, DocumentPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_FieldsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_FieldsToReturn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::NewProp_DocumentPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FieldsToReturn" },
		{ "Category", "CloudFirestore" },
		{ "Comment", "/*\n    * CloudFirestore Core Methods\n    *///Gets a single document.\n" },
		{ "DisplayName", "Get Document (String Path)" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "* CloudFirestore Core Methods\n//Gets a single document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "GetDocumentFirestoreString", nullptr, nullptr, sizeof(CloudFirestore_eventGetDocumentFirestoreString_Parms), Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics
	{
		struct CloudFirestore_eventGetMultipleDocumentsDifferent_Parms
		{
			TArray<FString> DocumentPaths;
			FScriptDelegate ResultCallback;
			TArray<FString> FieldsToReturn;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToReturn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToReturn_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DocumentPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_FieldsToReturn = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetMultipleDocumentsDifferent_Parms, FieldsToReturn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_FieldsToReturn_Inner = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetMultipleDocumentsDifferent_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_DocumentPaths = { "DocumentPaths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventGetMultipleDocumentsDifferent_Parms, DocumentPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_DocumentPaths_Inner = { "DocumentPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_FieldsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_FieldsToReturn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_DocumentPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::NewProp_DocumentPaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FieldsToReturn" },
		{ "Category", "CloudFirestore" },
		{ "Comment", "/*\n    Gets multiple documents. Documents returned by this method are not guaranteed to be returned in the same order that they were requested.\n    */" },
		{ "DisplayName", "Get Multiple Documents (Multiple Paths)" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Gets multiple documents. Documents returned by this method are not guaranteed to be returned in the same order that they were requested." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "GetMultipleDocumentsDifferent", nullptr, nullptr, sizeof(CloudFirestore_eventGetMultipleDocumentsDifferent_Parms), Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics
	{
		struct CloudFirestore_eventListDocuments_Parms
		{
			FString CollectionPath;
			FScriptDelegate ResultCallback;
			TArray<FString> FieldsToReturn;
			FListOptions ListOptions;
			TEnumAsByte<EOrderBy> OrderBy;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrderBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListOptions;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToReturn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToReturn_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventListDocuments_Parms, OrderBy), Z_Construct_UEnum_FirebaseHelper_EOrderBy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_ListOptions = { "ListOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventListDocuments_Parms, ListOptions), Z_Construct_UScriptStruct_FListOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_FieldsToReturn = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventListDocuments_Parms, FieldsToReturn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_FieldsToReturn_Inner = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventListDocuments_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_CollectionPath = { "CollectionPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventListDocuments_Parms, CollectionPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_OrderBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_ListOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_FieldsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_FieldsToReturn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::NewProp_CollectionPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ListOptions" },
		{ "Category", "CloudFirestore" },
		{ "Comment", "//List Documents in a Collection\n" },
		{ "CPP_Default_OrderBy", "None" },
		{ "DisplayName", "List Documents Firestore" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "List Documents in a Collection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "ListDocuments", nullptr, nullptr, sizeof(CloudFirestore_eventListDocuments_Parms), Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_ListDocuments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_ListDocuments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics
	{
		struct CloudFirestore_eventSetDataAsMapFirestore_Parms
		{
			FFireString FirestoreString;
			FString Key;
			FFireString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirestoreString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventSetDataAsMapFirestore_Parms, ReturnValue), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventSetDataAsMapFirestore_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_FirestoreString = { "FirestoreString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventSetDataAsMapFirestore_Parms, FirestoreString), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::NewProp_FirestoreString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "Comment", "/*\n    * CloudFirestore Helper Methods\n    */" },
		{ "DisplayName", "SetData as Map" },
		{ "Keywords", "Cloud Firestore Document Path" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "* CloudFirestore Helper Methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "SetDataAsMapFirestore", nullptr, nullptr, sizeof(CloudFirestore_eventSetDataAsMapFirestore_Parms), Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics
	{
		struct CloudFirestore_eventStringArrayToDocumentPath_Parms
		{
			TArray<FString> DocumentPath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DocumentPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventStringArrayToDocumentPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_DocumentPath = { "DocumentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventStringArrayToDocumentPath_Parms, DocumentPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_DocumentPath_Inner = { "DocumentPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_DocumentPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::NewProp_DocumentPath_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "CloudFirestore" },
		{ "DisplayName", "StringArray to DocumentPath" },
		{ "Keywords", "Cloud Firestore Document Path" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "StringArrayToDocumentPath", nullptr, nullptr, sizeof(CloudFirestore_eventStringArrayToDocumentPath_Parms), Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics
	{
		struct CloudFirestore_eventUpdateDocument_Parms
		{
			FFireString FirestoreData;
			FString CollectionPath;
			FString DocumentId;
			FScriptDelegate ResultCallback;
			TArray<FString> FieldsToReturn;
			TArray<FString> FieldsToUpdate;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToUpdate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToUpdate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FieldsToReturn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldsToReturn_Inner;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirestoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToUpdate = { "FieldsToUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, FieldsToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToUpdate_Inner = { "FieldsToUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToReturn = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, FieldsToReturn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToReturn_Inner = { "FieldsToReturn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_ResultCallback = { "ResultCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, ResultCallback), Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_DocumentId = { "DocumentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, DocumentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_CollectionPath = { "CollectionPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, CollectionPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FirestoreData = { "FirestoreData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CloudFirestore_eventUpdateDocument_Parms, FirestoreData), Z_Construct_UScriptStruct_FFireString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FieldsToReturn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_ResultCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_DocumentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_CollectionPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::NewProp_FirestoreData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FieldsToReturn" },
		{ "Category", "CloudFirestore" },
		{ "Comment", "//Updates/Inserts a Firestore document.\n" },
		{ "DisplayName", "Updates/Inserts Firestore Document" },
		{ "Keywords", "Cloud Firestore Document" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
		{ "ToolTip", "Updates/Inserts a Firestore document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudFirestore, nullptr, "UpdateDocument", nullptr, nullptr, sizeof(CloudFirestore_eventUpdateDocument_Parms), Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudFirestore_UpdateDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCloudFirestore_UpdateDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCloudFirestore_NoRegister()
	{
		return UCloudFirestore::StaticClass();
	}
	struct Z_Construct_UClass_UCloudFirestore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCloudFirestore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCloudFirestore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCloudFirestore_CreateDocument, "CreateDocument" }, // 3137575360
		{ &Z_Construct_UFunction_UCloudFirestore_DeleteDocument, "DeleteDocument" }, // 2503302579
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromBoolArray, "FirestoreStringFieldFromBoolArray" }, // 3215656036
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromIntegerArray, "FirestoreStringFieldFromIntegerArray" }, // 1725774851
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromNumberArray, "FirestoreStringFieldFromNumberArray" }, // 1907600739
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFieldFromStringArray, "FirestoreStringFieldFromStringArray" }, // 1663977921
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromBool, "FirestoreStringFromBool" }, // 1705034243
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointArray, "FirestoreStringFromGeoPointArray" }, // 1257451588
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromGeoPointMap, "FirestoreStringFromGeoPointMap" }, // 3473811940
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromInteger, "FirestoreStringFromInteger" }, // 2119249220
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromJsonString, "FirestoreStringFromJsonString" }, // 4096630679
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromNumber, "FirestoreStringFromNumber" }, // 1314260032
		{ &Z_Construct_UFunction_UCloudFirestore_FirestoreStringFromString, "FirestoreStringFromString" }, // 858248722
		{ &Z_Construct_UFunction_UCloudFirestore_GetDocumentFirestoreString, "GetDocumentFirestoreString" }, // 3295523482
		{ &Z_Construct_UFunction_UCloudFirestore_GetMultipleDocumentsDifferent, "GetMultipleDocumentsDifferent" }, // 4216930662
		{ &Z_Construct_UFunction_UCloudFirestore_ListDocuments, "ListDocuments" }, // 113416297
		{ &Z_Construct_UFunction_UCloudFirestore_SetDataAsMapFirestore, "SetDataAsMapFirestore" }, // 1968238258
		{ &Z_Construct_UFunction_UCloudFirestore_StringArrayToDocumentPath, "StringArrayToDocumentPath" }, // 1904298415
		{ &Z_Construct_UFunction_UCloudFirestore_UpdateDocument, "UpdateDocument" }, // 298915021
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudFirestore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CloudFirestore.h" },
		{ "ModuleRelativePath", "Public/CloudFirestore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCloudFirestore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudFirestore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCloudFirestore_Statics::ClassParams = {
		&UCloudFirestore::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCloudFirestore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCloudFirestore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCloudFirestore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCloudFirestore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCloudFirestore, 1926603798);
	template<> FIREBASEHELPER_API UClass* StaticClass<UCloudFirestore>()
	{
		return UCloudFirestore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCloudFirestore(Z_Construct_UClass_UCloudFirestore, &UCloudFirestore::StaticClass, TEXT("/Script/FirebaseHelper"), TEXT("UCloudFirestore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudFirestore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
