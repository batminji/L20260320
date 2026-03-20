#include "Engine.h"

int main()
{
	UEngine* Engine = new UEngine();

	Engine->Process();
	Engine->Render();

	delete Engine;
	Engine = nullptr;

	return 0;
}