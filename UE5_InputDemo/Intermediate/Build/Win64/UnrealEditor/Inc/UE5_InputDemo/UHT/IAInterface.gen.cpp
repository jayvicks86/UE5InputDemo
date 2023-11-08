// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_InputDemo/Public/IAInterface.h"
#include "InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIAInterface();
	UE5_INPUTDEMO_API UClass* Z_Construct_UClass_UIAInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_InputDemo();
// End Cross Module References
	DEFINE_FUNCTION(IIAInterface::execSprint)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint_Implementation(Z_Param_Out_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIAInterface::execLook)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look_Implementation(Z_Param_Out_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIAInterface::execMove)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move_Implementation(Z_Param_Out_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIAInterface::execAction)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Action_Implementation(Z_Param_Out_Instance);
		P_NATIVE_END;
	}
	struct IAInterface_eventAction_Parms
	{
		FInputActionInstance Instance;
	};
	struct IAInterface_eventLook_Parms
	{
		FInputActionInstance Instance;
	};
	struct IAInterface_eventMove_Parms
	{
		FInputActionInstance Instance;
	};
	struct IAInterface_eventSprint_Parms
	{
		FInputActionInstance Instance;
	};
	void IIAInterface::Action(FInputActionInstance const& Instance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Action instead.");
	}
	void IIAInterface::Look(FInputActionInstance const& Instance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Look instead.");
	}
	void IIAInterface::Move(FInputActionInstance const& Instance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Move instead.");
	}
	void IIAInterface::Sprint(FInputActionInstance const& Instance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Sprint instead.");
	}
	void UIAInterface::StaticRegisterNativesUIAInterface()
	{
		UClass* Class = UIAInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Action", &IIAInterface::execAction },
			{ "Look", &IIAInterface::execLook },
			{ "Move", &IIAInterface::execMove },
			{ "Sprint", &IIAInterface::execSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIAInterface_Action_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Action_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIAInterface_Action_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAInterface_eventAction_Parms, Instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Action_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Action_Statics::NewProp_Instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAInterface_Action_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAInterface_Action_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Action_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAInterface_Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAInterface, nullptr, "Action", nullptr, nullptr, sizeof(IAInterface_eventAction_Parms), Z_Construct_UFunction_UIAInterface_Action_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Action_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Action_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Action_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAInterface_Action()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAInterface_Action_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAInterface_Look_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Look_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIAInterface_Look_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAInterface_eventLook_Parms, Instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Look_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Look_Statics::NewProp_Instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAInterface_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAInterface_Look_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAInterface_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAInterface, nullptr, "Look", nullptr, nullptr, sizeof(IAInterface_eventLook_Parms), Z_Construct_UFunction_UIAInterface_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAInterface_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAInterface_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAInterface_Move_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Move_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIAInterface_Move_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAInterface_eventMove_Parms, Instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Move_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Move_Statics::NewProp_Instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAInterface_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAInterface_Move_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAInterface_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAInterface, nullptr, "Move", nullptr, nullptr, sizeof(IAInterface_eventMove_Parms), Z_Construct_UFunction_UIAInterface_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAInterface_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAInterface_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAInterface_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Sprint_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIAInterface_Sprint_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAInterface_eventSprint_Parms, Instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Sprint_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Sprint_Statics::NewProp_Instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAInterface_Sprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAInterface_Sprint_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAInterface_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAInterface_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAInterface, nullptr, "Sprint", nullptr, nullptr, sizeof(IAInterface_eventSprint_Parms), Z_Construct_UFunction_UIAInterface_Sprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Sprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAInterface_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAInterface_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAInterface_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAInterface_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAInterface);
	UClass* Z_Construct_UClass_UIAInterface_NoRegister()
	{
		return UIAInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIAInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_InputDemo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAInterface_Action, "Action" }, // 793085608
		{ &Z_Construct_UFunction_UIAInterface_Look, "Look" }, // 1066023140
		{ &Z_Construct_UFunction_UIAInterface_Move, "Move" }, // 3018752943
		{ &Z_Construct_UFunction_UIAInterface_Sprint, "Sprint" }, // 1265144899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAInterface_Statics::ClassParams = {
		&UIAInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIAInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAInterface()
	{
		if (!Z_Registration_Info_UClass_UIAInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAInterface.OuterSingleton, Z_Construct_UClass_UIAInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAInterface.OuterSingleton;
	}
	template<> UE5_INPUTDEMO_API UClass* StaticClass<UIAInterface>()
	{
		return UIAInterface::StaticClass();
	}
	UIAInterface::UIAInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAInterface);
	UIAInterface::~UIAInterface() {}
	static FName NAME_UIAInterface_Action = FName(TEXT("Action"));
	void IIAInterface::Execute_Action(UObject* O, FInputActionInstance const& Instance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIAInterface::StaticClass()));
		IAInterface_eventAction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIAInterface_Action);
		if (Func)
		{
			Parms.Instance=Instance;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIAInterface*)(O->GetNativeInterfaceAddress(UIAInterface::StaticClass())))
		{
			I->Action_Implementation(Instance);
		}
	}
	static FName NAME_UIAInterface_Look = FName(TEXT("Look"));
	void IIAInterface::Execute_Look(UObject* O, FInputActionInstance const& Instance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIAInterface::StaticClass()));
		IAInterface_eventLook_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIAInterface_Look);
		if (Func)
		{
			Parms.Instance=Instance;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIAInterface*)(O->GetNativeInterfaceAddress(UIAInterface::StaticClass())))
		{
			I->Look_Implementation(Instance);
		}
	}
	static FName NAME_UIAInterface_Move = FName(TEXT("Move"));
	void IIAInterface::Execute_Move(UObject* O, FInputActionInstance const& Instance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIAInterface::StaticClass()));
		IAInterface_eventMove_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIAInterface_Move);
		if (Func)
		{
			Parms.Instance=Instance;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIAInterface*)(O->GetNativeInterfaceAddress(UIAInterface::StaticClass())))
		{
			I->Move_Implementation(Instance);
		}
	}
	static FName NAME_UIAInterface_Sprint = FName(TEXT("Sprint"));
	void IIAInterface::Execute_Sprint(UObject* O, FInputActionInstance const& Instance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIAInterface::StaticClass()));
		IAInterface_eventSprint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIAInterface_Sprint);
		if (Func)
		{
			Parms.Instance=Instance;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIAInterface*)(O->GetNativeInterfaceAddress(UIAInterface::StaticClass())))
		{
			I->Sprint_Implementation(Instance);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAInterface, UIAInterface::StaticClass, TEXT("UIAInterface"), &Z_Registration_Info_UClass_UIAInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAInterface), 3371058385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_1602630924(TEXT("/Script/UE5_InputDemo"),
		Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jayvi_Downloads_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
