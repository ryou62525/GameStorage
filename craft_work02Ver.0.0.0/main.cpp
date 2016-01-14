#include "src/scene/sceneManager.h"
#include "src/scene/title.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	ChangeWindowMode(TRUE);
	SetGraphMode((int)Window::WIDTH, (int)Window::HEIGHT, GetColor(0, 0, 0));

	Title title;
	
	
		title.Draw();
	






	WaitKey();
	DxLib_End();
	return 0;
}