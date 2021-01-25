#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//写一个代码交换两个整形变量

//创造变量进行交换
//int main()
//{
//	int a = 3;
//	int b = 8;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//下面这种情况可能会引起栈溢出  整形是四个字节
//int main()
//{
//	int a = 3;
//	int b = 8;
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//异或（二进制里面相同为0，相异为1）
int main()
{
	int a = 3;
	int b = 8;
	printf("a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//00000000000000000000000000000011    3
//00000000000000000000000000001000    8
//00000000000000000000000000001011    11 (异或后的二进制形式)
//a = 11;
//00000000000000000000000000000011     3
//b = 3;    
//00000000000000000000000000001000      8
//a = 8;

