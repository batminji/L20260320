#pragma once
#include <vector>
class AActor;

class UWorld
{
public:
	UWorld();
	UWorld(int InPlayerCounts, int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts);

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

