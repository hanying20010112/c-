#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//void print(int arr[])
//{
//	int  *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	print(arr);
//	return 0;
//}


//写一个函数，可以逆序一个字符串的内容。
//void reverse(char * str)
//{
//	if (NULL != str)
//	{
//		char *f = str;//f-first
//		char *l = str + strlen(str) - 1;//l-last
//		while (f < l)
//		{
//			char tmp = *f;
//			*f = *l;
//			*l = tmp;
//			f++;
//			l--;
//		}
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	reverse(str);
//	printf("%s\n",str );
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int Sn = 0;
//	int tmp = 0;
//    scanf("%d", &a);
//	for (i = 0; i<5; i++)
//	{
//		tmp = tmp * 10 + a;
//		Sn += tmp;
//	}
//	printf("%d\n", Sn);
//    return 0;
//}

//有问题
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	int tmp = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for ( i = 0; i < 5; i++)
//	{
//		tmp = a*( pow(10, i)) + a;
//		Sn += tmp;
//		
//	}
//	printf("%d\n", Sn);
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100001; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		while (tmp / 10)//算出是几位数
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印菱形
//int main()
//{
//	/*int line = 0;*/
//	int i = 0;
//	//scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i<7; i++)
//	{
//		int j = 0;
//		for (j = 0; j<7 - 1 - i; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * i + 1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i<7 - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (7 - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//
//	return 0;
//}
//
//
//// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}