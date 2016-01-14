#pragma once
#include "sceneInterface.h"

class Menu : public SceneInterface
{


public:

	Menu();
	~Menu();

	void Update();
	void Draw();
	int SceneEnd();

};