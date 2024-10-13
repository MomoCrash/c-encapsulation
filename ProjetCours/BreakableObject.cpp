#include "BreakableObject.h"

#include <iostream>
#include <string> 

BreakableObject::BreakableObject(int id, float maxHealth, float baseHealth, float x, float y) : 
	Entity::Entity(new Vector2(x, y), id), Alive::Alive(maxHealth, baseHealth) 
{

	std::cout << "Beakable Object id:" + std::to_string(id) + " just created at x = " + std::to_string(x) + " and y = " + std::to_string(y) << std::endl;

}

void BreakableObject::Damage(float _a) {

	health -= _a;
	if (health <= 0) {
		std::cout << "Object just broke !!!!!" << std::endl;
	}

}


void BreakableObject::Heal(float _a) {

	health += _a;
	if (health >= maxHealth) {
		health = maxHealth;
		std::cout << "Max health reach" << std::endl;
	}

}