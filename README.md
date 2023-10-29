# SudokuSolver_Project

OVERVIEW

A C++ compatible header that provides useful functions which help with the solving the Sudoku.

This project contains a recursive and backtracking approach to find the solution of the Sudoku.

It takes input from user and give the correct solution of the Sudoku if exists else gives no solution exits.

SETUP

•	Download the main and function files and save them.

•	The code is made to run natively on any platform.

•	C++ compiler

DOCUMENTATION

Function in functions.h file

•	Print() – to print the solved sudoko if solution exits.

•	isValid() – to check is the given number x can be at cell i,j of matrix or not.

•	SudokuSolver() – main function to find the solved Sudoku if exists else it will return false or no solution exits.

main file contains the main function where the compiler takes input from user and then provide its solution if exists.

EXAMPLE

Input

{ {3, 0, 6, 5, 0, 8, 4, 0, 0},

{5, 2, 0, 0, 0, 0, 0, 0, 0},

{0, 8, 7, 0, 0, 0, 0, 3, 1},

{0, 0, 3, 0, 1, 0, 0, 8, 0},

{9, 0, 0, 8, 6, 3, 0, 0, 5},

{0, 5, 0, 0, 9, 0, 6, 0, 0}, 

{1, 3, 0, 0, 0, 0, 2, 5, 0},

{0, 0, 0, 0, 0, 0, 0, 7, 4},

{0, 0, 5, 2, 0, 6, 3, 0, 0} }

Output

3 1 6 5 7 8 4 9 2

5 2 9 1 3 4 7 6 8

4 8 7 6 2 9 5 3 1

2 6 3 4 1 5 9 8 7

9 7 4 8 6 3 1 2 5

8 5 1 7 9 2 6 4 3

1 3 8 9 4 7 2 5 6

6 9 2 3 5 1 8 7 4

7 4 5 2 8 6 3 1 9

