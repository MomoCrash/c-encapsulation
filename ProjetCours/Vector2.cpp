#include "Vector2.h"


Vector2::Vector2(float _x, float _y) : x(_x), y(_y) { }
Vector2::Vector2() : x(0), y(0) { }

float Vector2::GetX() {
	return x;
}
float Vector2::GetY() {
	return y;
}
void Vector2::SetX(float _x) {
	x = _x;
}
void Vector2::SetY(float _y) {
	y = _y;
}

void Vector2::SetY(std::string _xString)
{
	y = std::stof(_xString);
}

std::string Vector2::ToString()
{
	return "Position x: " + std::to_string(x) + "; y: " + std::to_string(y);
}

void Vector2::Normalize()
{
	float a ;
	if (x == 0.f && y == 0.f) {
		a = 1;
	}
	else {
		a = sqrt((x * x) + (y * y));
	}
	x = x / a;
	y = y / a;
}

double Vector2::Distance(Vector2* _v)
{
	return sqrt( pow((x - _v->GetX()), 2) + pow((y - _v->GetY()), 2) );
}

Vector2 Vector2::operator+(const Vector2& _vRight)
{
	return Vector2(x + _vRight.x, y + _vRight.y);
}
