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
 
struct FLatLng;
 struct FLatLng;
#ifdef FIREBASEHELPER_CloudFirestore_generated_h
#error "CloudFirestore.generated.h already included, missing '#pragma once' in CloudFirestore.h"
#endif
#define FIREBASEHELPER_CloudFirestore_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFireString_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFireString>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FErrorData_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FErrorData>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultipleDocuments_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FMultipleDocuments>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDocumentSnapshot_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FDocumentSnapshot>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_85_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_83_DELEGATE \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_RPC_WRAPPERS \
 \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCloudFirestore(); \
	friend struct Z_Construct_UClass_UCloudFirestore_Statics; \
public: \
	DECLARE_CLASS(UCloudFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UCloudFirestore)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUCloudFirestore(); \
	friend struct Z_Construct_UClass_UCloudFirestore_Statics; \
public: \
	DECLARE_CLASS(UCloudFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UCloudFirestore)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_STANDARD_CONSTRUCTORS \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_ENHANCED_CONSTRUCTORS \
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


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_88_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_CloudFirestore_h_91_ENHANCED_CONSTRUCTORS \
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
