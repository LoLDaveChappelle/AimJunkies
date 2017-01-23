/*
Plugin.cpp
- This is a wrapper class acting as an intermediary between the League++ core and our plugin.
- The 'parent' menu is created from here, from which all sub menus will be created.
- All events are installed here, from which any other event processing will be called.
- When we unload, this will remove our menu, uninstall our events, and handle any other cleanup.
*/

#include "stdafx.h"
#include "Plugin.h"
#include "Vayne.h"

// Load our plugin
Plugin::Plugin()
{
	// The topmost menu parent is used for the configuration name so we want to make sure it's unique for each champion
	std::string szConfigName = std::string("Alqoholic - ") + GEntityList->Player()->ChampionName();

	Parent = GPluginSDK->AddMenu(szConfigName.c_str());		// Create a new tab in the menu
	Implementation = new Vayne(Parent);					// Load our plugin implementation
	LoadPluginEvents();										// Load our events;
}

// Unload our plugin
Plugin::~Plugin()
{
	UnloadPluginEvents();	// Remove our events
	Parent->Remove();		// Remove the menu

	delete Implementation;
}

void Plugin::_OnRender()
{
	Implementation->OnRender();
}

void Plugin::_OnGameUpdate()
{
	Implementation->OnGameUpdate();
}

void Plugin::_OnOrbwalkPreAttack(IUnit* Target)
{
	Implementation->OnOrbwalkPreAttack(Target, GOrbwalking->GetOrbwalkingMode());
}

void Plugin::_OnGapCloser(GapCloserSpell const& Args)
{
	Implementation->OnGapCloser(Args);
}

void Plugin::_OnInterruptible(InterruptibleSpell const& Args)
{
	Implementation->OnInterruptible(Args);
}

void Plugin::_OnProcessSpell(CastedSpell const& Args)
{
	Implementation->OnProcessSpell(Args);
}

PLUGIN_EVENTD(void) Plugin::OnRender()
{
	GPluginInstance->_OnRender();
}

PLUGIN_EVENTD(void) Plugin::OnGameUpdate()
{
	GPluginInstance->_OnGameUpdate();
}

PLUGIN_EVENTD(void) Plugin::OnOrbwalkPreAttack(IUnit* Args1)
{
	GPluginInstance->_OnOrbwalkPreAttack(Args1);
}

PLUGIN_EVENTD(void) Plugin::OnGapCloser(GapCloserSpell const& Args)
{
	GPluginInstance->_OnGapCloser(Args);
}

PLUGIN_EVENTD(void) Plugin::OnInterruptible(InterruptibleSpell const& Args)
{
	GPluginInstance->_OnInterruptible(Args);
}

PLUGIN_EVENTD(void) Plugin::OnProcessSpell(CastedSpell const& Args)
{
	GPluginInstance->_OnProcessSpell(Args);
}

void Plugin::LoadPluginEvents()
{
	GEventManager->AddEventHandler(kEventOnRender, OnRender);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->AddEventHandler(kEventOrbwalkBeforeAttack, OnOrbwalkPreAttack);
	GEventManager->AddEventHandler(kEventOnGapCloser, OnGapCloser);
	GEventManager->AddEventHandler(kEventOnInterruptible, OnInterruptible);
	GEventManager->AddEventHandler(kEventOnSpellCast, OnProcessSpell);
}

void Plugin::UnloadPluginEvents()
{
	GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->RemoveEventHandler(kEventOrbwalkBeforeAttack, OnOrbwalkPreAttack);
	GEventManager->RemoveEventHandler(kEventOnGapCloser, OnGapCloser);
	GEventManager->RemoveEventHandler(kEventOnInterruptible, OnInterruptible);
	GEventManager->RemoveEventHandler(kEventOnSpellCast, OnProcessSpell);
}