#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>

//дһ�����������������Ľϴ�ֵ
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


//�����������ܳ������
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

//�ж������Σ�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!��
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


//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
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
//	printf("��������:%d\nż������:%d\n", odd, even);
//	return 0;
//}

//д���뽫���������Ӵ�С���
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


//дһ�������ӡ1 - 100֮������3�ı���������
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


//���������������������������Լ��
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


//��ӡ1000�굽2000��֮�������
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


//дһ�����룺��ӡ100~200֮�������
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
//		if (i >= n)            ע��Ҫ�ǰ����if����������һ��forѭ���У���ѭ����ӡ�ܶ�����
//			printf("%d ", n);
//	}
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)   //��λ����9
//			count++;
//		if (n / 10 == 9)   //ʮλ����9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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


//��10 �����������ֵ
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



//����Ļ�����9 * 9�˷��ھ���
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

//��д������һ���������������в��Ҿ����ĳ����  ���ֲ���
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
