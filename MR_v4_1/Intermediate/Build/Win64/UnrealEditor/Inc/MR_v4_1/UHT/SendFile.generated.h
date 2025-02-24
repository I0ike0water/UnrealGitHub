// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SendFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MR_V4_1_SendFile_generated_h
#error "SendFile.generated.h already included, missing '#pragma once' in SendFile.h"
#endif
#define MR_V4_1_SendFile_generated_h

#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendFileToServer);


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASendFile(); \
	friend struct Z_Construct_UClass_ASendFile_Statics; \
public: \
	DECLARE_CLASS(ASendFile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MR_v4_1"), NO_API) \
	DECLARE_SERIALIZER(ASendFile)


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASendFile(ASendFile&&); \
	ASendFile(const ASendFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASendFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASendFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASendFile) \
	NO_API virtual ~ASendFile();


#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_9_PROLOG
#define FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MR_V4_1_API UClass* StaticClass<class ASendFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
