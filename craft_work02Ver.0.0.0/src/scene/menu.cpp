#include "menu.h"

Menu::Menu()
{
	isEnd = FALSE;
}

Menu::~Menu()
{

}

void Menu::Update()
{
	if (isPresskey(KEY_INPUT_SPACE))
	{
		isEnd = TRUE;
	}
}

void Menu::Draw()
{
	DrawString(pos.u, pos.v, "ƒƒjƒ…[", fontColor);
}

int Menu::SceneEnd()
{
	if (isEnd == TRUE)
	{
		return (int)SceneID::GAME;
	}
	return (int)SceneID::MENU;
}
