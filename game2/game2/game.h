#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rrows, int cols,char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count);
//count  雷的个数

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);