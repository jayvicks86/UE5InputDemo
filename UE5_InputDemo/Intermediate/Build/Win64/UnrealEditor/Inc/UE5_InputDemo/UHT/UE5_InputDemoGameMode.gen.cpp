// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_InputDemo/UE5_InputDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_InputDemoGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_AUE5_InputDemoGameMode();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_AUE5_InputDemoGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_InputDemo();
// End Cross Module References
	void AUE5_InputDemoGameMode::StaticRegisterNativesAUE5_InputDemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_InputDemoGameMode);
	UClass* Z_Construct_UClass_AUE5_InputDemoGameMode_NoRegister()
	{
		return AUE5_InputDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_InputDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_InputDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_InputDemoGameMode.h" },
		{ "ModuleRelativePath", "UE5_InputDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_InputDemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::ClassParams = {
		&AUE5_InputDemoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_InputDemoGameMode()
	{
		if (!Z_Registration_Info_UClass_AUE5_InputDemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_InputDemoGameMode.OuterSingleton, Z_Construct_UClass_AUE5_InputDemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_InputDemoGameMode.OuterSingleton;
	}
	template<> UE5_INPUTDEMO_API UClass* StaticClass<AUE5_InputDemoGameMode>()
	{
		return AUE5_InputDemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_InputDemoGameMode);
	AUE5_InputDemoGameMode::~AUE5_InputDemoGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_UE5_InputDemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_UE5_InputDemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_InputDemoGameMode, AUE5_InputDemoGameMode::StaticClass, TEXT("AUE5_InputDemoGameMode"), &Z_Registration_Info_UClass_AUE5_InputDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_InputDemoGameMode), 1637054940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_UE5_InputDemoGameMode_h_2100692183(TEXT("/Script/UE5_InputDemo"),
		Z_CompiledInDeferFile_FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_UE5_InputDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_UE5_InputDemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
