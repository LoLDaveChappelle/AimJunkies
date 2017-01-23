#pragma once

// Include the plugin SDK
#include "PluginSDK.h"

// Our plugin implementation, all events will be called from this wrapper
class Vayne;

// A wrapper class to manage our plugin
class Plugin
{
public:
	// Constructor and destructor
	Plugin();
	~Plugin();

	// Wrappers for processing plugin events
	void _OnRender();
	void _OnGameUpdate();
	void _OnOrbwalkPreAttack(IUnit* Target);
	void _OnGapCloser(GapCloserSpell const& Args);
	void _OnInterruptible(InterruptibleSpell const& Args);
	void _OnProcessSpell(CastedSpell const& Args);

private:
	// Plugin events
	PLUGIN_EVENT(void) OnRender();
	PLUGIN_EVENT(void) OnGameUpdate();
	PLUGIN_EVENT(void) OnOrbwalkPreAttack(IUnit*);
	PLUGIN_EVENT(void) OnGapCloser(GapCloserSpell const&);
	PLUGIN_EVENT(void) OnInterruptible(InterruptibleSpell const&);
	PLUGIN_EVENT(void) OnProcessSpell(CastedSpell const&);

private:
	// Install and uninstall events
	void LoadPluginEvents();
	void UnloadPluginEvents();

private:
	IMenu*		Parent;
	Vayne*	Implementation;
};

extern Plugin* GPluginInstance;