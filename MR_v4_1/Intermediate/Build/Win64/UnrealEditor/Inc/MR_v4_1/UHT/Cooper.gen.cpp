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
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MR_V4_1_API UClass* Z_Construct_UClass_ACooper();
MR_V4_1_API UClass* Z_Construct_UClass_ACooper_NoRegister();
UPackage* Z_Construct_UPackage__Script_MR_v4_1();
// End Cross Module References

// Begin Class ACooper Function ChangeLegs
struct Z_Construct_UFunction_ACooper_ChangeLegs_Statics
{
	struct Cooper_eventChangeLegs_Parms
	{
		float height;
		float sittingHeight;
		USkeletalMeshComponent* skeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cooper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sittingHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeLegs_Parms, height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_sittingHeight = { "sittingHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeLegs_Parms, sittingHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeLegs_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skeletalMesh_MetaData), NewProp_skeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACooper_ChangeLegs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_sittingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeLegs_Statics::NewProp_skeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeLegs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACooper_ChangeLegs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACooper, nullptr, "ChangeLegs", nullptr, nullptr, Z_Construct_UFunction_ACooper_ChangeLegs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeLegs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACooper_ChangeLegs_Statics::Cooper_eventChangeLegs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeLegs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACooper_ChangeLegs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACooper_ChangeLegs_Statics::Cooper_eventChangeLegs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACooper_ChangeLegs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACooper_ChangeLegs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACooper::execChangeLegs)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_height);
	P_GET_PROPERTY(FFloatProperty,Z_Param_sittingHeight);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeLegs(Z_Param_height,Z_Param_sittingHeight,Z_Param_skeletalMesh);
	P_NATIVE_END;
}
// End Class ACooper Function ChangeLegs

// Begin Class ACooper Function ChangeTorso
struct Z_Construct_UFunction_ACooper_ChangeTorso_Statics
{
	struct Cooper_eventChangeTorso_Parms
	{
		float height;
		float sittingHeight;
		USkeletalMeshComponent* skeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cooper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sittingHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeTorso_Parms, height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_sittingHeight = { "sittingHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeTorso_Parms, sittingHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeTorso_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skeletalMesh_MetaData), NewProp_skeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACooper_ChangeTorso_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_sittingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeTorso_Statics::NewProp_skeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeTorso_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACooper_ChangeTorso_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACooper, nullptr, "ChangeTorso", nullptr, nullptr, Z_Construct_UFunction_ACooper_ChangeTorso_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeTorso_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACooper_ChangeTorso_Statics::Cooper_eventChangeTorso_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeTorso_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACooper_ChangeTorso_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACooper_ChangeTorso_Statics::Cooper_eventChangeTorso_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACooper_ChangeTorso()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACooper_ChangeTorso_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACooper::execChangeTorso)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_height);
	P_GET_PROPERTY(FFloatProperty,Z_Param_sittingHeight);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeTorso(Z_Param_height,Z_Param_sittingHeight,Z_Param_skeletalMesh);
	P_NATIVE_END;
}
// End Class ACooper Function ChangeTorso

// Begin Class ACooper Function ChangeWingSpan
struct Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics
{
	struct Cooper_eventChangeWingSpan_Parms
	{
		float wingspan;
		USkeletalMeshComponent* skeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cooper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_wingspan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::NewProp_wingspan = { "wingspan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeWingSpan_Parms, wingspan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cooper_eventChangeWingSpan_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skeletalMesh_MetaData), NewProp_skeletalMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::NewProp_wingspan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::NewProp_skeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACooper, nullptr, "ChangeWingSpan", nullptr, nullptr, Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::Cooper_eventChangeWingSpan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::Cooper_eventChangeWingSpan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACooper_ChangeWingSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACooper_ChangeWingSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACooper::execChangeWingSpan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_wingspan);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeWingSpan(Z_Param_wingspan,Z_Param_skeletalMesh);
	P_NATIVE_END;
}
// End Class ACooper Function ChangeWingSpan

// Begin Class ACooper
void ACooper::StaticRegisterNativesACooper()
{
	UClass* Class = ACooper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeLegs", &ACooper::execChangeLegs },
		{ "ChangeTorso", &ACooper::execChangeTorso },
		{ "ChangeWingSpan", &ACooper::execChangeWingSpan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACooper_ChangeLegs, "ChangeLegs" }, // 1534719504
		{ &Z_Construct_UFunction_ACooper_ChangeTorso, "ChangeTorso" }, // 3384445994
		{ &Z_Construct_UFunction_ACooper_ChangeWingSpan, "ChangeWingSpan" }, // 915327129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ACooper);
ACooper::~ACooper() {}
// End Class ACooper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACooper, ACooper::StaticClass, TEXT("ACooper"), &Z_Registration_Info_UClass_ACooper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACooper), 2271479146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_1623769106(TEXT("/Script/MR_v4_1"),
	Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ETRI_Documents_UnrealGitHub_MR_v4_1_Source_MR_v4_1_Public_Cooper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
