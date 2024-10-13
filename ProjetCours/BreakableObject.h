#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include "entity.h"
#include "alive.h"

class BreakableObject : public Entity, public Alive {

public:
	BreakableObject(int id, float maxHealth, float baseHealth, float x, float y) ;
	void Alive::Damage(float _a);
	void Alive::Heal(float _a);

};

#endif // !BREAKABLEOBJECT_H__