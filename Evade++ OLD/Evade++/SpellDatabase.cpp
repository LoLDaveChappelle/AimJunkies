#include "stdafx.h"
#include "SpellDatabase.h"
#include "LPPConstants.h"

SpellDataManager::SpellDataManager()
{
#pragma region Aatrox
	Data.emplace_back("Aatrox", kSlotQ, kCircleCast, true);
	Data.emplace_back("Aatrox", kSlotW, kTargetCast, false);
	Data.emplace_back("Aatrox", kSlotE, kLineCast, true);
	Data.emplace_back("Aatrox", kSlotR, kTargetCast, false);
#pragma endregion 

#pragma region Ahri
	Data.emplace_back("Ahri", kSlotQ, kLineCast, true);
	Data.emplace_back("Ahri", kSlotW, kTargetCast, false);
	Data.emplace_back("Ahri", kSlotE, kLineCast, true);
	Data.emplace_back("Ahri", kSlotR, kTargetCast, false);
#pragma endregion 

#pragma region Akali
	Data.emplace_back("Akali", kSlotQ, kTargetCast, true);
	Data.emplace_back("Akali", kSlotW, kCircleCast, false);
	Data.emplace_back("Akali", kSlotE, kTargetCast, false);
	Data.emplace_back("Akali", kSlotR, kTargetCast, false);
#pragma endregion 

#pragma region Alistar 
	Data.emplace_back("Alistar", kSlotQ, kCircleCast, false); //TODO
	Data.emplace_back("Alistar", kSlotW, kTargetCast, false); //TODO
	Data.emplace_back("Alistar", kSlotE, kLineCast, false); //TODO
	Data.emplace_back("Alistar", kSlotR, kTargetCast, false); //TODO
#pragma endregion 

#pragma region Amumu
	Data.emplace_back("Amumu", kSlotQ, kLineCast, true);
	Data.emplace_back("Amumu", kSlotW, kTargetCast, false);
	Data.emplace_back("Amumu", kSlotE, kTargetCast, false);
	Data.emplace_back("Amumu", kSlotR, kCircleCast, true);
#pragma endregion 

#pragma region Anivia
	Data.emplace_back("Anivia", kSlotQ, kLineCast, true);
	Data.emplace_back("Anivia", kSlotW, kCircleCast, false);
	Data.emplace_back("Anivia", kSlotE, kTargetCast, false);
	Data.emplace_back("Anivia", kSlotR, kCircleCast, false);
#pragma endregion 
}