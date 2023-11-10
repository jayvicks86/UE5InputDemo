// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_InputDemo_init() {}
	UE5_INPUTDEMO_API UFunction* Z_Construct_UDelegateFunction_UE5_InputDemo_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_InputDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_InputDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_InputDemo.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_InputDemo_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_InputDemo",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8FF11751,
				0x3AD6E4F7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_InputDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_InputDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_InputDemo(Z_Construct_UPackage__Script_UE5_InputDemo, TEXT("/Script/UE5_InputDemo"), Z_Registration_Info_UPackage__Script_UE5_InputDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8FF11751, 0x3AD6E4F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
