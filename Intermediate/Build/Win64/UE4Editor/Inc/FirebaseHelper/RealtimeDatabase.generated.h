// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirebaseData;
struct FRealtimeValue;
 struct FRealtimeValue;
struct FRealtimeReadOptions;
struct FRealtimeWriteOptions;
#ifdef FIREBASEHELPER_RealtimeDatabase_generated_h
#error "RealtimeDatabase.generated.h already included, missing '#pragma once' in RealtimeDatabase.h"
#endif
#define FIREBASEHELPER_RealtimeDatabase_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeWriteOptions_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeWriteOptions>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeReadOptions_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeReadOptions>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseData_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseData>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRealtimeValue_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FRealtimeValue>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_85_DELEGATE \
struct _Script_FirebaseHelper_eventOperationComplete_Parms \
{ \
	FFirebaseData ResultCallback; \
}; \
static inline void FOperationComplete_DelegateWrapper(const FScriptDelegate& OperationComplete, FFirebaseData ResultCallback) \
{ \
	_Script_FirebaseHelper_eventOperationComplete_Parms Parms; \
	Parms.ResultCallback=ResultCallback; \
	OperationComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsRealtimeObject); \
	DECLARE_FUNCTION(execAsRealtimeArray); \
	DECLARE_FUNCTION(execAsRealtimeBool); \
	DECLARE_FUNCTION(execAsRealtimeString); \
	DECLARE_FUNCTION(execAsRealtimeNumber); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsRealtimeObject); \
	DECLARE_FUNCTION(execAsRealtimeArray); \
	DECLARE_FUNCTION(execAsRealtimeBool); \
	DECLARE_FUNCTION(execAsRealtimeString); \
	DECLARE_FUNCTION(execAsRealtimeNumber); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeDatabase(); \
	friend struct Z_Construct_UClass_URealtimeDatabase_Statics; \
public: \
	DECLARE_CLASS(URealtimeDatabase, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(URealtimeDatabase)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_INCLASS \
private: \
	static void StaticRegisterNativesURealtimeDatabase(); \
	friend struct Z_Construct_UClass_URealtimeDatabase_Statics; \
public: \
	DECLARE_CLASS(URealtimeDatabase, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(URealtimeDatabase)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtimeDatabase(URealtimeDatabase&&); \
	NO_API URealtimeDatabase(const URealtimeDatabase&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtimeDatabase(URealtimeDatabase&&); \
	NO_API URealtimeDatabase(const URealtimeDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeDatabase)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_87_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h_91_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RealtimeDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class URealtimeDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_RealtimeDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
