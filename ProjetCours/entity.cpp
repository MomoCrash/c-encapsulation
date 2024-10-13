#include "entity.h"

Entity::Entity(Vector2* _p, int _id) {

	position = _p;
	id = _id;

}

void Entity::SetPosition(Vector2* _v) {
	position = _v;
}

Vector2* Entity::GetPosition() {
	return position;
}