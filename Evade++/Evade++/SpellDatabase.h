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
	SpellData(const char* _Champion, int _Slot, eTargetType _Type, bool _Enabled, bool _Draw, float _Width)
	{
		strcpy_s(Champion, _Champion);

		Slot = _Slot;
		Type = _Type;
		Enabled = _Enabled;
		Draw = _Draw;
		Width = _Width;

		// We have no logic in place for these right now so we'll just disable them
		if (Type == kDash || Type == kPassive || Type == kCastOnSelf)
			Enabled = false;
	}

	char			Champion[200];
	int				Slot;
	eTargetType		Type;
	bool			Enabled;
	bool			Draw;
	float			Width;
};

struct SpellDataManager
{
	SpellDataManager();

	std::vector<SpellData>
		Data;
};