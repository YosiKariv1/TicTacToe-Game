#include <iostream>
#include <cstring>
#include "Board.h"
#include "Player.h"
#include <random>


enum statuses { win, draw, start };
using namespace std;

class Game
{
private:
	
	Board board;
	Player players[2];
	enum statuses { win, draw, start };
	statuses status;
	char turn;

public:

	Game(char *name1, char *name2);
	
	
	bool checkRows();
	bool checkColoms();
	bool checkCross();

	void play();
	

};

