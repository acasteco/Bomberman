#include "Game.h"
#include "Renderer.h"


Game::Game()
{
	Renderer::Instance()->LoadFont({ texto_40, PATH_FONT, 40 });
	Text play{ MENU_TEXT_BUTTON_PLAY, "PLAY", {0,255,50,60},0,0 };//los dos ultimos 0 son obligatorios
	Renderer::Instance()->LoadTextureText(texto_40, play);

	Renderer::Instance()->LoadTexture(MENU_BG, PATH_IMG);
}


Game::~Game()
{
}
