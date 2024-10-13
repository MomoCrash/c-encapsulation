#ifndef PLAYER_H__
#define PLAYER_H__

#include "entity.h"
#include "alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {

public:
	Player(int id, Vector2* _p, float _mH, float _h, Vector2* _d, float _s);

	void AMovable::Move(float x, float y);
	void AMovable::Move(Entity* _e);
	void Alive::Damage(float _a);
	void Alive::Heal(float _a);
	void IAttacker::Attack(Alive* _a);

};

#endif // !PLAYER_H__