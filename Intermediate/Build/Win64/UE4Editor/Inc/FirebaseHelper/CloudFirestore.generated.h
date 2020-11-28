// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultipleDocuments;
struct FErrorData;
struct FDocumentSnapshot;
struct FFireString;
struct FListOptions;
 
struct FGeoPoint;
 struct FGeoPoint;
#ifdef FIREBASEHELPER_CloudFirestore_generated_h
#error "CloudFirestore.generated.h already included, missing '#pragma once' in CloudFirestore.h"
#endif
#define FIREBASEHELPER_CloudFirestore_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FListOptions_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FListOptions>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFireString_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFireString>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FErrorData_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FErrorData>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultipleDocuments_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FMultipleDocuments>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDocumentSnapshot_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FDocumentSnapshot>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_111_DELEGATE \
struct _Script_FirebaseHelper_eventListDocumentsResult_Parms \
{ \
	FMultipleDocuments FoundDocuments; \
	FString NextPageToken; \
	bool WasSuccessful; \
	FErrorData ErrorData; \
}; \
static inline void FListDocumentsResult_DelegateWrapper(const FScriptDelegate& ListDocumentsResult, FMultipleDocuments FoundDocuments, const FString& NextPageToken, bool WasSuccessful, FErrorData ErrorData) \
{ \
	_Script_FirebaseHelper_eventListDocumentsResult_Parms Parms; \
	Parms.FoundDocuments=FoundDocuments; \
	Parms.NextPageToken=NextPageToken; \
	Parms.WasSuccessful=WasSuccessful ? true : false; \
	Parms.ErrorData=ErrorData; \
	ListDocumentsResult.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_109_DELEGATE \
struct _Script_FirebaseHelper_eventDeleteDocumentResult_Parms \
{ \
	FErrorData ErrorData; \
	bool WasSucessful; \
}; \
static inline void FDeleteDocumentResult_DelegateWrapper(const FScriptDelegate& DeleteDocumentResult, FErrorData ErrorData, bool WasSucessful) \
{ \
	_Script_FirebaseHelper_eventDeleteDocumentResult_Parms Parms; \
	Parms.ErrorData=ErrorData; \
	Parms.WasSucessful=WasSucessful ? true : false; \
	DeleteDocumentResult.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_107_DELEGATE \
struct _Script_FirebaseHelper_eventBatchDocumentsFetch_Parms \
{ \
	FMultipleDocuments FoundDocuments; \
	FString MissingDocuments; \
	bool WasSuccessfull; \
	FErrorData ErrorData; \
}; \
static inline void FBatchDocumentsFetch_DelegateWrapper(const FScriptDelegate& BatchDocumentsFetch, FMultipleDocuments FoundDocuments, const FString& MissingDocuments, bool WasSuccessfull, FErrorData ErrorData) \
{ \
	_Script_FirebaseHelper_eventBatchDocumentsFetch_Parms Parms; \
	Parms.FoundDocuments=FoundDocuments; \
	Parms.MissingDocuments=MissingDocuments; \
	Parms.WasSuccessfull=WasSuccessfull ? true : false; \
	Parms.ErrorData=ErrorData; \
	BatchDocumentsFetch.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_105_DELEGATE \
struct _Script_FirebaseHelper_eventGetDocumentResult_Parms \
{ \
	FDocumentSnapshot DocumentSnapshot; \
	bool WasSuccessfull; \
	FErrorData ErrorData; \
}; \
static inline void FGetDocumentResult_DelegateWrapper(const FScriptDelegate& GetDocumentResult, FDocumentSnapshot DocumentSnapshot, bool WasSuccessfull, FErrorData ErrorData) \
{ \
	_Script_FirebaseHelper_eventGetDocumentResult_Parms Parms; \
	Parms.DocumentSnapshot=DocumentSnapshot; \
	Parms.WasSuccessfull=WasSuccessfull ? true : false; \
	Parms.ErrorData=ErrorData; \
	GetDocumentResult.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateDocument); \
	DECLARE_FUNCTION(execListDocuments); \
	DECLARE_FUNCTION(execDeleteDocument); \
	DECLARE_FUNCTION(execCreateDocument); \
	DECLARE_FUNCTION(execGetMultipleDocumentsDifferent); \
	DECLARE_FUNCTION(execGetDocumentFirestoreString); \
	DECLARE_FUNCTION(execFirestoreStringFromJsonString); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromIntegerArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromNumberArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromStringArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromBoolArray); \
	DECLARE_FUNCTION(execFirestoreStringFromBool); \
	DECLARE_FUNCTION(execFirestoreStringFromString); \
	DECLARE_FUNCTION(execFirestoreStringFromNumber); \
	DECLARE_FUNCTION(execFirestoreStringFromInteger); \
	DECLARE_FUNCTION(execFirestoreStringFromGeoPointArray); \
	DECLARE_FUNCTION(execFirestoreStringFromGeoPointMap); \
	DECLARE_FUNCTION(execStringArrayToDocumentPath); \
	DECLARE_FUNCTION(execSetDataAsMapFirestore);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateDocument); \
	DECLARE_FUNCTION(execListDocuments); \
	DECLARE_FUNCTION(execDeleteDocument); \
	DECLARE_FUNCTION(execCreateDocument); \
	DECLARE_FUNCTION(execGetMultipleDocumentsDifferent); \
	DECLARE_FUNCTION(execGetDocumentFirestoreString); \
	DECLARE_FUNCTION(execFirestoreStringFromJsonString); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromIntegerArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromNumberArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromStringArray); \
	DECLARE_FUNCTION(execFirestoreStringFieldFromBoolArray); \
	DECLARE_FUNCTION(execFirestoreStringFromBool); \
	DECLARE_FUNCTION(execFirestoreStringFromString); \
	DECLARE_FUNCTION(execFirestoreStringFromNumber); \
	DECLARE_FUNCTION(execFirestoreStringFromInteger); \
	DECLARE_FUNCTION(execFirestoreStringFromGeoPointArray); \
	DECLARE_FUNCTION(execFirestoreStringFromGeoPointMap); \
	DECLARE_FUNCTION(execStringArrayToDocumentPath); \
	DECLARE_FUNCTION(execSetDataAsMapFirestore);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCloudFirestore(); \
	friend struct Z_Construct_UClass_UCloudFirestore_Statics; \
public: \
	DECLARE_CLASS(UCloudFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UCloudFirestore)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUCloudFirestore(); \
	friend struct Z_Construct_UClass_UCloudFirestore_Statics; \
public: \
	DECLARE_CLASS(UCloudFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UCloudFirestore)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudFirestore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudFirestore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudFirestore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudFirestore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudFirestore(UCloudFirestore&&); \
	NO_API UCloudFirestore(const UCloudFirestore&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudFirestore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudFirestore(UCloudFirestore&&); \
	NO_API UCloudFirestore(const UCloudFirestore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudFirestore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudFirestore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudFirestore)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_114_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_117_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CloudFirestore."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class UCloudFirestore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h


#define FOREACH_ENUM_EVALUETYPE(op) \
	op(BooleanValue) \
	op(IntegerValue) \
	op(DoubleValue) \
	op(TimestampValue) \
	op(StringValue) \
	op(BytesValue) \
	op(ReferenceValue) \
	op(GeoPointValue) \
	op(ArrayValue) \
	op(MapValue) 
#define FOREACH_ENUM_EORDERBY(op) \
	op(None) \
	op(Priority) \
	op(Desc) \
	op(Name) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
