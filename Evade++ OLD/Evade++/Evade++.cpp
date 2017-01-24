#include "stdafx.h"
#include "Evade++.h"
#include "PluginSDK.h"
#include <string>

Evade::Evade(IMenu* Parent, IMenu* SpellsMenu)
{
	SpellsMenu = Parent->AddMenu("Spells");
	for (auto enemy : GEntityList->GetAllHeros(false, true))
	{
		for (auto i = 0; i < 4; i++)
		{
			Spells[i] = new Spell(SpellsMenu->AddMenu(enemy->GetSpellBook()->GetName(i)), enemy, i);
		}
	}
}

Evade::~Evade()
{
	for (auto enemy : GEntityList->GetAllHeros(false, true))
	{
		for (auto i = 0; i < 4; i++)
		{
			delete Spells[i];
		}
	}
}

void Evade::OnRender()
{
	for (auto spell : Spells)
	{
		spell->OnRender();
	}
}

void Evade::OnGameUpdate()
{

}

void Evade::OnProcessSpell(CastedSpell const& Args)
{
	for (auto spell : Spells)
		spell->OnProcessSpell(Args);
}