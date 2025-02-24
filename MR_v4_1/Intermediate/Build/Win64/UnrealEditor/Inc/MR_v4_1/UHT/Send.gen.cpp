// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MR_v4_1/Public/Send.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSend() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MR_V4_1_API UClass* Z_Construct_UClass_ASend();
MR_V4_1_API UClass* Z_Construct_UClass_ASend_NoRegister();
UPackage* Z_Construct_UPackage__Script_MR_v4_1();
// End Cross Module References

// Begin Class ASend
void ASend::StaticRegisterNativesASend()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASend);
UClass* Z_Construct_UClass_ASend_NoRegister()
{
	return ASend::StaticClass();
}
struct Z_Construct_UClass_ASend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Send.h" },
		{ "ModuleRelativePath", "Public/Send.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MR_v4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASend_Statics::ClassParams = {
	&ASend::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASend_Statics::Class_MetaDataParams), Z_Construct_UClass_ASend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASend()
{
	if (!Z_Registration_Info_UClass_ASend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASend.OuterSingleton, Z_Construct_UClass_ASend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASend.OuterSingleton;
}
template<> MR_V4_1_API UClass* StaticClass<ASend>()
{
	return ASend::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASend);
ASend::~ASend() {}
// End Class ASend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Send_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASend, ASend::StaticClass, TEXT("ASend"), &Z_Registration_Info_UClass_ASend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASend), 1559722496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Send_h_704049667(TEXT("/Script/MR_v4_1"),
	Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Send_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Send_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
