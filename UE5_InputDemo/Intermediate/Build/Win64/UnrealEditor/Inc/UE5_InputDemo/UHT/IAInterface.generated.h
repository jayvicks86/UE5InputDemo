// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionInstance;
#ifdef UE5_INPUTDEMO_IAInterface_generated_h
#error "IAInterface.generated.h already included, missing '#pragma once' in IAInterface.h"
#endif
#define UE5_INPUTDEMO_IAInterface_generated_h

#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_SPARSE_DATA
#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_RPC_WRAPPERS \
	virtual void Sprint_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Look_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Move_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Action_Implementation(FInputActionInstance const& Instance) {}; \
 \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAction);


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Sprint_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Look_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Move_Implementation(FInputActionInstance const& Instance) {}; \
	virtual void Action_Implementation(FInputActionInstance const& Instance) {}; \
 \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAction);


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_ACCESSORS
#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_CALLBACK_WRAPPERS
#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAInterface(UIAInterface&&); \
	NO_API UIAInterface(const UIAInterface&); \
public: \
	NO_API virtual ~UIAInterface();


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAInterface(UIAInterface&&); \
	NO_API UIAInterface(const UIAInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAInterface) \
	NO_API virtual ~UIAInterface();


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIAInterface(); \
	friend struct Z_Construct_UClass_UIAInterface_Statics; \
public: \
	DECLARE_CLASS(UIAInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UE5_InputDemo"), NO_API) \
	DECLARE_SERIALIZER(UIAInterface)


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIAInterface() {} \
public: \
	typedef UIAInterface UClassType; \
	typedef IIAInterface ThisClass; \
	static void Execute_Action(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Look(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Move(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Sprint(UObject* O, FInputActionInstance const& Instance); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IIAInterface() {} \
public: \
	typedef UIAInterface UClassType; \
	typedef IIAInterface ThisClass; \
	static void Execute_Action(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Look(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Move(UObject* O, FInputActionInstance const& Instance); \
	static void Execute_Sprint(UObject* O, FInputActionInstance const& Instance); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_11_PROLOG
#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_SPARSE_DATA \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_RPC_WRAPPERS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_ACCESSORS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_SPARSE_DATA \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_ACCESSORS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_INPUTDEMO_API UClass* StaticClass<class UIAInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jayvi_source_UE5InputDemo_UE5_InputDemo_Source_UE5_InputDemo_Public_IAInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
