// devoirs_2018_09_19.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//Exercice 4.1	

	const int MAX_INT_IN_VECTOR = 5;
	vector<int>  vectorInts;
	int Nbr = 0;
	int sumVector = 0;
	double average = 0;
	

	for (int i = 0; i < MAX_INT_IN_VECTOR; i++)
	{
		cout << "Veuillez entrer le nombre n° " << i << ": ";
		cin >> Nbr;
		sumVector += Nbr;
		vectorInts.push_back(Nbr);
	}
	average = sumVector / 5;
	cout << "La moyenne est: " << average << endl;

	//Exercice 5.1

	int lastNumber = 1;
	int beforeLastNumber = 1;
	int n = 0;
	
	cout << "veuillez entrer un nombre: ";
	cin >> n;
	switch (n)
	{
	case 0:
		cout << "erreur" << endl;
		break;
	case 1:
		cout << 0 << endl;
		break;

	default:
		for (int i = 0; i < n; i++)
		{
			lastNumber = lastNumber + beforeLastNumber;
			beforeLastNumber = lastNumber - beforeLastNumber;
		}
		cout << lastNumber<< endl;
		break;
	}


	

	//Exercice 6.1 et 6.2

	const int MAX_INT_IN_VECTOR2 = 10;
	vector<int>  vectorInts2;
	int value = 0;
	int nombreMax = 0;
	int numberMin = 0;


	int max(vector<int>&numbers); {
		
		for (int i = 0; i < MAX_INT_IN_VECTOR2; i++)
		{
			cout << "Veuillez entrer un nombre: ";
			cin >> value;
			if (nombreMax < value)
			{
				nombreMax = value;
			}
			vectorInts2.push_back(value);
			
		}
		cout << "le nombre max est: "<<nombreMax << endl;
	}

	int min(vector<int>&numbers); {

		for (int i = 0; i < MAX_INT_IN_VECTOR2; i++)
		{
			if (numberMin > value)
			{
				numberMin = value;
			}
		}
		cout << "le nombre min est: " << numberMin << endl;
	}
	system("Pause");
	return 0;
}