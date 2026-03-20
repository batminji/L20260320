#pragma once
#include "Monster.h"
class AGoblin : public AMonster
{
public:
	AGoblin();
	virtual void Tick() override;
	~AGoblin();
};