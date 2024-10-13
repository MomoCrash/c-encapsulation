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

	Entity(Vector2* _p, int _id); // Constructeur par d�faut de l'entit� ici variable obligatoire donn�e par l'enfant
	virtual void SetPosition(Vector2* point);
	virtual Vector2* GetPosition();


};

#endif // !ENTITY_H__