#include "title.h"

Title::Title()
{
	color = GetColor(255, 255, 255);
	isChange = FALSE;
}

Title::~Title()
{

}

void Title::Update()
{

	//if(isPresskey(KEY_INPUT_))
}

void Title::Draw()
{
	DrawString(pos.u, pos.v, "�^�C�g��", color);
}

int Title::SceneEnd()
{
	return 0;
}
