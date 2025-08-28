// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossTheRoad/Public/RoadGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadGenerator() {}
// Cross Module References
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadGenerator_NoRegister();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossTheRoad();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSTHEROAD_API UClass* Z_Construct_UClass_ARoadActor_NoRegister();
// End Cross Module References
	void ARoadGenerator::StaticRegisterNativesARoadGenerator()
	{
	}
	UClass* Z_Construct_UClass_ARoadGenerator_NoRegister()
	{
		return ARoadGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ARoadGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRoads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRoads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Road_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Road;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeRoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SafeRoad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoadsCounter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadsCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadsCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossTheRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoadGenerator.h" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_NumberOfRoads_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Roads Settings\n" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
		{ "ToolTip", "Roads Settings" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_NumberOfRoads = { "NumberOfRoads", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, NumberOfRoads), METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_NumberOfRoads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_NumberOfRoads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, Distance), METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Road_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Road Gen\n" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
		{ "ToolTip", "Road Gen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, Road), Z_Construct_UClass_ARoadActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Road_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Road_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_SafeRoad_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_SafeRoad = { "SafeRoad", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, SafeRoad), Z_Construct_UClass_ARoadActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_SafeRoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_SafeRoad_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter_Inner = { "RoadsCounter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoadActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter_MetaData[] = {
		{ "Comment", "//Roads counter\n" },
		{ "ModuleRelativePath", "Public/RoadGenerator.h" },
		{ "ToolTip", "Roads counter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter = { "RoadsCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoadGenerator, RoadsCounter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_NumberOfRoads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_Road,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_SafeRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_RoadsCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoadGenerator_Statics::ClassParams = {
		&ARoadGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoadGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoadGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoadGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoadGenerator, 1507341202);
	template<> CROSSTHEROAD_API UClass* StaticClass<ARoadGenerator>()
	{
		return ARoadGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoadGenerator(Z_Construct_UClass_ARoadGenerator, &ARoadGenerator::StaticClass, TEXT("/Script/CrossTheRoad"), TEXT("ARoadGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
