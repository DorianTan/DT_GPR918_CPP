// 2018_10_16_Devoirs_Ex1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#ifndef USE_MATH_DEFINES
#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>


int main() {
	double radius = 0.0;
	{
		std::cout << "Welcome! Set the radius for a sphere " << std::endl;
		std::cin >> radius;

		std::cout << "The volume is: " << (4.0 / 3.0) * M_PI * pow(radius, 3.0) << std::endl;

		std::cout << "The area is: " << 4.0 * M_PI * pow(radius, 2.0) << std::endl;
	}

	//Windows specific
	system("pause");




	return 0;
}
#endif USE_MATH_DEFINES