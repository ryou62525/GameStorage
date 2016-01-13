#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	
	ChangeWindowMode(TRUE);
	SetGraphMode(640, 480, GetColor(0, 0, 0));

	DrawBox(0, 0, 32, 32, GetColor(255, 255, 255), TRUE);

	WaitKey();
	DxLib_End();

	return 0;
}