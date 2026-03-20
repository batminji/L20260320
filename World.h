#pragma once
#include "Player.h"

class APlayer;
class AMonster;

class UWorld
{
public:
	UWorld();
	UWorld(int WildBoarCounts, int GoblinCounts, int SlimeCounts);
	void Process();
	void Render();
	~UWorld();

private:
	int WildBoarCounts;
	int GoblinCounts;
	int SlimeCounts;
	int MonsterCounts;

	APlayer* Player;
	AMonster** Monsters;
};

