// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIOJson/Public/SIOJConvert.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOJConvert() {}
// Cross Module References
	SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert_NoRegister();
	SIOJSON_API UClass* Z_Construct_UClass_USIOJConvert();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SIOJson();
// End Cross Module References
	void USIOJConvert::StaticRegisterNativesUSIOJConvert()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIOJConvert);
	UClass* Z_Construct_UClass_USIOJConvert_NoRegister()
	{
		return USIOJConvert::StaticClass();
	}
	struct Z_Construct_UClass_USIOJConvert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USIOJConvert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SIOJson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SIOJConvert.h" },
		{ "ModuleRelativePath", "Public/SIOJConvert.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USIOJConvert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOJConvert>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOJConvert_Statics::ClassParams = {
		&USIOJConvert::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USIOJConvert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USIOJConvert()
	{
		if (!Z_Registration_Info_UClass_USIOJConvert.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOJConvert.OuterSingleton, Z_Construct_UClass_USIOJConvert_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USIOJConvert.OuterSingleton;
	}
	template<> SIOJSON_API UClass* StaticClass<USIOJConvert>()
	{
		return USIOJConvert::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USIOJConvert);
	struct Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SIOJson_Public_SIOJConvert_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SIOJson_Public_SIOJConvert_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USIOJConvert, USIOJConvert::StaticClass, TEXT("USIOJConvert"), &Z_Registration_Info_UClass_USIOJConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOJConvert), 1740335757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SIOJson_Public_SIOJConvert_h_1535884158(TEXT("/Script/SIOJson"),
		Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SIOJson_Public_SIOJConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SIOJson_Public_SIOJConvert_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
