// ProjetCours.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
#include <vector>

#include "mob.h"
#include "player.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "world.h"

#include "integer.h"

int main(int argc, const char* argv[]) {

	/* Tests before adding world steps
	* 
	Vector2* vec = new Vector2(.5f, .9f);

	Mob* mob = new Mob( 1, new Vector2(10, 10), 30, 30, new Vector2(1, 1), 1.2 );
	Player* player = new Player( 2, new Vector2(5, 5), 10, 10, new Vector2(1, 1), 1.2 );

	StaticObject* object = new StaticObject( 3, 0, 0 );
	BreakableObject* bObject = new BreakableObject( 4, 20, 20, 1, 1 );

	player->Move(1, 1);
	player->Move(1, 1);
	player->Move(1, 1);
	player->Move(1, 1);

	player->Attack(mob);
	player->Attack(mob);
	player->Attack(mob);

	player->Attack(bObject);
	player->Attack(bObject);
	*/

	Integer integer1(10);
	std::cout << integer1 << std::endl;

	integer1 += 10;
	std::cout << integer1 << std::endl;

	integer1 -= 10;
	std::cout << integer1 << std::endl;

	integer1 *= 2;
	std::cout << integer1 << std::endl;

	integer1 /= 5;
	std::cout << integer1 << std::endl;

	integer1 %= 2;
	std::cout << integer1 << std::endl;

	World* world = new World();
	world->Init();

	bool run = true;
	while (run) {
		run = world->Step();
	}

	return 0;

}
