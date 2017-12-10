#include "Menu.h"



Menu::Menu()
{
	//renderer->LoadTexture(MENU_BG, PATH_IMG + "bg.jpg");

	//renderer->PushImage(MENU_BG, SDL_Rect{ 0,0,SCREEN_WIDTH, SCREEN_HEIGHT });
	Run();
}


Menu::~Menu()
{
}

void Menu::Run()
{
	std::cout << "bucle de la escena" << std::endl;
	while (true) {
		Draw();
	}
}

void Menu::Update()
{
}

void Menu::Draw()
{
	
}

void Menu::HandleEvents()
{
}

void Menu::Play()
{
}

void Menu::Exit()
{
}

void Menu::Ranking()
{
}
