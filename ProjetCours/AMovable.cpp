#include "AMovable.h"

AMovable::AMovable(Vector2* _d, float _mSpeed) : maxSpeed(_mSpeed), direction(_d) { }

void AMovable::SetDirection(Vector2* _v) { 
	direction = _v;
};
void AMovable::SetMaxSpeed(float _mSpeed) {
	maxSpeed = _mSpeed;
}

Vector2* AMovable::GetDirection() {
	return direction;
};
float AMovable::GetMaxSpeed() {
	return maxSpeed;
}