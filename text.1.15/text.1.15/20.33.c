#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//дһ���Ƚ���������С�ĺ���
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