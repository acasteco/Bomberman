#pragma once
#include "Scene.h"
class Menu :
	public Scene
{
public:
	Menu();
	~Menu();
	void Run() override;
	void Update() override;
	void Draw() override;
	void HandleEvents() override;
	void Play();
	void Exit();
	void Ranking();
private:
	Renderer* renderer;
};

