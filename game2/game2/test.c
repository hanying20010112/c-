#define _CRT_SECURE_NO_WARNINGS   1
#include"game.h"


void menu()
{
	printf("*******************************\n");
	printf("*********   1.play    *********\n");
	printf("*********   0.exit    *********\n");
	printf("*******************************\n");
}

void game()
{
	//创建棋盘对应数组
	char mine[ROWS][COLS];   //存放布置好雷的信息
	char show[ROWS][COLS];   //存放的是排查出雷的信息

	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL, EASY_COUNT);
	DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>(1/0)");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}