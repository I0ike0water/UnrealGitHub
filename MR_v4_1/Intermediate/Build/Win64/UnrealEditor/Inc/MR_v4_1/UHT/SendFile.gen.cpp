// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MR_v4_1/Public/SendFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MR_V4_1_API UClass* Z_Construct_UClass_ASendFile();
MR_V4_1_API UClass* Z_Construct_UClass_ASendFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_MR_v4_1();
// End Cross Module References

// Begin Class ASendFile Function SendFileToServer
struct Z_Construct_UFunction_ASendFile_SendFileToServer_Statics
{
	struct SendFile_eventSendFileToServer_Parms
	{
		FString ServerIP;
		int32 ServerPort;
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileTransfer" },
		{ "ModuleRelativePath", "Public/SendFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFile_eventSendFileToServer_Parms, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFile_eventSendFileToServer_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SendFile_eventSendFileToServer_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASendFile, nullptr, "SendFileToServer", nullptr, nullptr, Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::SendFile_eventSendFileToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::SendFile_eventSendFileToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASendFile_SendFileToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASendFile_SendFileToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASendFile::execSendFileToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendFileToServer(Z_Param_ServerIP,Z_Param_ServerPort,Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class ASendFile Function SendFileToServer

// Begin Class ASendFile
void ASendFile::StaticRegisterNativesASendFile()
{
	UClass* Class = ASendFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendFileToServer", &ASendFile::execSendFileToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASendFile);
UClass* Z_Construct_UClass_ASendFile_NoRegister()
{
	return ASendFile::StaticClass();
}
struct Z_Construct_UClass_ASendFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SendFile.h" },
		{ "ModuleRelativePath", "Public/SendFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalResult_MetaData[] = {
		{ "Category", "File Transfer" },
		{ "ModuleRelativePath", "Public/SendFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sendCheck_MetaData[] = {
		{ "Category", "Check" },
		{ "ModuleRelativePath", "Public/SendFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FinalResult;
	static void NewProp_sendCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_sendCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASendFile_SendFileToServer, "SendFileToServer" }, // 1090957172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASendFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASendFile_Statics::NewProp_FinalResult = { "FinalResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASendFile, FinalResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalResult_MetaData), NewProp_FinalResult_MetaData) };
void Z_Construct_UClass_ASendFile_Statics::NewProp_sendCheck_SetBit(void* Obj)
{
	((ASendFile*)Obj)->sendCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASendFile_Statics::NewProp_sendCheck = { "sendCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASendFile), &Z_Construct_UClass_ASendFile_Statics::NewProp_sendCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sendCheck_MetaData), NewProp_sendCheck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASendFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASendFile_Statics::NewProp_FinalResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASendFile_Statics::NewProp_sendCheck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASendFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASendFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MR_v4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASendFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASendFile_Statics::ClassParams = {
	&ASendFile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASendFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASendFile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASendFile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASendFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASendFile()
{
	if (!Z_Registration_Info_UClass_ASendFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASendFile.OuterSingleton, Z_Construct_UClass_ASendFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASendFile.OuterSingleton;
}
template<> MR_V4_1_API UClass* StaticClass<ASendFile>()
{
	return ASendFile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASendFile);
ASendFile::~ASendFile() {}
// End Class ASendFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASendFile, ASendFile::StaticClass, TEXT("ASendFile"), &Z_Registration_Info_UClass_ASendFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASendFile), 2348177674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_603039804(TEXT("/Script/MR_v4_1"),
	Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_SendFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
