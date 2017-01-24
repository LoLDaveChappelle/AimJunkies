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
}
