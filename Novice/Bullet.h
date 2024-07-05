#pragma once

#include "Struct.h"

class Bullet {

public:

	Transform transform_ = {-200, -100};
	int radius_ = 5;
	int speed_ = 20;
	bool isShot_ = false;

public:

	Bullet();
	void Update();
	void Draw();
};