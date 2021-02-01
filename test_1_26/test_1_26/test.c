#define _CRT_SECURE_NO_WARNINGS   1
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299输出例子 : 7

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int flag = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	flag = a^b;
//	for (int i = 0; i <= 32; i++)
//	{
//		if (flag & 1 == 1)
//			count++;
//		flag = flag >> 1;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 31; i >= 1; i -= 2)
//		printf("%d", (n >> i) & 1);
//	printf("\n");
//	for (int i = 30; i >= 1; i -= 2)
//		printf("%d", (n >> i) & 1);
//	printf("\n");
//	return 0;
//}



//写一个函数返回参数二进制中 1 的个数。比如： 15    0000 1111    4 个 1

int Num(int n)
{
	int count = 0;
	while (n > 0)
	{
		if ((n & 1) == 1)
			count++;
		n = n >> 1;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Num(n);
	printf("%d\n", ret);
	return 0;
}


////#include<stdio.h>
////模拟实现strcpy函数
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int mian()
//{
//	char arr1[] = "xxxxxxxxxxxxx";
//	char arr2[] = "abcdef";
//	char *p = arr2;
//	printf("%s\n", my_strcpy(arr1, p));
//	return 0;
//}