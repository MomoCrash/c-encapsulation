#include "StaticObject.h"

#include <iostream>
#include <string> 

StaticObject::StaticObject(int id,  float x, float y) : Entity::Entity(new Vector2(x, y), id) {

	std::cout << "Static Object id:" + std::to_string(id) + " just created at x = " + std::to_string(x) + " and y = " + std::to_string(y) << std::endl;

}