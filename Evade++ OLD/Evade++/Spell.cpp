#include "stdafx.h"
#include "Spell.h"

Spell::Spell(IMenu* Parent, IUnit* Champion, int slot)
{
	LoadMenuOptions(Parent, Champion);
}

Spell::~Spell()
{
	
}

void Spell::OnGameUpdate()
{
	
}

void Spell::OnRender()
{
}

void Spell::OnProcessSpell(CastedSpell const& Args)
{
	
}

void Spell::LoadMenuOptions(IMenu * Parent, IUnit * Champion)
{
	for (auto db : Spells.Data)
	{
		if (!_stricmp(db.Champion, Champion->ChampionName()) && db.Slot == Skill->GetSpellSlot() && db.Dodgable == true)
		{
			ChampMenu = Parent->AddMenu(Champion->ChampionName());
		}
	}
}
