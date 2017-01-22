#include "pch.h"
#include "AlqoholicTemplate.h"

AlqoholicTemplate::AlqoholicTemplate(IMenu * Parent)
{

}

AlqoholicTemplate::~AlqoholicTemplate()
{
	
}

void AlqoholicTemplate::OnRender()
{
	auto pPluginMenu = GPluginSDK->AddMenu("Plugin Menu"); // Assigning the class IMenu to the pointer pPluginMenu
														   // Then Adding a menu through the SDK with the title

	pPluginMenu->CheckBox("Toggleable Option", false); // Creating a checkbox within the menu, the false means it will not be on by default
}

void AlqoholicTemplate::OnGameUpdate()
{
}

void AlqoholicTemplate::OnOrbwalk(IUnit * Target, int Mode)
{

}
