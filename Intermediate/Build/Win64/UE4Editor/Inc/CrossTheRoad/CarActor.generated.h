// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
#ifdef CROSSTHEROAD_CarActor_generated_h
#error "CarActor.generated.h already included, missing '#pragma once' in CarActor.h"
#endif
#define CROSSTHEROAD_CarActor_generated_h

#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_SPARSE_DATA
#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerOverlap); \
	DECLARE_FUNCTION(execSetEndPoint);


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerOverlap); \
	DECLARE_FUNCTION(execSetEndPoint);


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarActor(); \
	friend struct Z_Construct_UClass_ACarActor_Statics; \
public: \
	DECLARE_CLASS(ACarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActor)


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACarActor(); \
	friend struct Z_Construct_UClass_ACarActor_Statics; \
public: \
	DECLARE_CLASS(ACarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossTheRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarActor)


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActor(ACarActor&&); \
	NO_API ACarActor(const ACarActor&); \
public:


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarActor(ACarActor&&); \
	NO_API ACarActor(const ACarActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarActor)


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CarMesh() { return STRUCT_OFFSET(ACarActor, CarMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ACarActor, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__EndPoint() { return STRUCT_OFFSET(ACarActor, EndPoint); } \
	FORCEINLINE static uint32 __PPO__HasPoint() { return STRUCT_OFFSET(ACarActor, HasPoint); }


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_10_PROLOG
#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_SPARSE_DATA \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_RPC_WRAPPERS \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_INCLASS \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_SPARSE_DATA \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_INCLASS_NO_PURE_DECLS \
	CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSTHEROAD_API UClass* StaticClass<class ACarActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossTheRoad_Source_CrossTheRoad_Public_CarActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
