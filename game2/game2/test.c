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
	//�������̶�Ӧ����
	char mine[ROWS][COLS];   //��Ų��ú��׵���Ϣ
	char show[ROWS][COLS];   //��ŵ����Ų���׵���Ϣ

	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL, EASY_COUNT);
	DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>(1/0)");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}