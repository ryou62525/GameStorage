#include "sceneManager.h"

SceneManager::SceneManager()
{
	currentScene = new Title;
}

SceneManager::~SceneManager()
{

}

void SceneManager::Update()
{
	currentScene->Update();
}

void SceneManager::Draw()
{
	currentScene->Draw();
}

void SceneManager::SetScene(int sceneName)
{
	if(sceneName != (int)SceneID::TITLE){/*bgmˆ—‚¢‚ê‚é*/}

	switch (sceneName)
	{
	case (int)SceneID::TITLE:

		DeleteScene();
		currentScene = new Title;

		break;
	case (int)SceneID::MENU:

		DeleteScene();
		currentScene = new Menu;

		break;
	case (int)SceneID::GAME:

		DeleteScene();
		currentScene = new GameMain;

		break;
	case (int)SceneID::RESULT:

		DeleteScene();
		currentScene = new Result;

		break;
	default:
		break;
	}
}

void SceneManager::DeleteScene()
{
	delete currentScene;
}

int SceneManager::SceneEnd()
{
	return currentScene->SceneEnd();
}