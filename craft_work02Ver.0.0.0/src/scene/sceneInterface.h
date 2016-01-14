#pragma once
#include "../component/common.h"

enum class SceneID
{
	NON,
	TITLE,
	MENU,
	GAME,
	RESULT,
	EMPTY
};

class SceneInterface
{
protected:

	tagFLOAT2 pos;
	tagFLOAT2 size;

	unsigned int fontColor;
	
	SceneID sceneID;
	bool isEnd;

public:

	SceneInterface() 
	{
		pos.u = 0, pos.v = 0;
		fontColor = GetColor(255, 255, 255);
	}

	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual int SceneEnd() = 0;

};