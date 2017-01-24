#pragma once

#include "Vector3.h"
#include "PluginData.h"
#include "PluginSDK.h"
#include "SpellData.h"

enum SkillShotType
{
	SkillshotCircle,
	SkillshotLine,
	SkillshotMissileLine,
	SkillshotCone,
	SkillshotMissileCone,
	SkillshotRing,
	SkillshotArc,
};

enum DetectionType
{
	RecvPacket,
	ProcessSpell,
};

struct FoundIntersection
{
	Vec2 ComingFrom;
	float Distance;
	Vec2 Point;
	int Time;
	bool Valid;
	FoundIntersection() : Distance(0), Time(0), Valid(false)
	{

	}

	FoundIntersection(float distance, int time, Vec2 point, Vec2 comingFrom)
	{
		Distance = distance;
		ComingFrom = comingFrom;
		Valid = (point.x != 0) && (point.y != 0);
		//Point = point + Config.GridSize + (ComingFrom - point).VectorNormalize();
		Time = time;
	}
};

struct SafePathResult
{
	FoundIntersection Intersection;
	bool IsSafe;

	SafePathResult(bool isSafe, FoundIntersection intersection)
	{
		IsSafe = isSafe;
		Intersection = intersection;
	}
};

class Skillshot
{
public:
	Skillshot(DetectionType detectionType, SpellData spellData, int startT, Vec2 start, Vec2 end, IUnit* unit);
	bool IsGlobal() { return SpellData.RawRange == 20000; }
	Vec2 Perpendicular() { return Direction.Perpendicular(); }
	Vec2 CollisionEnd()
	{
		if (_collisionEnd.IsValid())
		{
			return _collisionEnd;
		}

		if (IsGlobal)
		{
			return GlobalGetMissilePosition(0) +
				Direction * SpellData.MissileSpeed *
				(0.5f + SpellData.Radius * 2 / GEntityList->Player()->MovementSpeed());
		}

		return End;
	}
	IUnit* Unit;
	bool IsActive()
	{
		if (SpellData.MissileAccel != 0)
		{
			return Utils.TickCount <= StartTick + 5000;
		}

		return Utils.TickCount <= StartTick
		+ SpellData.Delay
		+ SpellData.ExtraDuration + 1000 * (Start.Distance(End) / SpellData.MissileSpeed);
	}

	SafePathResult IsSafePath(NavigationPath path, int timeOffset, int speed = -1, int delay = 0, IUnit* unit = nullptr);
	//Geometry.Circle Circle;
	DetectionType DetectionType;
	Vec2 Direction;
	//Geometry.Polygon DrawingPolygon;

	Vec2 OriginalEnd;
	Vec2 End;

	bool ForceDisabled;
	Vec2 MissilePosition;
	/*Geometry.Polygon Polygon;
	Geometry.Rectangle Rectangle;
	Geometry.Ring Ring;
	Geometry.Arc Arc;
	Geometry.Sector Sector;*/

	SpellData SpellData;
	Vec2 Start;
	int StartTick;


private:
	int _helperTick;
	bool _cachedValue;
	int _cachedValueTick;
	Vec2 _collisionEnd;
	int _lastCollisionCalc;
};
