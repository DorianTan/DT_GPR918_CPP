#include "Food.h"
#include "GameObject.h"
#include "Simulation.h"

class Map;
class Simulation;
class Creature;
class Food;
class GameObject;
class GameObjectBuilder;
struct Vector2D;

Food::Food(Simulation * simulation) :GameObject(simulation) {

}

 char Food::getImage(){
 return 'F';
	}