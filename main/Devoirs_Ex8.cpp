// CreatureSimulationBadCode.cpp : Defines the entry point for the console application.
//


#include "Simulation.h"
#include "GameObjectBuilder.h"
#include "GameObject.h"
#include "Vector2D.h"
#include "Food.h"
#include "Map.h"
#include "Simulation.h"
#include "Creature.h"
#include "Const.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>



class Map;
class Simulation;
class Creature;
class Food;
class GameObject;
class GameObjectBuilder;
struct Vector2D;



void simulate() {
	Simulation simulation(445);
	simulation.init();
	simulation.star();

	std::cout << "Simulation ended" << std::endl;
}


int main()
{

	simulate();

	return 0;
}

