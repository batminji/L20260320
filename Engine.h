#pragma once

class UWorld;

class UEngine
{
public:
	UEngine();

	void Initialize();
	void Run();
	void Terminate();

	~UEngine();

	void Input();
	void Tick();
	void Render();

	UWorld* World;

	bool bIsRunning;
};

