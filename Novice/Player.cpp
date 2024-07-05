#include "Novice.h"
#include "Player.h"
#include "Bullet.h"

void Player::Move(char* keys, char* preKeys) {
	if (keys[DIK_W]) {
		transform_.y -= speed_;
	}
	if (keys[DIK_S]) {
		transform_.y += speed_;
	}
	if (keys[DIK_A]) {
		transform_.x -= speed_;
	}
	if (keys[DIK_D]) {
		transform_.x += speed_;
	}
	for (int i = 0; i < 10; i++) {
		if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && bullet[i].isShot_ == false) {
			bullet[i].transform_.x = transform_.x;
			bullet[i].transform_.y = transform_.y;
			bullet[i].isShot_ = true;
			break;
		}
		if (bullet[i].isShot_ == true) {
			bullet[i].Update();
			
		}	
	}
	for (int i = 0; i < 10; i++) {
		if (bullet[i].transform_.y < -20) {
			bullet[i].isShot_ = false;
		}
	}
}


void Player::Draw() {
	Novice::DrawEllipse(transform_.x, transform_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
	for (int i = 0; i < 10; i++) {
		if (bullet[i].isShot_ == true) {
			bullet[i].Draw();
		}
	}
}


Player::Player(Transform transform, int radius, int speed) {
	transform_ = transform;
	radius_ = radius;
	speed_ = speed;
}


Player::~Player() {

}