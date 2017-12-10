#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Renderer.h"
#include <vector>

class Scene
{
public:
	Scene();
	~Scene();
	virtual void Run();
	virtual void Update();
	virtual void Draw();
	virtual void HandleEvents();
};

