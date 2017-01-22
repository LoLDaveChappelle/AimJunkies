#pragma once

#include "PluginSDK.h"
#include "Plugin.h"

class Spell;

class AlqoholicVayne
{
public:
	explicit AlqoholicVayne(IMenu* Parent);
	~AlqoholicVayne();

	void OnRender() const;
	void OnGameUpdate() const;
	void OnOrbwalk(IUnit* Target, int Mode) const;
	static int GetEnemiesInRange(float range);
	void AutoCondemn() const;
	void OnOrbwalkAfterAttack(IUnit* Source, IUnit* Target) const;

	SpellMenu	Menu;
	Vec4		Color;

	ISpell2*	Q;
	ISpell2*	W;
	ISpell2*	E;
	ISpell2*	R;
};