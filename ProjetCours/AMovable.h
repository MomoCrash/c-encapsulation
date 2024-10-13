#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include "Vector2.h"
#include "entity.h"

class AMovable {

public:
	Vector2* direction;
	float maxSpeed;

	AMovable(Vector2* _d, float _mSpeed);

	virtual void SetDirection(Vector2*);
	virtual void SetMaxSpeed(float _mSpeed);
	virtual Vector2* GetDirection();
	virtual float GetMaxSpeed();

	virtual void Move(float x, float y) = 0;
	virtual void Move(Entity* _e) = 0;

};


#endif // !AMOVABLE_H__