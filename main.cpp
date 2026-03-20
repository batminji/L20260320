#include "World.h"

int main()
{
	UWorld* World = new UWorld();

	World->Process();
	World->Render();

	delete World;
	World = nullptr;

	return 0;
}