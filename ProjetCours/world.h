#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
#include "entity.h"

class World {

public:
	std::vector<Entity*> entities ;
	void Init();
	Entity* GetEntity(int id);
	bool Step();

};

#endif