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
	tagFLOAT2 pos;
	tagFLOAT2 size;
	
	SceneID sceneID;
	bool is_end;

public:

	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual int SceneEnd() = 0;

};