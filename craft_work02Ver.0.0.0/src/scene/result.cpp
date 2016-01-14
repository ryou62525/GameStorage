#include "result.h"

Result::Result()
{
	isEnd = FALSE;
}

Result::~Result()
{

}

void Result::Update()
{
	if (isPresskey(KEY_INPUT_SPACE))
	{
		isEnd = TRUE;
	}
}

void Result::Draw()
{
	DrawString(pos.u, pos.v, "ƒŠƒUƒ‹ƒg", fontColor);
}

int Result::SceneEnd()
{
	if (isEnd == TRUE)
	{
		return (int)SceneID::TITLE;
	}
	return (int)SceneID::RESULT;
}
