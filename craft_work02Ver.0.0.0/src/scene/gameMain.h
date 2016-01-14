#pragma once
#include "sceneInterface.h"
#include "gameManager.h"

class GameMain : public SceneInterface
{

	GameManager* gameManager;


public:

	GameMain();
	~GameMain();

	void Update();
	void Draw();
	int SceneEnd();

};