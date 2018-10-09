#pragma once
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>
#ifndef SIMULAION_H
#define SIMULATION_H
#include "Vector2D.h"
#include "Map.h"
class Map;
class Simulation;
class Creature;
class Food;
class GameObject;
class GameObjectBuilder;
struct Vector2D;

class Simulation {
public:

	Map map;



	Simulation(int seed) :random(seed) {

	}

	void init();
	void star();

	int getValueRandom(int min, int max);

private:

	int nbrCreatures;
	int nbrHunters;
	int nbrFoodStuff;

	std::default_random_engine random;



	void update(); 

	bool isEndSimulation(); 


};
#endif SIMULAION_H
