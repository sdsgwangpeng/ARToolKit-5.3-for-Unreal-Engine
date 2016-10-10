// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef AR_ARBPLibrary_generated_h
#error "ARBPLibrary.generated.h already included, missing '#pragma once' in ARBPLibrary.h"
#endif
#define AR_ARBPLibrary_generated_h

#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetCameraTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UARBPLibrary::getCameraTexture(); \
		P_NATIVE_END; \
	}


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetCameraTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UARBPLibrary::getCameraTexture(); \
		P_NATIVE_END; \
	}


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUARBPLibrary(); \
	friend AR_API class UClass* Z_Construct_UClass_UARBPLibrary(); \
	public: \
	DECLARE_CLASS(UARBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AR"), NO_API) \
	DECLARE_SERIALIZER(UARBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_INCLASS \
	private: \
	static void StaticRegisterNativesUARBPLibrary(); \
	friend AR_API class UClass* Z_Construct_UClass_UARBPLibrary(); \
	public: \
	DECLARE_CLASS(UARBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AR"), NO_API) \
	DECLARE_SERIALIZER(UARBPLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBPLibrary(UARBPLibrary&&); \
	NO_API UARBPLibrary(const UARBPLibrary&); \
public:


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBPLibrary(UARBPLibrary&&); \
	NO_API UARBPLibrary(const UARBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBPLibrary)


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_45_PROLOG
#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_RPC_WRAPPERS \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_INCLASS \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_INCLASS_NO_PURE_DECLS \
	ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARTOOLKIT532_Plugins_AR_Source_AR_Public_ARBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS