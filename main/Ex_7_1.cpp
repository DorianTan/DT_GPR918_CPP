// Ex_7_1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void GenerateMap(vector<vector<char>>&vectorInts) {

	for (int i = 0; i < 3; i++)
	{
		for (int I = 0; I < 3; I++)
		{
			vectorInts[i][I] = '_';
		}
	}

}

void ShowMap(vector<vector<char>>&vectorInts) {

	cout << vectorInts[0][0] <<" ";
	cout << vectorInts[0][1] << " ";
	cout << vectorInts[0][2] <<endl;
	cout << vectorInts[1][0] << " ";
	cout << vectorInts[1][1] << " ";
	cout << vectorInts[1][2] <<endl;
	cout << vectorInts[2][0] << " ";
	cout << vectorInts[2][1] << " ";
	cout << vectorInts[2][2] <<endl;


}

void SetNewPosition(int& x, int& y, vector<vector<char>>&vectorInts,char& currentPlayer,bool& player1Active,char& Player1,char& Player2){
	
	if (player1Active)
	{
		currentPlayer = Player1;
	}
	else
	{
		currentPlayer = Player2;
	}
	player1Active = !player1Active;

	cout << "Veuillez inserer un chiffre pour l'axe x: ";
	cin >> x;
	

	while (x < 0 || x > 2)
	{
		cout << "Veuillez entrer un nombre entre 0 et 3" << endl;
		cout << "Veuillez inserer un chiffre pour l'axe x: ";
		cin >> x;
	}

	cout << "Veuillez inserer un chiffre pour l'axe y: ";
	cin >> y;
	
	while (y < 0 || y > 2)
	{
		cout << "Veuillez entrer un nombre entre 0 et 3" << endl;
		cout << "Veuillez inserer un chiffre pour l'axe y: ";
		cin >> y;
	}
	while (vectorInts[x][y] == 'X' || vectorInts[x][y] == 'O')
	{
		cout << "pas possible" << endl;
		cout << "Veuillez inserer un chiffre pour l'axe x: ";
		cin >> x;
		cout << "Veuillez inserer un chiffre pour l'axe y: ";
		cin >> y;

	}
		vectorInts[x][y] = currentPlayer;

	
}
void checkWin(vector<vector<char>>&vectorInts,int& gagne) {


	if ((vectorInts[0][0] == 'X'&&vectorInts[0][1] == 'X'&&vectorInts[0][2] == 'X') || (vectorInts[1][0] == 'X'&&vectorInts[1][1] == 'X'&&vectorInts[1][2] == 'X') || (vectorInts[2][0] == 'X'&&vectorInts[2][1] == 'X'&&vectorInts[2][2] == 'X') ||
		(vectorInts[0][0] == 'X'&&vectorInts[1][0] == 'X'&&vectorInts[2][0] == 'X') || (vectorInts[0][1] == 'X'&&vectorInts[1][1] == 'X'&&vectorInts[2][1] == 'X') || (vectorInts[0][2] == 'X'&&vectorInts[1][2] == 'X'&&vectorInts[2][2] == 'X') ||
		(vectorInts[0][0] == 'X'&&vectorInts[1][1] == 'X'&&vectorInts[2][2] == 'X') || (vectorInts[2][0] == 'X'&&vectorInts[1][1] == 'X'&&vectorInts[0][2] == 'X'))
	{
		cout << "Player 1 Gagne" << endl;
		gagne += 1;
	}
	else if ((vectorInts[0][0] == 'O'&&vectorInts[0][1] == 'O'&&vectorInts[0][2] == 'O') || (vectorInts[1][0] == 'O'&&vectorInts[1][1] == 'O'&&vectorInts[1][2] == 'O') || (vectorInts[2][0] == 'O'&&vectorInts[2][1] == 'O'&&vectorInts[2][2] == 'O') ||
		(vectorInts[0][0] == 'O'&&vectorInts[1][0] == 'O'&&vectorInts[2][0] == 'O') || (vectorInts[0][1] == 'O'&&vectorInts[1][1] == 'O'&&vectorInts[2][1] == 'O') || (vectorInts[0][2] == 'O'&&vectorInts[1][2] == 'O'&&vectorInts[2][2] == 'O') ||
		(vectorInts[0][0] == 'O'&&vectorInts[1][1] == 'O'&&vectorInts[2][2] == 'O') || (vectorInts[2][0] == 'O'&&vectorInts[1][1] == 'O'&&vectorInts[0][2] == 'O'))
	{
		
		cout << "player 2 Gagne" << endl;
		gagne += 1;
	}
	else if (vectorInts[0][0] != '_'&& vectorInts[0][1] != '_'&& vectorInts[0][2] != '_'&&vectorInts[1][0] != '_'&&vectorInts[1][1] != '_'&&vectorInts[1][2] != '_'&&
		vectorInts[2][0] != '_'&& vectorInts[2][1] != '_'&& vectorInts[2][2] != '_')
					{
					cout << "Egalite" << endl;
					gagne += 1;
					}
}

void playGame(int& x, int& y, vector<vector<char>>&vectorInts, char& currentPlayer, bool& player1Active, char& Player1, char& Player2) {

	int gagne = 0;
	
		while (gagne==0)
		{

			ShowMap(vectorInts);
			SetNewPosition(x, y, vectorInts, currentPlayer, player1Active, Player1, Player2);
			checkWin(vectorInts,gagne);

		}

	

}	
int main()
{
	bool player1Active=true;
	char Player1 = 'X';
	char Player2 = 'O';
	char currentPlayer=0;
	int x;
	int y;


	const int MAX_INT_IN_VECTOR = 3;
	vector<vector<char>>  vectorInts(MAX_INT_IN_VECTOR, vector<char>(MAX_INT_IN_VECTOR));
	GenerateMap(vectorInts);
	playGame(x, y, vectorInts, currentPlayer, player1Active, Player1, Player2);

	system("Pause");
	return 0;
}