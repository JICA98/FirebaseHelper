// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirebaseAuthResult;
struct FRealtimeReadOptions;
struct FRealtimeWriteOptions;
#ifdef FIREBASEHELPER_FirebaseHelperBPLibrary_generated_h
#error "FirebaseHelperBPLibrary.generated.h already included, missing '#pragma once' in FirebaseHelperBPLibrary.h"
#endif
#define FIREBASEHELPER_FirebaseHelperBPLibrary_generated_h

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseAuthResult_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FFirebaseAuthResult>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuthError_Statics; \
	FIREBASEHELPER_API static class UScriptStruct* StaticStruct();


template<> FIREBASEHELPER_API UScriptStruct* StaticStruct<struct FAuthError>();

#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_52_DELEGATE \
struct _Script_FirebaseHelper_eventAuthOperationComplete_Parms \
{ \
	FFirebaseAuthResult AuthComplete; \
}; \
static inline void FAuthOperationComplete_DelegateWrapper(const FScriptDelegate& AuthOperationComplete, FFirebaseAuthResult AuthComplete) \
{ \
	_Script_FirebaseHelper_eventAuthOperationComplete_Parms Parms; \
	Parms.AuthComplete=AuthComplete; \
	AuthOperationComplete.ProcessDelegate<UObject>(&Parms); \
}


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_SPARSE_DATA
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInAnonymously); \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword); \
	DECLARE_FUNCTION(execSignUpWithEmailAndPassword); \
	DECLARE_FUNCTION(execExchangeRefreshToken); \
	DECLARE_FUNCTION(execExchangeCustomToken); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete); \
	DECLARE_FUNCTION(execSetupFirebase);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInAnonymously); \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword); \
	DECLARE_FUNCTION(execSignUpWithEmailAndPassword); \
	DECLARE_FUNCTION(execExchangeRefreshToken); \
	DECLARE_FUNCTION(execExchangeCustomToken); \
	DECLARE_FUNCTION(execRealtimeDatabaseListener); \
	DECLARE_FUNCTION(execRealtimeDatabaseRead); \
	DECLARE_FUNCTION(execRealtimeDatabaseWrite); \
	DECLARE_FUNCTION(execRealtimeDatabaseDelete); \
	DECLARE_FUNCTION(execSetupFirebase);


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseHelperBPLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseHelperBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseHelperBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseHelper"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseHelperBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseHelperBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseHelperBPLibrary(UFirebaseHelperBPLibrary&&); \
	NO_API UFirebaseHelperBPLibrary(const UFirebaseHelperBPLibrary&); \
public:


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseHelperBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseHelperBPLibrary(UFirebaseHelperBPLibrary&&); \
	NO_API UFirebaseHelperBPLibrary(const UFirebaseHelperBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseHelperBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseHelperBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseHelperBPLibrary)


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_PRIVATE_PROPERTY_OFFSET
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_54_PROLOG
#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_RPC_WRAPPERS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_INCLASS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_PRIVATE_PROPERTY_OFFSET \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_SPARSE_DATA \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_INCLASS_NO_PURE_DECLS \
	SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h_57_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FirebaseHelperBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEHELPER_API UClass* StaticClass<class UFirebaseHelperBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleProject_Plugins_FirebaseHelper_Source_FirebaseHelper_Public_FirebaseHelperBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
