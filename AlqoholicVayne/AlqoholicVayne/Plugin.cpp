#include "pch.h"
#include "Plugin.h"
#include "AlqoholicVayne.h"

Plugin::Plugin()
{
	LoadMenu();
	LoadPluginEvents();
	Implementation = new AlqoholicVayne(Parent);
	IGame* pGame = nullptr;
	pGame->PrintChat("[Alqoholic Vayne] Loaded");
}

Plugin::~Plugin()
{
	UnloadPluginEvents();
	Parent->Remove();

	delete Implementation;
}

void Plugin::_OnRender() const 
{
	Implementation->OnRender();
}

void Plugin::_OnGameUpdate() const 
{
	Implementation->OnGameUpdate();
}

void Plugin::_OnOrbwalkAfterAttack(IUnit * source, IUnit * target) const 
{
	Implementation->OnOrbwalkAfterAttack(source, target);
}

PLUGIN_EVENTD(void) Plugin::OnRender()
{
	GPluginInstance->_OnRender();
}

PLUGIN_EVENTD(void) Plugin::OnGameUpdate()
{
	GPluginInstance->_OnGameUpdate();
}

PLUGIN_EVENTD(void) Plugin::OnOrbwalkAfterAttack(IUnit * Source, IUnit * Target)
{
	GPluginInstance->_OnOrbwalkAfterAttack(Source, Target);
}

void Plugin::LoadMenu()
{
	Parent = GPluginSDK->AddMenu("Alqoholic - Vayne");

	QSettings = Parent->AddMenu("Q Settings");
	Menu.ComboQ = QSettings->CheckBox("Use in Combo", true);
	Menu.LastHitQ = QSettings->CheckBox("Use in Last Hit", true);

	WSettings = Parent->AddMenu("W Settings");

	ESettings = Parent->AddMenu("E Settings");
	Menu.ComboE = ESettings->CheckBox("Use in Combo", true);
	Menu.AutoE = ESettings->CheckBox("Auto E", true);

	RSettings = Parent->AddMenu("R Settings");
	Menu.AutoR = RSettings->CheckBox("Auto R in Combo", true);
	Menu.AutoREnemies = RSettings->AddInteger("When Enemies >= x", 1, 5, 2);

	Misc = Parent->AddMenu("Misc");

	Drawings = Parent->AddMenu("Drawings");
	Menu.DrawReady = Drawings->CheckBox("Draw Only Ready", true);
	Menu.DrawQ = Drawings->CheckBox("Draw Q", true);
	Menu.DrawE = Drawings->CheckBox("Draw E", true);
}

void Plugin::LoadPluginEvents()
{
	GEventManager->AddEventHandler(kEventOnRender, OnRender);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->AddEventHandler(kEventOrbwalkAfterAttack, OnOrbwalkAfterAttack);
}

void Plugin::UnloadPluginEvents()
{
	GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->RemoveEventHandler(kEventOrbwalkAfterAttack, OnOrbwalkAfterAttack);
}
