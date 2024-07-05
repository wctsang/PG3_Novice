#pragma once

#include "Struct.h"

class Enemy {

public: 

	Transform transform_;
	int radius_;
	int speed_;
	bool isAlive;

public:

	Enemy(Transform transform, int radius, int speed);
	void Update();
	void Draw();
};