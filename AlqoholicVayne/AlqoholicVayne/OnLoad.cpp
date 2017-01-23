/*
OnLoad.cpp
- This handles the load and unload events automatically called.
- Simply use these events to construct and destruct our plugin wrapper class.
- The 'Plugin' class acts as our intermediary, processing all events.
- The 'AutoCarry' class manages all of our logic and receives all events.
- The 'Spell' class controls and processes the actual logic for each spell.
*/

// Include the plugin class which loads and unloads the menu and various events
#include "stdafx.h"
#include "Plugin.h"

// Initialize the plugin, name is irrelevant right now but will be used in the future
PluginSetup("AlqoholicVayne")

// Define the global plugin instance
Plugin* GPluginInstance = nullptr;

// This is the callback ran when the plugin is loaded, we'll use it to construct our 'Plugin' class
PLUGIN_API void OnLoad(IPluginSDK* PluginSDK)
{
	PluginSDKSetup(PluginSDK);
	GPluginInstance = new Plugin;
}

// This is the callback ran when the plugin is unloaded, we'll use it to destruct our 'Plugin' class
PLUGIN_API void OnUnload()
{
	delete GPluginInstance;
}