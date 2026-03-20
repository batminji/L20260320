#include "stdafx.h"

#include "WildBoar.h"

AWildBoar::AWildBoar()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void AWildBoar::Move()
{
	std::cout << "WildBoar Move" << std::endl;
	AddActorLocalOffset();
}

AWildBoar::~AWildBoar()
{
}
