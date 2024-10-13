#include "mob.h"

#include <iostream>
#include <string> 

Mob::Mob(int id, Vector2* _p, float _mH, float _h, Vector2* _d, float _s) 
	: Entity::Entity(_p, id), Alive::Alive(_mH, _h), AMovable::AMovable(_d, _s) {

	std::cout << "Mob just created at x = " + std::to_string(position->GetX()) + " and y = " + std::to_string(position->GetY()) + " with " + std::to_string(maxHealth) + " life with direction x = " + std::to_string(direction->GetX()) + " and y = " + std::to_string(direction->GetY()) << std::endl;

}

void Mob::Move(float x, float y) {

	position->SetX(position->GetX() + x * GetMaxSpeed());
	position->SetY(position->GetY() + y * GetMaxSpeed());

	std::cout << "Mob move to " + std::to_string(position->GetX()) + "x ; " + std::to_string(position->GetX()) + "y" << std::endl;

}

void Mob::Move(Entity* _e) {

	Vector2* moveTo = new Vector2(_e->GetPosition()->GetX() - position->GetX(), _e->GetPosition()->GetY() - position->GetY());
	moveTo->Normalize();

	Mob::Move(moveTo->GetX(), moveTo->GetY());

}

void Mob::Damage(float _a) {

	health -= _a;
	std::cout << "Mob take damages !" << std::endl;;
	if (health <= 0) {
		std::cout << "Mob just die !!!!!" << std::endl;;
	}


}


void Mob::Heal(float _a) {

	health += _a;
	if (health >= maxHealth) {
		health = maxHealth;
		std::cout << "Max health reach" << std::endl;;
	}

}