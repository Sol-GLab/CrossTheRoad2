// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/CarActorGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarActorGenerator() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACarActorGenerator_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACarActorGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ACarActor_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadGenerator_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadActor_NoRegister();
// End Cross Module References
	void ACarActorGenerator::StaticRegisterNativesACarActorGenerator()
	{
	}
	UClass* Z_Construct_UClass_ACarActorGenerator_NoRegister()
	{
		return ACarActorGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ACarActorGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Car_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Car;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LastSpawn_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastSpawn_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LastSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarActorGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarActorGenerator.h" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_Car_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Cars spawn\n" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
		{ "ToolTip", "Cars spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_Car = { "Car", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActorGenerator, Car), Z_Construct_UClass_ACarActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_Car_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_Car_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_RoadNumber_MetaData[] = {
		{ "Category", "RoadGeneratorHere" },
		{ "Comment", "//Roads Counter\n" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
		{ "ToolTip", "Roads Counter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_RoadNumber = { "RoadNumber", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActorGenerator, RoadNumber), Z_Construct_UClass_ARoadGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_RoadNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_RoadNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MinTime_MetaData[] = {
		{ "Category", "Settimgs" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActorGenerator, MinTime), METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MinTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MaxTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActorGenerator, MaxTime), METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MaxTime_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_ValueProp = { "LastSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_Key_KeyProp = { "LastSpawn_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoadActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_MetaData[] = {
		{ "Comment", "// Same Spawn\n" },
		{ "ModuleRelativePath", "Public/CarActorGenerator.h" },
		{ "ToolTip", "Same Spawn" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn = { "LastSpawn", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarActorGenerator, LastSpawn), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarActorGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_Car,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_RoadNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_MaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarActorGenerator_Statics::NewProp_LastSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarActorGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarActorGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarActorGenerator_Statics::ClassParams = {
		&ACarActorGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarActorGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarActorGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarActorGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarActorGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarActorGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarActorGenerator, 2269774369);
	template<> CROSSTHEROAD_API UClass* StaticClass<ACarActorGenerator>()
	{
		return ACarActorGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarActorGenerator(Z_Construct_UClass_ACarActorGenerator, &ACarActorGenerator::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ACarActorGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarActorGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
