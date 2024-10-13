#ifndef MOB_H__
#define MOB_H__

#include "entity.h"
#include "alive.h"
#include "AMovable.h"

#include "Vector2.h"

class Mob : public Entity, public Alive, public AMovable {

public:
	Mob(int id, Vector2* _p, float _mH, float _h, Vector2* _d, float _s);

	void AMovable::Move(float x, float y);
	void AMovable::Move(Entity* _e);
	void Alive::Damage(float _a);
	void Alive::Heal(float _a);

};

#endif // !ENTITY_H__