#include "../src/scene/sceneManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	ChangeWindowMode(TRUE);
	SetDrawScreen(DX_SCREEN_BACK);
	SetGraphMode((int)Window::WIDTH, (int)Window::HEIGHT, GetColor(0, 0, 0));

	SceneManager sceneManager;
	int currentScene = (int)SceneID::NON;
	int nextScene = (int)SceneID::TITLE;
	
	char key[256];

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && GetHitKeyStateAll(key) == 0)
	{
		ClearDrawScreen();

		if (nextScene != currentScene)
		{
			currentScene = nextScene;
			sceneManager.SetScene(currentScene);
		}

		sceneManager.Update();
		sceneManager.Draw();

		nextScene = sceneManager.SceneEnd();

		if (isPresskey(KEY_INPUT_ESCAPE))
		{
			DxLib_End();
		}
	}

	return 0;
}