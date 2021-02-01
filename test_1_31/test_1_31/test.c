#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//打印杨辉三角形
//int main()
//{
//	int n = 0;
//	int a[100][100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j < n; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//			printf("%d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char muder = 'A';
//	for (muder = 'A'; muder <= 'D'; muder++)
//	{
//		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3)
//			printf("muder = %c\n", muder);
//
//	}
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((a == 3 && b != 2) || (a != 3 && b == 2))
						{
							if ((b == 2 && e != 4) || (b != 2 && e == 4))
							{
								if ((c == 1 && d != 2) || (c != 1 && d == 2))
								{
									if ((c == 5 && d != 3) || (c != 5 && d == 3))
									{
										if ((e == 4 && a != 1) || (e != 4 && a == 1))
										{
											if (a*b*c*d*e == 120)
												printf("a = %d  b= %d  c = %d  d = %d  e = %d \n", a, b, c, d, e);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}