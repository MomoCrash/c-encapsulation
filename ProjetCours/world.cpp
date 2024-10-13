#include "world.h"

#include <iostream>
#include <string>

#include "BreakableObject.h"
#include "entity.h"
#include "StaticObject.h"
#include "player.h"
#include "mob.h"

void World::Init() {

	entities.push_back(new StaticObject(10, 25, 25));
	entities.push_back(new BreakableObject(11, 20.f, 20.f, 25.f, 25.f));
	entities.push_back(new Player(12, new Vector2(10, 10), 30, 30, new Vector2(1, 1), 1.5));
	entities.push_back(new Mob(13, new Vector2(3, 3), 10, 25, new Vector2(1, 1), 1));

}

Entity* World::GetEntity(int id) {

	for (Entity* entities : entities) {
		std::cout << id;
		if (entities->id == id)
			return entities;
	}
	return nullptr;

}

bool World::Step() {

	bool alive = false;
	for (Entity* entity : entities) {

		std::cout << std::to_string(entity->id) + " turn" << std::endl;

		if (Mob* mob = dynamic_cast<Mob*>(entity)) {
			std::cout << "Is a mob" << std::endl;

			mob->Move(GetEntity(11));

			std::cout << "" << std::endl;


			alive = alive or mob->IsAlive();
		}
		else if (Player* player = dynamic_cast<Player*>(entity)) {
			std::cout << "Is a player" << std::endl;

			Mob* mob = dynamic_cast<Mob*>(GetEntity(13));
			BreakableObject* bObject = dynamic_cast<BreakableObject*>(GetEntity(11));

			if (mob->IsAlive()) {
				if (player->GetPosition()->Distance(mob->GetPosition()) <= 1.f) {
					player->Attack(mob);
				}
				else {
					player->Move(mob);
					}
			}
			else {
				if (bObject->IsAlive()) {
					if (player->GetPosition()->Distance(bObject->GetPosition()) <= 1) {
						player->Attack(bObject);
					}
					else {
						player->Move(bObject);
					}
				}
			}

			std::cout << player->GetPosition()->Distance(bObject->GetPosition()) << std::endl << std::endl;

		}
		else if (StaticObject* stObject = dynamic_cast<StaticObject*>(entity)) {
			std::cout << "Is a static object" << std::endl << std::endl;

		}
		else if (BreakableObject* brObject = dynamic_cast<BreakableObject*>(entity)) {
			std::cout << "Is a breakeable object" << std::endl << std::endl;
			alive = alive or brObject->IsAlive();
		}

	}

	return alive;

}