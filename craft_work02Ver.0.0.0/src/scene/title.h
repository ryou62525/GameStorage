#pragma once
#include "sceneInterface.h"



class Title : SceneInterface
{
protected:

	unsigned int color;

	bool isChange;

public:

	Title();
	~Title();

	void Update();
	void Draw();
	int SceneEnd();

};