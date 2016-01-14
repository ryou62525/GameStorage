#pragma once
#include "title.h"
#include "menu.h"
#include "gameMain.h"
#include "result.h"

class SceneManager
{

	SceneInterface* currentScene;

public:

	SceneManager();
	~SceneManager();

	void Update();
	void Draw();

	void SetScene(int);
	void DeleteScene();

	int SceneEnd();

};