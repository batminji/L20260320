#pragma once
#include <vector>
class AActor;

class UWorld
{
public:
	UWorld();
	UWorld(const int InPlayerCounts, const int InWildBoarCounts, const int InGoblinCounts, const int InSlimeCounts);

	virtual void Tick();
	virtual void Render();

	~UWorld();

private:
	std::vector<AActor*> Actors;

	int PlayerCounts;
	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;
	int ActorCounts;
};

