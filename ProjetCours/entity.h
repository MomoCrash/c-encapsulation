#ifndef ENTITY_H__
#define ENTITY_H__

#include <iostream>
#include <vector>
#include <string> 
#include "Vector2.h"

class Entity {

public:
	int id;

	Vector2* position;

	Entity(Vector2* _p, int _id); // Constructeur par défaut de l'entité ici variable obligatoire donnée par l'enfant
	virtual void SetPosition(Vector2* point);
	virtual Vector2* GetPosition();


};

#endif // !ENTITY_H__