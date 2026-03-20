#pragma once
#include "Actor.h"
class AMonster : public AActor
{
public:
	AMonster();
	virtual void Tick() override;
	void Attack();
	void Damaged();
	void DropGold();
	~AMonster();

protected:
	int Gold;
};

