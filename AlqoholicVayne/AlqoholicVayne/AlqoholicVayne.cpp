#include "pch.h"
#include "AlqoholicVayne.h"
#include "Plugin.h"

AlqoholicVayne::AlqoholicVayne(IMenu* Parent)
{
	Q = GPluginSDK->CreateSpell2(kSlotQ, kLineCast, false, false, kCollidesWithWalls);
	W = GPluginSDK->CreateSpell2(kSlotW, kCircleCast, false, false, kCollidesWithNothing);
	E = GPluginSDK->CreateSpell2(kSlotE, kTargetCast, true, false, kCollidesWithNothing);
	R = GPluginSDK->CreateSpell2(kSlotR, kCircleCast, false, false, kCollidesWithNothing);
}

AlqoholicVayne::~AlqoholicVayne()
{
}

void AlqoholicVayne::OnRender() const
{
	if (Menu.DrawReady->Enabled())
	{
		if (Q->IsReady() && Menu.DrawQ->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), Q->Range()); }

		if (E->IsReady() && Menu.DrawE->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), E->Range()); }
	}
	else
	{
		if (Menu.DrawQ->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), Q->Range()); }

		if (Menu.DrawE->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), E->Range()); }
	}
}

void AlqoholicVayne::OnGameUpdate() const
{
	OnOrbwalk(GOrbwalking->GetLastTarget(), GOrbwalking->GetOrbwalkingMode());

	if (GOrbwalking->GetOrbwalkingMode() == kModeCombo || GOrbwalking->GetOrbwalkingMode() == kModeLastHit)
	{
		OnOrbwalkAfterAttack(GEntityList->Player(), GOrbwalking->GetLastTarget());
	}
}

void AlqoholicVayne::OnOrbwalk(IUnit * Target, int Mode) const
{
	auto autoE = Menu.AutoE->Enabled();
	auto autoR = Menu.AutoR->Enabled();
	auto autoREnemies = Menu.AutoREnemies->GetInteger();

	if (autoE && E->IsReady())
	{
		AutoCondemn();
	}

	if (autoR && R->IsReady() && GOrbwalking->GetOrbwalkingMode() == kModeCombo)
	{
		if (GetEnemiesInRange(600) >= autoREnemies)
		{
			R->CastOnPlayer();
		}
	}
}

void AlqoholicVayne::OnOrbwalkAfterAttack(IUnit * Source, IUnit * Target) const
{
	auto comboQ = Menu.ComboQ->Enabled();
	auto lastHitQ = Menu.LastHitQ->Enabled();
	auto comboE = Menu.ComboE->Enabled();

	if (GOrbwalking->GetOrbwalkingMode() == kModeCombo)
	{
		if (comboE && E->IsReady())
		{
			AutoCondemn();
		}
		else if (comboQ && Q->IsReady())
		{
			Q->CastOnPosition(GGame->CursorPosition());
		}
	}

	if (GOrbwalking->GetOrbwalkingMode() == kModeLastHit)
	{
		if (lastHitQ && Q->IsReady() && Target->GetHealth() < GDamage->GetSpellDamage(GEntityList->Player(), Target, kSlotQ))
		{
			Q->CastOnPosition(GGame->CursorPosition());
		}
	}
}

int AlqoholicVayne::GetEnemiesInRange(float range)
{
	auto enemies = GEntityList->GetAllHeros(false, true);
	auto enemiesInRange = 0;

	for (auto enemy : enemies)
	{
		if (enemy != nullptr && enemy->GetPosition().Compare(GEntityList->Player()->GetPosition()) <= range)
		{
			enemiesInRange++;
		}
	}
	return enemiesInRange;
}

void AlqoholicVayne::AutoCondemn() const
{
	for (auto enemy : GEntityList->GetAllHeros(false, true))
	{
		if (enemy != nullptr && enemy->GetPosition().Compare(GEntityList->Player()->GetPosition()) <= E->Range())
		{
			auto pushDistance = 415;
			auto targetPosition = enemy->ServerPosition();
			float checkDistance = pushDistance / 40;
			auto pushDirection = (targetPosition - GEntityList->Player()->ServerPosition()).VectorNormalize();
			for (auto i = 0; i < 40; i++)
			{
				auto finalPos = targetPosition + (pushDirection * checkDistance * i);
				if (GPrediction->IsPointWall(finalPos))
				{
					E->CastOnTarget(enemy);
				}
			}
		}
	}
}
