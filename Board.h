#ifndef _Board
#define _Board


#include <iostream>
#include "Cell.h"

using namespace std;
class Board
{
private:

	Cell* m_board;
	int m_size;

public:
	
	Board() { m_size = 0; m_board = nullptr; }
	Board(int size);
	Board(const Board&);
	~Board();

	
	void print();
	bool set_symbol(int cellNumber, char c);
	int count_board();
	char get_symbol(int cellNumber) { return m_board[cellNumber].getter(); }

}; 
#endif

