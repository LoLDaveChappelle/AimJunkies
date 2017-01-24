#include "stdafx.h"
#include "SpellDatabase.h"
#include <vector>

SpellDatabase::SpellDatabase()
{
#pragma region Aatrox
	Spells.push_back(
		SpellData("Aatrox",
			"AatroxQ",
			kSlotQ,
			SkillshotCircle,
			600,
			650,
			250,
			2000,
			true,
			false,
			3,
			true,
			""));
#pragma endregion Aatrox
}
