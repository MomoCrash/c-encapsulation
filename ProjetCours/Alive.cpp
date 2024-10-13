#include "alive.h"

Alive::Alive(float _mHealth, float _h) : maxHealth(_mHealth), health(_h) { }

bool Alive::IsAlive()
{
	return health >= 1;
}

float Alive::GetMaxHealth() {
	return maxHealth;
}

float Alive::GetHealth() {
	return health;
}