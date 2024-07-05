#include "Novice.h"
#include "Enemy.h"

void Enemy::Update() {
	transform_.x += speed_;
}

void Enemy::Draw() {
	Novice::DrawBox(transform_.x - radius_, transform_.y - radius_, radius_ * 2, radius_ * 2, 0.0f, BLUE, kFillModeSolid);
}

Enemy::Enemy(Transform transform, int radius, int speed) {
	transform_ = transform;
	radius_ = radius;
	speed_= speed;
}