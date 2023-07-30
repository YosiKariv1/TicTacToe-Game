#include "Game.h"

Game::Game(char* name1, char* name2): board(9)
{
	players[0].setName(name1);
	players[0].setSymbol('X');
	players[1].setName(name2);
	players[1].setSymbol('O');

	status = start;

	srand(time(nullptr));
	int pr = rand() % 10;
	pr = rand() % 2;

	turn = players[pr].getSymbol();
}

bool Game::checkRows()
{
	for (int i = 0; i < 2; i++)
	{
		int count = 0;

		for (int j = i * 3; j < i + 3; j++)
		{
			if (board.get_symbol(j) == turn)
			{
				count++;
			}
			else {
				break;
			}

		}

		if (count == 3)
		{
			return true;
		}

	}

	return false;
}

bool Game::checkColoms()
{
	for (int i = 0; i < 2; i++)
	{
		int count = 0;

		for (int j = i; j < i + 7; j += 3)
		{
			if (board.get_symbol(j) == turn)
			{
				count++;
			}
			else {
				break;
			}

		}

		if (count == 3)
		{
			return true;
		}


	}

	return false;
}

bool Game::checkCross()
{
	for (int i = 0; i < 2; i++)
	{
		int count = 0;

		for (int j = i*2; j < 9 - (2*i); j += 4 - (2*i))
		{
			if (board.get_symbol(j) == turn)
			{
				count++;
			}
			else {
				break;
			}

		}

		if (count == 3)
		{
			return true;
		}


	}

	return false;
}

void Game::play()
{
	while (status == start)
	{
		system("cls");
		board.print();

		int player = 0;

		if (checkRows() || checkColoms() || checkCross())
		{
			status = win;
			break;
		}
		else if (board.count_board() == 0)
		{
			status = draw;
			break;
		}
	
		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';

		int move;
		bool check;

		do
		{
			cout << "choose your move" << endl;
			players[player].print();
			move = players[player].make_move();
			check = board.set_symbol(move, turn);

		} while (!check);

	}

	if (status == win)
	{
		cout << "We have a winner: ";
		if (turn == 'X')
		{
			players[0].print();
		}
		else
		{
			players[1].print();
		}


	}
	else
		cout << "It is a Draw " << endl;

}



