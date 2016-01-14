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
	
	SceneID sceneID;
	bool is_end;

public:

	SceneInterface() { pos.u = 0, pos.v = 0; }

	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual int SceneEnd() = 0;

};