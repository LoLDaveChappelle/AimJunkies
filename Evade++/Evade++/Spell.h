#pragma once

#include "PluginSDK.h"

#include <map>

struct SpellMenu
{
	IMenuOption* Draw;
	IMenuOption* Enabled;
	IMenuOption* Width;
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

	SpellMenu	Menu;
	ISpell*		Skill;
	IUnit*		Champion;
};