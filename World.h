#pragma once
#include <vector>
class AActor;

class UWorld
{
public:
	UWorld();
	UWorld(int InPlayerCounts, int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts);
	void Process();
	void Render();
	~UWorld();

private:
	int PlayerCounts;
	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;
	int ActorCounts;

	// AActor** Actors;
	std::vector<AActor*> Actors;
};

