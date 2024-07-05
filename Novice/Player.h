#pragma once

#include "Bullet.h"
#include "Struct.h"

class Player {

public:

	Transform transform_;
	int radius_;
	int speed_;
	Bullet bullet[10];

	Player(Transform transform, int radius, int speed);
	void Move(char* keys, char* preKeys);
	void Draw();
	~Player();
};