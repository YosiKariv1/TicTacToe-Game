#define _CRT_SECURE_NO_WARNINGS
#include "Player.h"


Player::Player(char* name, char s)
{
	setName(name);
	setSymbol(s);

}

Player::~Player()
{
	delete[] m_name;
	
}

void Player::print()
{
	cout << "Player name: " << m_name << ", The symbol: " << m_symbol << endl;
}

int Player::make_move()
{
	int x;
	cin >> x;

	return x;
}

void Player::setName(const char* name)
{
	m_name = new char[strlen(name)+1];
	strcpy(m_name, name);

}

void Player::setSymbol(char s)
{
	m_symbol = s;
}
