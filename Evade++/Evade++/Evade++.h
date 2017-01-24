#pragma once

#include <vector>
#include "Vector3.h"
#include "PluginSDK.h"
#include "Skillshot.h"

class Evade
{
public:
	struct IsSafeResult
	{
		bool IsSafe;
		std::vector<Skillshot> SkillshotList;
	};

	std::vector<Skillshot> DetectedSkillshots;
	bool NoSolutionFound;
	Vec2 EvadeToPoint;
	int LastWardJumpAttempt;
	Vec2 PreviousTickPosition;
	Vec2 PlayerPosition;
	std::string PlayerChampionName;
	bool Evading() const { return _evading; }
	void Evading(bool Evading)
	{
		if (Evading == true)
		{
			ForcePathFollowing = true;
			LastSentMovePacketT = 0;
			//GGame->IssueOrder(GEntityList->Player(), kMoveTo, EvadePoint);
		}

		_evading = Evading;
	}
	Vec2 EvadePoint() const { return _evadePoint; }
	void EvadePoint(Vec2 EvadePoint)
	{
		_evadePoint = EvadePoint;
	}

	IsSafeResult IsSafe(Vec2 point);
	SafePathResult IsSafePath(NavigationPath path, int timeOffset, int speed = -1, int delay = 0, IUnit* unit = nullptr);
	bool IsSafeToBlink(Vec2 point, int timeOffset, int delay);
	bool IsAboutToHit(IUnit* unit, int time);
	

private:
	bool _evading;
	Vec2 _evadePoint;
	int LastSentMovePacketT;
	int LastSentMovePacketT2;
	int LastSMovePacketT;
	bool ForcePathFollowing;

	void OnGameStart();
	void OnGameUpdate();
	void OnRender();
	void DetectedSkillshots_OnAdd(IUnit* sender);
	void SkillshotDetectorOnOnDeleteMissile(Skillshot skillshot, IMissileData* missile);
	void OnDetectSkillshot(Skillshot skillshot);
	void Spellbool_OnCastSpell(ISpellBook* sender, CastedSpell args);
	void ObjAiHeroOnOnIssueOrder(IUnit* sender, eGameObjectOrder args);
	void UnitOnOnDash(IUnit* sender, UnitDash dash);
	void TryToEvade(std::vector<Skillshot> HitBy, Vec2 to);


};
