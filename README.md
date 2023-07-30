# Tic Tac Toe Game

## Introduction

This project is an implementation of the classic game Tic Tac Toe. It is a two-player game played on a 3x3 grid. Players take turns marking a square with their symbol (X or O), and the goal is to be the first to fill a row, column, or diagonal with their symbol. If all squares are filled and no player has won, the game ends in a draw.

## Structure

The game is structured into four main classes: `Cell`, `Board`, `Player`, and `Game`.

### Cell Class

The `Cell` class represents a cell on the Tic Tac Toe board. Each cell has a mark (which is empty by default) and a status indicating whether it is free or occupied. The `Cell` class provides methods for printing the cell, changing the cell's state, getting the cell's mark, and checking if the cell is free.

### Board Class

The `Board` class represents the Tic Tac Toe board. It includes a dynamic array of `Cell` objects and provides methods for initializing the board, printing the board, setting a symbol in a specific cell, counting the number of empty cells, and getting the symbol in a specific cell.

### Player Class

The `Player` class represents a player in the game. Each player has a name and a symbol (X or O). The `Player` class provides methods for making a move, printing player details, and setting/getting player attributes.

### Game Class

The `Game` class controls the flow of the game. It includes a `Board` object, an array of two `Player` objects, and status variables for the game state and the current turn. The `Game` class provides a method for playing the game, which involves clearing the screen, printing the screen, making a move, and updating the game state after each move.

## Getting Started

### Prerequisites

- A C++ compiler is required to compile and run this program. The code is written in standard C++ and has been tested with the GNU GCC compiler.

### Compilation

To compile the program, navigate to the directory containing the `.cpp` files in a terminal and run the following command:

```bash
g++ main.cpp Cell.cpp Board.cpp Player.cpp Game.cpp -o game
