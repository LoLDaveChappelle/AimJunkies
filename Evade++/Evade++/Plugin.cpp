#include "stdafx.h"
#include "Plugin.h"
#include "Evade++.h"

Plugin::Plugin()
{
	auto ConfigName = std::string("Evade++");

	Parent = GPluginSDK->AddMenu(ConfigName.c_str());
	Implmentation = new Evade(Parent, SpellsMenu);
	LoadPluginEvents();
}

Plugin::~Plugin()
{
	UnloadPluginEvents();
	Parent->Remove();

	delete Implmentation;
}

void Plugin::_OnRender()
{
	Implmentation->OnRender();
}

void Plugin::_OnGameUpdate()
{
	Implmentation->OnGameUpdate();
}

void Plugin::_OnProcessSpells(CastedSpell const& Args)
{
	Implmentation->OnProcessSpell(Args);
}

PLUGIN_EVENTD(void) Plugin::OnRender()
{
	GPluginInstance->_OnRender();
}

PLUGIN_EVENTD(void) Plugin::OnGameUpdate()
{
	GPluginInstance->_OnGameUpdate();
}

PLUGIN_EVENTD(void) Plugin::OnProcessSpell(CastedSpell const& Args)
{
	GPluginInstance->_OnProcessSpells(Args);
}

void Plugin::LoadPluginEvents()
{
	GEventManager->AddEventHandler(kEventOnRender, OnRender);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->AddEventHandler(kEventOnSpellCast, OnProcessSpell);
}

void Plugin::UnloadPluginEvents()
{
	GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->RemoveEventHandler(kEventOnSpellCast, OnProcessSpell);
}
