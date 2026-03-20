#pragma once
#include "Monster.h"
class AWildBoar : public AMonster
{
public:
	AWildBoar();
	virtual void Tick() override;
	~AWildBoar();
};

