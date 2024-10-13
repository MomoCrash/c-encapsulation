#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <iostream>
#include <string>

class Vector2 {

private:
	float x, y;

public:
	Vector2(float x, float y);
	Vector2();
	float GetX();
	float GetY();
	void SetX(float _x);
	void SetY(float _y);
	void SetY(std::string _xString);

	std::string ToString();
	void Normalize();
	double Distance(Vector2* _v);

	Vector2 operator+(const Vector2& _vRight);

};

#endif