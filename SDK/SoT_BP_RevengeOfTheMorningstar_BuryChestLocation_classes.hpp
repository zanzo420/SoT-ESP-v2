#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_BuryChestLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_BuryChestLocation.BP_RevengeOfTheMorningstar_BuryChestLocation_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_RevengeOfTheMorningstar_BuryChestLocation_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_BuryChestLocation.BP_RevengeOfTheMorningstar_BuryChestLocation_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryChestLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
