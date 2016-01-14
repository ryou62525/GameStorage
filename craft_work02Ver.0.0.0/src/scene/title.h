#pragma once
#include "sceneInterface.h"


class Title : public SceneInterface
{
protected:

	bool isChange;

public:

	Title();
	~Title();

	void Update();
	void Draw();
	int SceneEnd();

};