#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_PersonaNative.ADS_PersonaNative
// 0x0010
struct FADS_PersonaNative
{
	TArray<struct FAthenaAnimationEmotePersonas>       Persona_93_BE3B02404F9F0DD7B00DAD9F675CF780;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
