// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB02/BolitaAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBolitaAdapter() {}
// Cross Module References
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UBolitaAdapter_NoRegister();
	GALAGA_USFX_LAB02_API UClass* Z_Construct_UClass_UBolitaAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB02();
// End Cross Module References
	void UBolitaAdapter::StaticRegisterNativesUBolitaAdapter()
	{
	}
	UClass* Z_Construct_UClass_UBolitaAdapter_NoRegister()
	{
		return UBolitaAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UBolitaAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBolitaAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBolitaAdapter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BolitaAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBolitaAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBolitaAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBolitaAdapter_Statics::ClassParams = {
		&UBolitaAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBolitaAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBolitaAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBolitaAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBolitaAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBolitaAdapter, 3428489647);
	template<> GALAGA_USFX_LAB02_API UClass* StaticClass<UBolitaAdapter>()
	{
		return UBolitaAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBolitaAdapter(Z_Construct_UClass_UBolitaAdapter, &UBolitaAdapter::StaticClass, TEXT("/Script/Galaga_USFX_LAB02"), TEXT("UBolitaAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBolitaAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
