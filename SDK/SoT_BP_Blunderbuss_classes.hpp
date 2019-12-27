#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Blunderbuss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C
// 0x0020 (0x0AE0 - 0x0AC0)
class ABP_Blunderbuss_C : public AProjectileWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRelationship>                  sfx_relationship;                                         // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Blunderbuss.BP_Blunderbuss_C"));
		return ptr;
	}


	void SetScopeEffectOn(bool IsOn);
	void determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship);
	void DoFireEffect();
	void UserConstructionScript();
	void OnWeaponFired();
	void RadialBlurOn();
	void RadialBlurOff();
	void ExecuteUbergraph_BP_Blunderbuss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
