#include "Actor.h"

AActor::AActor()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Mesh = 0;
}

void AActor::AddActorLocalOffset()
{
}

void AActor::Render()
{
}

AActor::~AActor()
{
}
