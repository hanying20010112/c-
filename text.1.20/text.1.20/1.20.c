#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>


//��������Ϸ
//#include<time.h>
//void menu()
//{
//	printf("******************\n");
//	printf("***** 1.play *****\n");
//	printf("***** 0.exit *****\n");
//	printf("******************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������(1/0)��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		    break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}