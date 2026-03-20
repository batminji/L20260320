#include "stdafx.h"

#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

UWorld::UWorld()
	: PlayerCounts(1), WildBoarCounts(rand() % 10 + 1), GoblinCounts(rand() % 10 + 1), SlimeCounts(rand() % 10 + 1), ActorCounts(PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts)
{
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors.emplace_back(new APlayer());
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors.emplace_back(new AWildBoar());
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors.emplace_back(new AGoblin());
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors.emplace_back(new ASlime());
	}
}

UWorld::UWorld(int InPlayerCounts, int InWildBoarCounts, int InGoblinCounts, int InSlimeCounts)
	: PlayerCounts(InPlayerCounts), WildBoarCounts(InWildBoarCounts), GoblinCounts(InGoblinCounts), SlimeCounts(InSlimeCounts), ActorCounts(PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts)
{
	for (int i = 0; i < PlayerCounts; ++i)
	{
		Actors.emplace_back(new APlayer());
	}
	for (int i = PlayerCounts; i < PlayerCounts + WildBoarCounts; ++i)
	{
		Actors.emplace_back(new AWildBoar());
	}
	for (int i = PlayerCounts + WildBoarCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts; ++i)
	{
		Actors.emplace_back(new AGoblin());
	}
	for (int i = PlayerCounts + WildBoarCounts + GoblinCounts; i < PlayerCounts + WildBoarCounts + GoblinCounts + SlimeCounts; ++i)
	{
		Actors.emplace_back(new ASlime());
	}
}

void UWorld::Process()
{
	for (AActor* & ActorRef : Actors)
	{
		ActorRef->Move();
	}
}

void UWorld::Render()
{
	for (AActor* & ActorRef : Actors)
	{
		ActorRef->Render();
	}
}

UWorld::~UWorld()
{
	for (AActor*& ActorRef : Actors)
	{
		delete ActorRef;
		ActorRef = nullptr;
	}
	Actors.clear();
}
