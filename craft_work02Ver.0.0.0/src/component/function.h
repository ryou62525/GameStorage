#pragma once
#include "DxLib.h"

class Function
{

	char key[256];

public:

	Function();
	~Function();

	void Setup();
	void Update();

	void drawBackground(float pos_x, float pos_y, float size_x, float size_y,  int image);

	bool isPressKey(const int button_type);

};