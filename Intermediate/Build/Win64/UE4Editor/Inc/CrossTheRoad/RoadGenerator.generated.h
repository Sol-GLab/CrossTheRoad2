// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSTHEROAD_RoadGenerator_generated_h
#error "RoadGenerator.generated.h already included, missing '#pragma once' in RoadGenerator.h"
#endif
#define CROSSTHEROAD_RoadGenerator_generated_h

#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_SPARSE_DATA
#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_RPC_WRAPPERS
#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoadGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoadGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadGenerator(ARoadGenerator&&); \
	NO_API ARoadGenerator(const ARoadGenerator&); \
public:


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoadGenerator(ARoadGenerator&&); \
	NO_API ARoadGenerator(const ARoadGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadGenerator)


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfRoads() { return STRUCT_OFFSET(ARoadGenerator, NumberOfRoads); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(ARoadGenerator, Distance); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(ARoadGenerator, Direction); }


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_10_PROLOG
#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_SPARSE_DATA \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_SPARSE_DATA \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ARoadGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_Public_RoadGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
