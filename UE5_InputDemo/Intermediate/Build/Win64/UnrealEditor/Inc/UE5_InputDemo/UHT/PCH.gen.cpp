// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_InputDemo/Public/PCH.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCH() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_APCH();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_APCH_NoRegister();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIAInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_InputDemo();
// End Cross Module References
	void APCH::StaticRegisterNativesAPCH()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCH);
	UClass* Z_Construct_UClass_APCH_NoRegister()
	{
		return APCH::StaticClass();
	}
	struct Z_Construct_UClass_APCH_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCH_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_InputDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PCH.h" },
		{ "ModuleRelativePath", "Public/PCH.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Statics::NewProp__WalkSpeed_MetaData[] = {
		{ "Category", "Speeds" },
		{ "ModuleRelativePath", "Public/PCH.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCH_Statics::NewProp__WalkSpeed = { "_WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCH, _WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_APCH_Statics::NewProp__WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Statics::NewProp__WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Statics::NewProp__SprintSpeed_MetaData[] = {
		{ "Category", "Speeds" },
		{ "ModuleRelativePath", "Public/PCH.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCH_Statics::NewProp__SprintSpeed = { "_SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCH, _SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_APCH_Statics::NewProp__SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Statics::NewProp__SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Speeds" },
		{ "ModuleRelativePath", "Public/PCH.h" },
	};
#endif
	void Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((APCH*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APCH), &Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCH_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Statics::NewProp__WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Statics::NewProp__SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Statics::NewProp_bIsSprinting,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APCH_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAInterface_NoRegister, (int32)VTABLE_OFFSET(APCH, IIAInterface), false },  // 3371058385
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCH_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCH>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCH_Statics::ClassParams = {
		&APCH::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCH_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCH_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCH()
	{
		if (!Z_Registration_Info_UClass_APCH.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCH.OuterSingleton, Z_Construct_UClass_APCH_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCH.OuterSingleton;
	}
	template<> UE5_INPUTDEMO_API UClass* StaticClass<APCH>()
	{
		return APCH::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCH);
	APCH::~APCH() {}
	struct Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCH, APCH::StaticClass, TEXT("APCH"), &Z_Registration_Info_UClass_APCH, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCH), 1607860808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_h_3256940718(TEXT("/Script/UE5_InputDemo"),
		Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
