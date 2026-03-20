#pragma once
#include "Actor.h"
class APlayer : public AActor
{
public:
	APlayer();
	void Attack();
	void Damaged();
	void GetGold();
	~APlayer();

	int Gold;
};

