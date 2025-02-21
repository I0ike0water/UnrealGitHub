// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MR_v4_1/Public/FileSend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSend() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MR_V4_1_API UClass* Z_Construct_UClass_AFileSend();
MR_V4_1_API UClass* Z_Construct_UClass_AFileSend_NoRegister();
UPackage* Z_Construct_UPackage__Script_MR_v4_1();
// End Cross Module References

// Begin Class AFileSend Function SendFileToServer
struct Z_Construct_UFunction_AFileSend_SendFileToServer_Statics
{
	struct FileSend_eventSendFileToServer_Parms
	{
		FString ServerIP;
		int32 ServerPort;
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileTransfer" },
		{ "ModuleRelativePath", "Public/FileSend.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSend_eventSendFileToServer_Parms, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSend_eventSendFileToServer_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSend_eventSendFileToServer_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_ServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFileSend, nullptr, "SendFileToServer", nullptr, nullptr, Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::FileSend_eventSendFileToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::FileSend_eventSendFileToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFileSend_SendFileToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFileSend_SendFileToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFileSend::execSendFileToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendFileToServer(Z_Param_ServerIP,Z_Param_ServerPort,Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class AFileSend Function SendFileToServer

// Begin Class AFileSend
void AFileSend::StaticRegisterNativesAFileSend()
{
	UClass* Class = AFileSend::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendFileToServer", &AFileSend::execSendFileToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFileSend);
UClass* Z_Construct_UClass_AFileSend_NoRegister()
{
	return AFileSend::StaticClass();
}
struct Z_Construct_UClass_AFileSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FileSend.h" },
		{ "ModuleRelativePath", "Public/FileSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SendCheck_MetaData[] = {
		{ "Category", "Check" },
		{ "ModuleRelativePath", "Public/FileSend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalResult_MetaData[] = {
		{ "Category", "File Transfer" },
		{ "ModuleRelativePath", "Public/FileSend.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SendCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SendCheck;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FinalResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFileSend_SendFileToServer, "SendFileToServer" }, // 3635813897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFileSend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFileSend_Statics::NewProp_SendCheck_SetBit(void* Obj)
{
	((AFileSend*)Obj)->SendCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFileSend_Statics::NewProp_SendCheck = { "SendCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFileSend), &Z_Construct_UClass_AFileSend_Statics::NewProp_SendCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SendCheck_MetaData), NewProp_SendCheck_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFileSend_Statics::NewProp_FinalResult = { "FinalResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFileSend, FinalResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalResult_MetaData), NewProp_FinalResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFileSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFileSend_Statics::NewProp_SendCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFileSend_Statics::NewProp_FinalResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFileSend_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFileSend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MR_v4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFileSend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFileSend_Statics::ClassParams = {
	&AFileSend::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFileSend_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFileSend_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFileSend_Statics::Class_MetaDataParams), Z_Construct_UClass_AFileSend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFileSend()
{
	if (!Z_Registration_Info_UClass_AFileSend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFileSend.OuterSingleton, Z_Construct_UClass_AFileSend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFileSend.OuterSingleton;
}
template<> MR_V4_1_API UClass* StaticClass<AFileSend>()
{
	return AFileSend::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFileSend);
AFileSend::~AFileSend() {}
// End Class AFileSend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFileSend, AFileSend::StaticClass, TEXT("AFileSend"), &Z_Registration_Info_UClass_AFileSend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFileSend), 647407565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_2534368463(TEXT("/Script/MR_v4_1"),
	Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_FileSend_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
