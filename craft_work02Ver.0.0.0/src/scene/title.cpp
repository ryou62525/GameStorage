#include "title.h"

Title::Title()
{
	isChange = FALSE;
	isEnd = FALSE;
}

Title::~Title()
{

}

void Title::Update()
{

	if (isPresskey(KEY_INPUT_SPACE))
	{
		isEnd = TRUE;
	}
}

void Title::Draw()
{
	DrawString(pos.u, pos.v, "�^�C�g��", fontColor);
}

int Title::SceneEnd()
{
	if (isEnd == TRUE)
	{
		return (int)SceneID::MENU;
	}
	return (int)SceneID::TITLE;
}
