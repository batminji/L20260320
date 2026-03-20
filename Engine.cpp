#include "Engine.h"
#include "World.h"

UEngine::UEngine()
{
	World = new UWorld();
}

void UEngine::Process()
{
	World->Process();
}

void UEngine::Render()
{
	World->Render();
}

UEngine::~UEngine()
{
	delete World;
	World = nullptr;
}
