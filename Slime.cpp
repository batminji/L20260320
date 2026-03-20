#include "stdafx.h"

#include "Slime.h"

ASlime::ASlime()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void ASlime::Tick()
{
	std::cout << "ASlime::Tick" << std::endl;
}

ASlime::~ASlime()
{
}
