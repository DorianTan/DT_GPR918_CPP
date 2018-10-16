// 2018_10_16_Devoirs_Ex2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>

int vala = 4;
int valb = 3;

int *val_a = &vala;
int *val_b = &valb;

void swap(int a, int b)
{
	
	int* c = &a;


	*val_a = b;
	*val_b = *c;

}

void print_value(int a, int b)
{
	
	std::cout << "The value a is: " << a << " and is contained in address: " << &a << std::endl;
	std::cout << "The value b is: " << b << " and is contained in address: " << &b << std::endl;
}

int main(const char* argv, int argc)
{
	print_value(*val_a, *val_b);

	swap(*val_a, *val_b);

	print_value(*val_a, *val_b);

	
	system("pause");
	return 0;
}