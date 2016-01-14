#include "function.h"

Function::Function()
{

}

Function::~Function()
{

}

void Function::Setup()
{

}

void Function::Update()
{

}

void Function::drawBackground(float pos_x, float pos_y, float size_x, float size_y, int image)
{
	DrawModiGraph(pos_x, pos_y, pos_x + size_x, pos_y, pos_x + size_x, pos_y + size_y, pos_x, pos_y + size_y, image, TRUE);
}

bool Function::isPressKey(const int button_type)
{
	if (CheckHitKey(button_type))
	{
		return true;
	}
	return false;
}
