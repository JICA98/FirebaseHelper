// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseHelper_init() {}
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature();
	FIREBASEHELPER_API UFunction* Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseHelper()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_AuthOperationComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_OAuthOperationComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_FetchProviderComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_SendPasswordResetComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_EventComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_UsersDataComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_OperationComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_GetDocumentResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_BatchDocumentsFetch__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_DeleteDocumentResult__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirebaseHelper_ListDocumentsResult__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirebaseHelper",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7788974,
				0xC4F70D8E,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
