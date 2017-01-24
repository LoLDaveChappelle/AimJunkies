#pragma once

#include "Vector3.h"
#include "PluginData.h"

class Skillshot
{
public:
	struct FoundIntersection
	{
		Vec2 ComingFrom;
		float Distance;
		Vec2 Point;
		int Time;
		bool Valid;
		FoundIntersection(): Distance(0), Time(0), Valid(false) {
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

public:
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

	SafePathResult IsSafePath(NavigationPath path, int timeOffset, int speed = -1, int delay = 0, IUnit* unit = nullptr);
};
