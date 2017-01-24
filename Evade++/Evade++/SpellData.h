#pragma once
#include "Skillshot.h"
#include <string>
#include <vector>
#include "LPPConstants.h"

class SpellData
{
public:
	bool AddHitBox;
	bool CanBeRemoved = false;
	bool Centered;
	std::string ChampionName;
	int DangerValue;
	int Delay;
	bool DisabledByDefault = false;
	bool DisableFowDetection = false;
	bool DontAddExtraDuration;
	bool DontCheckForDuplicates = false;
	bool DontCross = false;
	bool DontRemove = false;
	int ExtraDuration;
	std::vector<std::string> ExtraMissileNames;
	int ExtraRange = -1;
	std::vector<std::string> ExtraSpellNames;
	bool FixedRange;
	bool ForceRemove = false;
	bool FollowCaster = false;
	std::string FromObject = "";
	std::vector<std::string> FromObjects;
	int Id = -1;
	bool Invert;
	bool IsDangerous = false;
	int MissileAccel = 0;
	bool MissileDelayed;
	bool MissileFollowsUnit;
	int MissileMaxSpeed;
	int MissileMinSpeed;
	int MissileSpeed;
	std::string MissileSpellName = "";
	float MultipleAngle;
	int MultipleNumber = -1;
	int RingRadius;
	std::string SourceObjectName = "";
	eSpellSlot Slot;
	std::string SpellName;
	bool TakeClosestPath = false;
	std::string ToggleParticleName = "";
	SkillShotType Type;

	SpellData();

	SpellData(std::string championName,
		std::string spellName,
		eSpellSlot slot,
		SkillShotType type,
		int delay,
		int range,
		int radius,
		int missileSpeed,
		bool addHitBox,
		bool fixedRange,
		int defaultDangerValue)
	{
		ChampionName = championName;
		SpellName = spellName;
		Slot = slot;
		Type = type;
		Delay = delay;
		_radius = radius;
		MissileSpeed = missileSpeed;
		AddHitBox = addHitBox;
		FixedRange = fixedRange;
		DangerValue = defaultDangerValue;
	}
private:
	int _radius;
	int _range;
};
