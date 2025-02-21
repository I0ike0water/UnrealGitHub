// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MR_V4_1_FileSend_generated_h
#error "FileSend.generated.h already included, missing '#pragma once' in FileSend.h"
#endif
#define MR_V4_1_FileSend_generated_h

#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendFileToServer);


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFileSend(); \
	friend struct Z_Construct_UClass_AFileSend_Statics; \
public: \
	DECLARE_CLASS(AFileSend, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MR_v4_1"), NO_API) \
	DECLARE_SERIALIZER(AFileSend)


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFileSend(AFileSend&&); \
	AFileSend(const AFileSend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFileSend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFileSend); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFileSend) \
	NO_API virtual ~AFileSend();


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_9_PROLOG
#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MR_V4_1_API UClass* StaticClass<class AFileSend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
