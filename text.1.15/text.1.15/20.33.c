#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//写一个比较两个数大小的函数
int Max(int x, int y)
{
	if (x > y)
	  return x;
	return y;
}
int main()
{
	int a = 8;
	int b = 10;
	printf("%d\n",Max(a,b));
	return 0;
}