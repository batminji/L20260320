#include "stdafx.h"

#include "Player.h"

APlayer::APlayer()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;

	Gold = 10;

	Mesh = 0;
}

void APlayer::Move()
{
	std::cout << "Player Move" << std::endl;
	AddActorLocalOffset();
}

void APlayer::Attack()
{
}

void APlayer::Damaged()
{
}

void APlayer::CollectGold(int Gold)
{
}

int APlayer::GetGold()
{
	return Gold;
}

void APlayer::SetGold(int Gold)
{
	this->Gold = Gold;
}

APlayer::~APlayer()
{
}
