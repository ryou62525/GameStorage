#include "gameMain.h"

GameMain::GameMain()
{
	pos.u = 0, pos.v = 0;
	gameManager = new GameManager;
}

GameMain::~GameMain()
{
	delete gameManager;
}

void GameMain::Update()
{
	if (isPresskey(KEY_INPUT_SPACE))
	{
		isEnd = TRUE;
	}
}

void GameMain::Draw()
{
	DrawString(pos.u, pos.v, "ƒQ[ƒ€ƒƒCƒ“", fontColor);
}

int GameMain::SceneEnd()
{
	if (isEnd == TRUE)
	{
		return (int)SceneID::RESULT;
	}
	return (int)SceneID::GAME;
}
