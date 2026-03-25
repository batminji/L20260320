#include "stdafx.h"

#include "Actor.h"

AActor::AActor()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Mesh = 0;
}

void AActor::Begin()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
}

const FTransform AActor::GetTransform()
{
	return Transform;
}

void AActor::SetTransform(const FTransform Transform)
{
	this->Transform = Transform;
}

const FVector2D AActor::GetLocation()
{
	return Transform.Location;
}

void AActor::SetLocation(const FVector2D Location)
{
	Transform.Location = Location;
}

const FVector2D AActor::GetScale()
{
	return Transform.Scale;
}

void AActor::SetScale(const FVector2D Scale)
{
	Transform.Scale = Scale;
}

AActor::~AActor()
{
}
