#pragma once

#include <vector>

enum eTargetType
{
	kCastOnSelf,
	kCastOnTarget,
	kSkillshotMissile,
	kSkillshotInstant,

	kDash,		// No logic in place
	kPassive	// No logic in place
};

struct SpellData
{
	SpellData(const char* _Champion, int _Slot, eTargetType _Type, bool _Dodgable)
	{
		strcpy_s(Champion, _Champion);

		Slot = _Slot;
		Type = _Type;

		// We have no logic in place for these right now so we'll just disable them
		if (Type == kDash || Type == kPassive || Type == kCastOnSelf)
		{
			Enabled = false;
			Dodgable = false;
		}
	}

	char			Champion[200];
	int				Slot;
	eTargetType		Type;
	bool			Enabled;
	bool			Dodgable;
};

struct SpellDataManager
{
	SpellDataManager();

	std::vector<SpellData>
		Data;
};