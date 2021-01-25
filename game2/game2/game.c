#define _CRT_SECURE_NO_WARNINGS   1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)  //初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)   //打印棋盘
{
	int i = 0;
	int j = 0;
	printf("------------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");    //优化部分，方便查找几行几列
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);   //优化部分
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	printf("------------------------------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col, int count)   //布置雷
{
	while (count)
	{
		//1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//(x,y)处没有雷
			mine[x][y] = '1';
			count--;
		}
	}
}

//统计mine数组的x,y坐标周围有几个雷
int GetMineCont(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)   //排雷
{
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		int x = 0; 
		int y = 0;
		scanf("%d%d", &x, &y);
		//1.坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏失败\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//2.改坐标是不是雷。若不是雷，统计周围雷的个数
				int count = GetMineCont(mine, x, y);
				show[x][y] = count + '0';    //存放的是数字字符
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
			printf("坐标非法，请重新输入\n");
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜，排雷成功\n");
		DisplayBoard(show, row, col);
	}
}