#include "stdafx.h"
#include "PluginSDK.h"

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

PluginSetup("Alqoholic Vayne - Alqohol");

IMenu* MainMenu;
IMenu* QMenu;
IMenu* WMenu;
IMenu* EMenu;
IMenu* RMenu;
IMenu* Misc;
IMenu* Drawings;
IMenuOption* ComboQ;
IMenuOption* FocusW;
IMenuOption* ComboE;
IMenuOption* AutoE;
IMenuOption* EGapCloser;
IMenuOption* AutoR;
IMenuOption* AutoREnemies;
IMenuOption* DrawReady;
IMenuOption* DrawQ;
IMenuOption* DrawE;

ISpell2* Q;
ISpell2* W;
ISpell2* E;
ISpell2* R;

void DrawMenu()
{
	MainMenu = GPluginSDK->AddMenu("Alqoholic Vayne");
	QMenu = MainMenu->AddMenu("Q Settings");
	WMenu = MainMenu->AddMenu("W Settings");
	EMenu = MainMenu->AddMenu("E Settings");
	RMenu = MainMenu->AddMenu("R Settings");
	Drawings = MainMenu->AddMenu("Drawings");

	ComboQ = QMenu->CheckBox("Use Q", true);

	FocusW = WMenu->CheckBox("Focus W Stacks", true);

	ComboE = EMenu->CheckBox("Use E", true);
	AutoE = EMenu->CheckBox("Auto Condemn", true);
	EGapCloser = EMenu->CheckBox("Auto Anti-GapCloser", true);

	AutoR = RMenu->CheckBox("Auto R when enemies >= x", true);
	AutoREnemies = RMenu->AddInteger("Enemies in range", 1, 5, 2);
	DrawReady = Drawings->CheckBox("Draw Only Ready Spells", true);

	DrawQ = Drawings->CheckBox("Draw Q", true);
	DrawE = Drawings->CheckBox("Draw E", true);
}

void LoadSpells()
{
	Q = GPluginSDK->CreateSpell2(kSlotQ, kLineCast, false, false, kCollidesWithNothing);
	W = GPluginSDK->CreateSpell2(kSlotW, kCircleCast, false, false, kCollidesWithNothing);
	E = GPluginSDK->CreateSpell2(kSlotE, kTargetCast, true, false, kCollidesWithNothing);
	R = GPluginSDK->CreateSpell2(kSlotR, kCircleCast, false, false, kCollidesWithNothing);
	Q->SetOverrideRange(300);
	E->SetOverrideRange(750);
}

float DegreeToRadian(double angle)
{
	return float(M_PI * angle / 180.0);
}

Vec3 GetSafeSpace()
{
	const auto angle = 30.f;
	auto direction = GEntityList->Player()->Direction().To2D().Perpendicular(0);

	// ReSharper disable CppUnreachableCode
	for (auto i = 0.f; i < 40.f; i += angle)
	// ReSharper restore CppUnreachableCode
	{
		auto angleRad = DegreeToRadian(i);
		auto rotatedPosition = GEntityList->Player()->GetPosition().To2D() + (300.f * direction.Rotate(angleRad));
		auto safePos = Vec3(rotatedPosition.x, rotatedPosition.y, GEntityList->Player()->ServerPosition().y);

		return safePos;
	}
	return Vec3(0, 0, 0);
}

int GetEnemiesInRange(float range)
{
	auto enemies = GEntityList->GetAllHeros(false, true);
	auto enemiesInRange = 0;

	for (auto enemy : enemies)
	{
		if (enemy != nullptr && enemy->GetTeam() != GEntityList->Player()->GetTeam())
		{
			auto flDistance = (enemy->GetPosition() - GEntityList->Player()->GetPosition()).Length();
			if (flDistance < range)
			{
				enemiesInRange++;
			}
		}
	}
	return enemiesInRange;
}

IUnit* GetTargetWithW()
{
	for (auto enemy : GEntityList->GetAllHeros(false, true))
	{
		if (enemy->GetBuffDataByName("VayneSilveredDebuff")
			&& enemy->GetTeam() != GEntityList->Player()->GetTeam()
			&& enemy->GetPosition().DistanceTo(GEntityList->Player()->GetPosition()) < GEntityList->Player()->AttackRange())
		{
			return enemy;
		}
	}
	return GTargetSelector->FindTarget(QuickestKill, PhysicalDamage, GEntityList->Player()->AttackRange());
}

void AutoCondemn()
{
	for (auto enemy : GEntityList->GetAllHeros(false, true))
	{
		if (enemy != nullptr && enemy->GetTeam() != GEntityList->Player()->GetTeam() && GEntityList->Player()->IsValidTarget(enemy, E->Range()))
		{
			auto flDistance = (enemy->GetPosition() - GEntityList->Player()->GetPosition()).Length();

			if (flDistance > E->Range()) { return; }

			float pushDistance = 415;
			float forty = 40;
			auto targetPosition = enemy->ServerPosition();
			auto checkDistance = pushDistance / forty;
			auto pushDirection = (targetPosition - GEntityList->Player()->ServerPosition()).VectorNormalize();
			for (auto i = 0; i < 40; i++)
			{
				auto finalPos = targetPosition + (pushDirection * checkDistance * i);
				if (GPrediction->IsPointWall(finalPos))
				{
					E->CastOnUnit(enemy);
				}
			}
		}
	}
}

#pragma region Events
void Combo()
{
	if (FocusW->Enabled())
	{
		GOrbwalking->SetOverrideTarget(GetTargetWithW());
	}
																																							/*UGLY I KNOW :(*/
	if (ComboQ->Enabled() && Q->IsReady() && GetEnemiesInRange(GEntityList->Player()->AttackRange()) >= 1) // && GEntityList->Player()->GetCharacterState() != State_CanAttack)
	{
		Q->CastOnPosition(GGame->CursorPosition());
	}

	if (AutoE->Enabled() && E->IsReady())
	{
		AutoCondemn();
	}

	if (AutoR->Enabled() && R->IsReady() && GOrbwalking->GetOrbwalkingMode() == kModeCombo)
	{
		if (GetEnemiesInRange(800) >= AutoREnemies->GetInteger())
		{
			R->CastOnPlayer();
		}
	}
}

PLUGIN_EVENT(void) OnGameUpdate()
{
	if (GOrbwalking->GetOrbwalkingMode() == kModeCombo)
	{
		Combo();
	}
}

PLUGIN_EVENT(void) OnRender()
{
	if (DrawReady->Enabled())
	{
		if (Q->IsReady() && DrawQ->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), Q->Range()); }

		if (E->IsReady() && DrawE->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), E->Range()); }
	}
	else
	{
		if (DrawQ->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), Q->Range()); }

		if (DrawE->Enabled()) { GRender->DrawOutlinedCircle(GEntityList->Player()->GetPosition(), Vec4(255, 255, 0, 255), E->Range()); }
	}
}

PLUGIN_EVENT(void) OnGapCloser(GapCloserSpell const& Args)
{
	if (Args.Sender != GEntityList->Player()
		&& Args.Sender->GetTeam() != GEntityList->Player()->GetTeam()
		&& GEntityList->Player()->IsValidTarget(Args.Sender, E->Range())
		&& EGapCloser->Enabled() && E->IsReady())
	{
		E->CastOnUnit(Args.Sender);
	}
}

PLUGIN_EVENT(void) AfterAttack(IUnit* Source, IUnit* Target) // FIX ME PLEASE OPTIX
{
	/*if (Source == GEntityList->Player())
	{
		if (ComboQ->Enabled() && Q->IsReady() && GOrbwalking->GetOrbwalkingMode() == kModeCombo)
		{
			Q->CastOnPosition(GGame->CursorPosition());
		}
	}*/
}

// Called when issuing an order (e.g move, attack, etc.)
// Return false to stop order from executing
PLUGIN_EVENT(bool) OnIssueOrder(IUnit* Source, DWORD OrderIdx, Vec3* Position, IUnit* Target)
{
	return true;
}
#pragma endregion

// Called when plugin is first loaded
PLUGIN_API void OnLoad(IPluginSDK* PluginSDK)
{
	// Initializes global interfaces for core access
	PluginSDKSetup(PluginSDK);
	DrawMenu();
	LoadSpells();

	GEventManager->AddEventHandler(kEventOrbwalkAfterAttack, AfterAttack);
	GEventManager->AddEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->AddEventHandler(kEventOnRender, OnRender);
	GEventManager->AddEventHandler(kEventOnGapCloser, OnGapCloser);
}

// Called when plugin is unloaded
PLUGIN_API void OnUnload()
{
	MainMenu->Remove();

	GEventManager->RemoveEventHandler(kEventOrbwalkAfterAttack, AfterAttack);
	GEventManager->RemoveEventHandler(kEventOnGameUpdate, OnGameUpdate);
	GEventManager->RemoveEventHandler(kEventOnRender, OnRender);
	GEventManager->RemoveEventHandler(kEventOnGapCloser, OnGapCloser);
}