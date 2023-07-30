#include <iostream>
#include <cstring>


using namespace std;


class Player
{
private:

	char* m_name;
	char m_symbol;
	Player(const Player&);


public:

	Player() { m_name = nullptr; m_symbol = ' '; }
	Player(char* name, char s);
	~Player();

	void print();
	int make_move();
	
	void setName(const char* name);
	void setSymbol(char s);

	char* getName() { return m_name; }
	char getSymbol() { return m_symbol; }

	


};

