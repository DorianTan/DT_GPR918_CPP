#pragma once
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>
#ifndef FOOD_H
#define FOOD_H
#include "Vector2D.h"
#include "GameObject.h"
class Map;
class Simulation;
class Creature;
class Food;
class GameObject;
class GameObjectBuilder;
struct Vector2D;

class Food : public GameObject {
public:
	Food(Simulation * simulation);

	char getImage();

};
#endif