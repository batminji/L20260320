#pragma once

struct FVector2D
{
	int X;
	int Y;
};

struct FTransform
{
	FVector2D Location;
	FVector2D Scale;
};

class AActor
{
public:
	AActor();
	void AddActorLocalOffset();
	void Render();

	FTransform GetTransform();
	void SetTransform(FTransform Transform);

	FVector2D GetLocation();
	void SetLocation(FVector2D Location);

	FVector2D GetScale();
	void SetScale(FVector2D Scale);

	~AActor();

protected:
	FTransform Transform;
	int Mesh;
};

