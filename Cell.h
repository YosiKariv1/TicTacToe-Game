#ifndef _Cell
#define _Cell

#include <iostream>
#include <cstring>

using namespace std;

class Cell
{
private:

	char cell;
	bool free;

public:

	Cell() : cell(32),free(true) {}


	void print() { cout << cell; }
	void setter(char c) { cell = c; free = false; }
	char getter() { return cell; }
	bool Is_free() { return free; }

};
#endif

