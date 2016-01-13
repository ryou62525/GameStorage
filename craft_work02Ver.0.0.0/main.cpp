#include "src/scene/sceneManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	ChangeWindowMode(TRUE);
	SetGraphMode(640, 480, GetColor(0, 0, 0));


	







	WaitKey();
	DxLib_End();
	return 0;
}