// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_InputDemo/Public/IADataConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIADataConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIADataConfig();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIADataConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_InputDemo();
// End Cross Module References
	void UIADataConfig::StaticRegisterNativesUIADataConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIADataConfig);
	UClass* Z_Construct_UClass_UIADataConfig_NoRegister()
	{
		return UIADataConfig::StaticClass();
	}
	struct Z_Construct_UClass_UIADataConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Look_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Look;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIADataConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_InputDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADataConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IADataConfig.h" },
		{ "ModuleRelativePath", "Public/IADataConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADataConfig_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "IADataConfig" },
		{ "ModuleRelativePath", "Public/IADataConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIADataConfig_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIADataConfig, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADataConfig_Statics::NewProp_Move_MetaData[] = {
		{ "Category", "IADataConfig" },
		{ "ModuleRelativePath", "Public/IADataConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIADataConfig_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIADataConfig, Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Move_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADataConfig_Statics::NewProp_Look_MetaData[] = {
		{ "Category", "IADataConfig" },
		{ "ModuleRelativePath", "Public/IADataConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIADataConfig_Statics::NewProp_Look = { "Look", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIADataConfig, Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Look_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Look_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIADataConfig_Statics::NewProp_Sprint_MetaData[] = {
		{ "Category", "IADataConfig" },
		{ "ModuleRelativePath", "Public/IADataConfig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIADataConfig_Statics::NewProp_Sprint = { "Sprint", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIADataConfig, Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Sprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::NewProp_Sprint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIADataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIADataConfig_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIADataConfig_Statics::NewProp_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIADataConfig_Statics::NewProp_Look,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIADataConfig_Statics::NewProp_Sprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIADataConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIADataConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIADataConfig_Statics::ClassParams = {
		&UIADataConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIADataConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIADataConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIADataConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIADataConfig()
	{
		if (!Z_Registration_Info_UClass_UIADataConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIADataConfig.OuterSingleton, Z_Construct_UClass_UIADataConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIADataConfig.OuterSingleton;
	}
	template<> UE5_INPUTDEMO_API UClass* StaticClass<UIADataConfig>()
	{
		return UIADataConfig::StaticClass();
	}
	UIADataConfig::UIADataConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIADataConfig);
	UIADataConfig::~UIADataConfig() {}
	struct Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IADataConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IADataConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIADataConfig, UIADataConfig::StaticClass, TEXT("UIADataConfig"), &Z_Registration_Info_UClass_UIADataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIADataConfig), 3184346257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IADataConfig_h_2502792350(TEXT("/Script/UE5_InputDemo"),
		Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IADataConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IADataConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
