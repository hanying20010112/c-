#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return (n * Fac(n - 1));
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//非递归
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n <= 1)
//		printf ("1\n");
//	else
//	{
//		int fac = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			fac = fac*i;
//		}
//		printf("%d\n", fac);
//	}
//	return 0;
//}


//递归和非递归分别实现strlen
////递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "adfv";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

////非递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "adfv";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//编写一个函数 reverse_string(char * string)（递归实现）实现：将参数字符串中的字符反向排列，不是逆序打印。要求：不能使用C函数库中的字符串操作函数。
//char *reverse_string(char * string)
//{
//	char *p = string;
//	int n = 0;
//	while (*p++ != 0)
//		n++;//计算字符个数
//	if (n > 1)
//	{
//		char temp = string[0];
//		string[0] = string[n - 1];
//		string[n - 1] = '\0';
//		reverse_string(string + 1);//递归调用
//		string[n - 1] = temp;
//	}
//	return string;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", reverse_string(arr));
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n < 9)
//		return n;
//	return n%10+DigitSum(n/10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现
//int power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*power(n, k - 1);
//	}
//	else if (k = 1)
//		return 1;
//	else
//	{
//		return 1.0 / (n*power(n, k - 1));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}



//递归和非递归分别实现求第n个斐波那契数
//非递归
int Fib(int n)
{
	int a = 1;
	int b = 1;
	if (n > 2)
	{
		int c = 0;
		for (int i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;

	}
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n",ret );
	return 0;
}

////递归
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	if (n > 2)
//	{
//		int c = a + b;
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
