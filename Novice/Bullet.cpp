#include "Novice.h"
#include "Bullet.h"

Bullet::Bullet() {

}

void Bullet::Update() {
	transform_.y -= speed_;
}

void Bullet::Draw() {
	if (isShot_ == true) {
		Novice::DrawEllipse(transform_.x, transform_.y, radius_, radius_, 0.0f, WHITE, kFillModeSolid);
	}
}