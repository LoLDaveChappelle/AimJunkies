#pragma once

#include "PluginSDK.h"

class Evade;

class Plugin
{
public:
	Plugin();
	~Plugin();

	void _OnRender();
	void  _OnGameUpdate();
	void _OnProcessSpells(CastedSpell const& Args);

private:
	PLUGIN_EVENT(void) OnRender();
	PLUGIN_EVENT(void) OnGameUpdate();
	PLUGIN_EVENT(void) OnProcessSpell(CastedSpell const&);

	void LoadPluginEvents();
	void UnloadPluginEvents();

	IMenu*		Parent;
	IMenu*		SpellsMenu;
	Evade*		Implmentation;
};

extern Plugin* GPluginInstance;