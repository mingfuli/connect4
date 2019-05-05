#include <iostream>
#include <string>
#include "ConnectFour.h"
<<<<<<< HEAD:ConnectFour.cpp
#include "ManhattanDistance.h"
using namespace std;

ConnectFour::ConnectFour(){
	col = 7;
	row = 6;
	counter = 0;

	board = new char*[6];

	for(int i = 0; i < 6; i++){
		board[i] = new char[col];
	}

	for(int i = 0; i < 6; i++){
		for(int k = 0; k < 7; k++){
=======
#include "test.h"
// #include "ManhattanDistance.h"
using namespace std;

void ConnectFour::initialize()
{
    board = new char* [row];
    for(int i =0; i < row; i++){
        board[i] = new char [col];
    }
	for (int i = 0; i < row; i++)
	{
       
		for (int k = 0; k < col; k++)
		{
           
>>>>>>> master:ConnectFour.cpp
			board[i][k] = ' ';
		}
	}
}

ConnectFour::~ConnectFour(){
	delete[] board;
}

void ConnectFour::display()
{

	cout << " 1 2 3 4 5 6 7" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < col; k++)
		{

			cout << "|" << board[i][k];
		}
		cout << "|" << endl;
	}
	cout << "===============" << endl;

	//playGame();
}
void ConnectFour::playGame()
{
	int player1Choice;
	int m;
	int n;
	int check;
	int computerChoice = 0;
	display();
	do
	{
        cout << "Choose a column(1-" << col << "): " << endl;
		cin >> player1Choice;
		while (player1Choice < 1 || player1Choice > col)
		{
			cout << "Invalid input" << endl;
			cout << "Choose a column(1-" << col << "): " << endl;
			cin >> player1Choice;
		}
		counter++;
		for (m = row - 1; m >= 0; m--)
		{
			if (board[m][player1Choice - 1] != ' ')
			{
				continue;
			}
			else
			{
				break;
			}
		}

		//if col filled, skip this iteration
		if (m >= 0)
		{
<<<<<<< HEAD:ConnectFour.cpp
			board[m][player1Choice - 1] = 'O';
			// cout << "row: " << m << endl;
=======
			board[m][player1Choice - 1] = 'X';
>>>>>>> master:ConnectFour.cpp
			check = checkWinner();
			if (check == 1)
			{
				display();
				cout << "You win !" << endl;
<<<<<<< HEAD:ConnectFour.cpp
				return;
=======
				exit(0);
>>>>>>> master:ConnectFour.cpp
			}
			else
			{
				display();
			}
		}
		else
		{
			cout << "This column has been filled. Please select another column" << endl;
			continue;
		}

        cout << "Rival's turn" << endl;
<<<<<<< HEAD:ConnectFour.cpp
        ManhattanDistance mh(row, col);
        computerChoice = mh.pick(board);
        cout<< "Computer's choice: " << computerChoice << endl;
=======
		/*
			Call heuristic function here. For exmaple: 
				ManhattanDistance mh(row, col);
		*/
        int computerChoice = 1;	//change this value, i'm hard-code it to 1
		cout<< "Computer's choice: " << computerChoice << endl;
>>>>>>> master:ConnectFour.cpp
		counter++;

		
		for (n = row - 1; n >= 0; n--)
		{
			if (board[n][computerChoice - 1] != ' ')
			{
				continue;
			}
			else
			{
				break;
			}
		}



		//if col filled, skip this iteration. may skip turn of AI
		//so every heuristic function need to do boundary check
		if (n >= 0)
		{
<<<<<<< HEAD:ConnectFour.cpp
			board[n][computerChoice - 1] = 'X';
			// cout << "row: " << n << endl;
=======
			board[n][computerChoice - 1] = 'O';
>>>>>>> master:ConnectFour.cpp
			check = checkWinner();
			if (check == 1)
			{
				display();
				cout << "Player 2 wins !" << endl;
				return;
			}
			else
			{
				display();
			}
		}
		else
		{
			cout << "This column has been filled. Please select another column" << endl;
			cout << endl;
			continue;
		}

	} while (counter <= row * col);
	cout << "Tie !" << endl;
	return;
}

int ConnectFour::checkWinner()
{
	for (int k = 0; k < row; k++)
	{
		for (int n = 0; n < col; n++)
		{

			if (n < col - 3 && board[k][n] != ' ' && board[k][n] == board[k][n + 1] && board[k][n] == board[k][n + 2] && board[k][n] == board[k][n + 3])
			{
				return 1;
			}
			else if (k < row - 3 && board[k][n] != ' ' && board[k][n] == board[k + 1][n] && board[k][n] == board[k + 2][n] && board[k][n] == board[k + 3][n])
			{
				return 1;
			}
			else if (n < col - 3 && k < row - 3 && board[k][n] != ' ' && board[k][n] == board[k + 1][n + 1] && board[k][n] == board[k + 2][n + 2] && board[k][n] == board[k + 3][n + 3])
			{
				return 1;
			}
			else if (n < col - 3 && k < row - 3 && board[k][n] != ' ' && board[k][n] == board[k + 1][n - 1] && board[k][n] == board[k + 2][n - 2] && board[k][n] == board[k + 3][n - 3])
			{
				return 1;
			}
		}
	}
	return 0;
}
<<<<<<< HEAD:ConnectFour.cpp
=======

//this method is used to creating a customized game table
void ConnectFour::createTest()
{
	test testBoard;
	board = testBoard.create();
	display();
}
>>>>>>> master:ConnectFour.cpp
