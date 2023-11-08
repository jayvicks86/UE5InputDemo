// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_InputDemo/Public/PCH_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCH_Controller() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_APCH_Controller();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_APCH_Controller_NoRegister();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIADataConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_InputDemo();
// End Cross Module References
	void APCH_Controller::StaticRegisterNativesAPCH_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCH_Controller);
	UClass* Z_Construct_UClass_APCH_Controller_NoRegister()
	{
		return APCH_Controller::StaticClass();
	}
	struct Z_Construct_UClass_APCH_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp__InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__LocalPCH_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp__LocalPCH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp__InputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCH_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_InputDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PCH_Controller.h" },
		{ "ModuleRelativePath", "Public/PCH_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputMapping_MetaData[] = {
		{ "Category", "InputMapping" },
		{ "ModuleRelativePath", "Public/PCH_Controller.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputMapping = { "_InputMapping", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCH_Controller, _InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Controller_Statics::NewProp__LocalPCH_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCH_Controller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCH_Controller_Statics::NewProp__LocalPCH = { "_LocalPCH", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCH_Controller, _LocalPCH), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCH_Controller_Statics::NewProp__LocalPCH_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Controller_Statics::NewProp__LocalPCH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputActions_MetaData[] = {
		{ "Category", "InputMapping" },
		{ "ModuleRelativePath", "Public/PCH_Controller.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputActions = { "_InputActions", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCH_Controller, _InputActions), Z_Construct_UClass_UIADataConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputActions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCH_Controller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Controller_Statics::NewProp__LocalPCH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCH_Controller_Statics::NewProp__InputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCH_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCH_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCH_Controller_Statics::ClassParams = {
		&APCH_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCH_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APCH_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCH_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCH_Controller()
	{
		if (!Z_Registration_Info_UClass_APCH_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCH_Controller.OuterSingleton, Z_Construct_UClass_APCH_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCH_Controller.OuterSingleton;
	}
	template<> UE5_INPUTDEMO_API UClass* StaticClass<APCH_Controller>()
	{
		return APCH_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCH_Controller);
	APCH_Controller::~APCH_Controller() {}
	struct Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCH_Controller, APCH_Controller::StaticClass, TEXT("APCH_Controller"), &Z_Registration_Info_UClass_APCH_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCH_Controller), 393130694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_Controller_h_2690882051(TEXT("/Script/UE5_InputDemo"),
		Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_PCH_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
