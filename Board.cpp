#include "Board.h"


Board::Board(int size)
{
	m_size = size;

	m_board = new Cell[size];

}

Board::Board(const Board & brd)
{
	
	m_size = brd.m_size;

	m_board = new Cell[m_size];

	for (int i = 0; i < m_size; i++)
	{
		m_board[i] = brd.m_board[i];
	}

}

Board::~Board()
{
	delete[] m_board;
	

}

void Board::print()
{
	
	cout << "     |     |     " << endl;
	cout << "  " << m_board[0].getter() << "  |  " << m_board[1].getter() << "  |  " << m_board[2].getter() << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << m_board[3].getter() << "  |  " << m_board[4].getter() << "  |  " << m_board[5].getter() << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << m_board[6].getter() << "  |  " << m_board[7].getter() << "  |  " << m_board[8].getter() << endl;

	cout << "     |     |     " << endl << endl;
}


bool Board::set_symbol(int cellNumber, char c)
{
	if (cellNumber >= 1 && cellNumber <= 9)
	{
		if (c == 'X' || c == 'O')
		{
			if (m_board[cellNumber-1].Is_free())
			{

				m_board[cellNumber-1].setter(c);
				
				return true;

			}
		}
	}
	
	return false;
}
int Board::count_board()
{
	int counter = 0;

	for (int i = 0; i < m_size; i++)
	{
		if (m_board[i].Is_free())
			counter++;
		
	}

	return counter;
}