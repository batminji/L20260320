#pragma once

class UWorld;

class UEngine
{
public:
	UEngine();
	void Process();
	void Render();
	~UEngine();

	UWorld* World;
};

