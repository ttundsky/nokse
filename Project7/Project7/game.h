#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�����
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define bomb 10


//��ʼ��
void Init(char board[ROWS][COLS], int rows, int cols, char sign);

//��ӡ��Ϸ����
void Displayboard(char board[ROWS][COLS], int row, int col);

//���õ���
void SetMine(char board[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
