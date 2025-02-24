// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MR_v4_1/Public/Cooper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCooper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MR_V4_1_API UClass* Z_Construct_UClass_ACooper();
MR_V4_1_API UClass* Z_Construct_UClass_ACooper_NoRegister();
UPackage* Z_Construct_UPackage__Script_MR_v4_1();
// End Cross Module References

// Begin Class ACooper
void ACooper::StaticRegisterNativesACooper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACooper);
UClass* Z_Construct_UClass_ACooper_NoRegister()
{
	return ACooper::StaticClass();
}
struct Z_Construct_UClass_ACooper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cooper.h" },
		{ "ModuleRelativePath", "Public/Cooper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACooper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACooper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MR_v4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACooper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACooper_Statics::ClassParams = {
	&ACooper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACooper_Statics::Class_MetaDataParams), Z_Construct_UClass_ACooper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACooper()
{
	if (!Z_Registration_Info_UClass_ACooper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACooper.OuterSingleton, Z_Construct_UClass_ACooper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACooper.OuterSingleton;
}
template<> MR_V4_1_API UClass* StaticClass<ACooper>()
{
	return ACooper::StaticClass();
}
ACooper::ACooper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACooper);
ACooper::~ACooper() {}
// End Class ACooper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACooper, ACooper::StaticClass, TEXT("ACooper"), &Z_Registration_Info_UClass_ACooper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACooper), 3592076435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_3322239440(TEXT("/Script/MR_v4_1"),
	Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
