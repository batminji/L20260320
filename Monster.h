#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster();
	void Attack();
	void Damaged();
	void DropGold();
	~AMonster();

	int Gold;
};

