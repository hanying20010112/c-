#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>

//写一个函数求两个整数的较大值
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//int main()
//{
//	int a = 8;
//	int b = 10;
//	printf("%d\n", Max(a, b));
//	return 0;
//


//计算三角形周长和面积
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float p = (a + b + c) / 2.0;
//    float C = a + b + c;
//	float S = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("C=%.2f S=%.2f\n",C, S);
//	return 0;
//}

//判断三角形，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && b + c > a && a + c > b)
//	{
//		if (a == b && a == c)
//			printf("Equilateral triangle!");
//		else if ((a == b) || (a == c) || (b == c))
//			printf("Isosceles triangle!");
//		else
//			printf("Ordinary triangle!");
//	}
//	else
//		printf("Not a triangle!");
//	return 0;
//}


//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int odd = 0;
//	int even = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//			odd++;
//		else
//			even++;
//	}
//	printf("奇数个数:%d\n偶数个数:%d\n", odd, even);
//	return 0;
//}

//写代码将三个数按从大到小输出
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int n = 0;
//	for (n = 1; n < 101; n++)
//	{
//		if (n % 3 == 0)
//			printf("%d ", n);
//	}
//	return 0;
//}


//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//	{
//		for (int i = b; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		for (int i =a; i >= 1; i--)
//		{
//			if (a%i == 0 && b%i == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("%d ", year);
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//int main()
//{
//	int n,i;
//	for (n = 100; n <= 200; n++)
//	{
//		for (i = 2; i <= 200; i++)
//		{
//			if (n % i == 0)
//				break;
//		}
//		if (i >= n)            注意要是把这个if语句放置在上一个for循环中，会循环打印很多个结果
//			printf("%d ", n);
//	}
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)   //个位上是9
//			count++;
//		if (n / 10 == 9)   //十位上是9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1.0; i <= 100.0; i++)
//	{
//		sum += flag*(1.0) / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			int t = max;
//			max = arr[i];
//			arr[i] = t;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



//在屏幕上输出9 * 9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-3d", i, j, i*j);
//		printf("\n");
//
//	}
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数  二分查找
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
