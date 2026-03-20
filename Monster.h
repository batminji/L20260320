#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster();
	virtual void Move();
	void Attack();
	void Damaged();
	void DropGold();
	~AMonster();

protected:
	int Gold;
};

