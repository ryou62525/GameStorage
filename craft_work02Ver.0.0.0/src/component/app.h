#pragma once
#include "DxLib.h"

static bool isPresskey(const int buttonType)
{
	if (CheckHitKey(buttonType))
	{
		return TRUE;
	}
	return FALSE;
}