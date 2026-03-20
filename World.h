#pragma once
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

class UWorld
{
public:
	UWorld();
	void Process();
	void Render();
	~UWorld();

	APlayer* Player;
	AWildBoar* WildBoars;
	AGoblin* Goblins;
	ASlime* Slimes;
};

