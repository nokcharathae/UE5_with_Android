// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketIOClient/Public/SIOMessageConvert.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIOMessageConvert() {}
// Cross Module References
	SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USIOMessageConvert_NoRegister();
	SOCKETIOCLIENT_API UClass* Z_Construct_UClass_USIOMessageConvert();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SocketIOClient();
// End Cross Module References
	void USIOMessageConvert::StaticRegisterNativesUSIOMessageConvert()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIOMessageConvert);
	UClass* Z_Construct_UClass_USIOMessageConvert_NoRegister()
	{
		return USIOMessageConvert::StaticClass();
	}
	struct Z_Construct_UClass_USIOMessageConvert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USIOMessageConvert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketIOClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USIOMessageConvert_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SIOMessageConvert.h" },
		{ "ModuleRelativePath", "Public/SIOMessageConvert.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USIOMessageConvert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIOMessageConvert>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USIOMessageConvert_Statics::ClassParams = {
		&USIOMessageConvert::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USIOMessageConvert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USIOMessageConvert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USIOMessageConvert()
	{
		if (!Z_Registration_Info_UClass_USIOMessageConvert.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIOMessageConvert.OuterSingleton, Z_Construct_UClass_USIOMessageConvert_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USIOMessageConvert.OuterSingleton;
	}
	template<> SOCKETIOCLIENT_API UClass* StaticClass<USIOMessageConvert>()
	{
		return USIOMessageConvert::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USIOMessageConvert);
	struct Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SocketIOClient_Public_SIOMessageConvert_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SocketIOClient_Public_SIOMessageConvert_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USIOMessageConvert, USIOMessageConvert::StaticClass, TEXT("USIOMessageConvert"), &Z_Registration_Info_UClass_USIOMessageConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIOMessageConvert), 2592502295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SocketIOClient_Public_SIOMessageConvert_h_2502777845(TEXT("/Script/SocketIOClient"),
		Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SocketIOClient_Public_SIOMessageConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mideapipe_Plugins_SocketIOClient_Unreal_Source_SocketIOClient_Public_SIOMessageConvert_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
