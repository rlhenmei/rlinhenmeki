#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 5
#define COL 5
#define ROWS ROW+2
#define COLS COL+2	
#define a 10
void InitBoard(char board[ROWS][COLS], int rows, int cols, int sz);
void Display(char board[ROWS][COLS], int rows, int cols);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine,char show,int row,int col);
int get_mine_lei(char mine[ROWS][COLS], int row, int col);