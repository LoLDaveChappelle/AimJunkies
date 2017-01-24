#pragma once

#include "PluginSDK.h"
#include "Spell.h"

class Spells;

class Evade
{
public:
	explicit Evade(IMenu* Parent, IMenu* SpellsMenu);
	~Evade();

	void OnRender();
	void OnGameUpdate();
	void OnProcessSpell(CastedSpell const& Args);

private:
	Spell* Spells[20000]; //???
};