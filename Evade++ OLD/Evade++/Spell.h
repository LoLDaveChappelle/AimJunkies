#pragma once

#include "PluginSDK.h"

#include <map>
#include "SpellDatabase.h"

struct SpellMenu
{
	IMenuOption* Enabled;				// Enable Dodging of spell
	IMenuOption* DrawSpell;				// Draw spell
	IMenuOption* UseToCloseGap;			// Adjustable Spell Width
	IMenuOption* Danger;				// Spell Danger Level
};

struct ChampMenu
{
	SpellMenu QSpell;
	SpellMenu WSpell;
	SpellMenu ESpell;
	SpellMenu RSpell;
};

struct SpellInfo //Thanks Katten
{
	SpellInfo()
	{

	}

	SpellInfo(
		const std::string& champName,
		const std::string& spellName,
		const std::string& projectileName,
		eSpellSlot slot,
		eSpellInfoType type,
		float delay,
		float range,
		float radius,
		float speed,
		std::vector<std::string> extraSpellNames,
		std::vector<std::string> extraProjectileNames
	)
	{
		m_strChampionName = champName;
		m_strSpellName = spellName;
		m_strProjectileName = projectileName;
		m_slot = slot;
		m_type = type;
		m_flDelay = delay;
		m_flRange = range;
		m_flRadius = radius;
		m_flSpeed = speed;
		m_vecExtraSpellNames = extraSpellNames;
		m_vecExtraProjectileNames = extraProjectileNames;
	}

	std::string m_strChampionName;
	std::string m_strSpellName;
	std::string m_strProjectileName;
	eSpellSlot m_slot;
	eSpellInfoType m_type;
	float m_flDelay;
	float m_flRange;
	float m_flRadius;
	float m_flSpeed;
	std::vector<std::string> m_vecExtraSpellNames;
	std::vector<std::string> m_vecExtraProjectileNames;
};

class Spell
{
public:
	Spell(IMenu* Parent, IUnit* Champion, int slot);
	~Spell();

	void OnRender();
	void OnGameUpdate();
	void OnProcessSpell(CastedSpell const& Args);

private:
	void LoadMenuOptions(IMenu* Parent, IUnit* Champion);

	ChampMenu	Champ1;
	ChampMenu	Champ2;
	ChampMenu	Champ3;
	ChampMenu	Champ4;
	ChampMenu	Champ5;
	ISpell*		Skill;
	IUnit*		Champion;

	SpellDataManager Spells;
};