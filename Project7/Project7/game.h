#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//定义宏
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define bomb 10


//初始化
void Init(char board[ROWS][COLS], int rows, int cols, char sign);

//打印游戏界面
void Displayboard(char board[ROWS][COLS], int row, int col);

//布置地雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
