#pragma once
#include "Monster.h"
class AGoblin : public AMonster
{
public:
	AGoblin();
	virtual void Move() override;
	~AGoblin();
};