#pragma once
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef GAMEOBJECTBUILDER_H
#define GAMEOBJECTBUILDER_H
#include "Vector2D.h"
class Map;
class Simulation;
class Creature;
class Food;
class GameObject;
class GameObjectBuilder;
struct Vector2D;

class  GameObjectBuilder {
public:
	static Creature * buildCreature(Simulation & simulation);
	static Food * buildFood(Simulation & simulation);
};

#endif