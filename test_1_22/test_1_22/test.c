#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ�
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

//�ǵݹ�
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


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ݹ�
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

////�ǵݹ�
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



//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�ʵ�֣��������ַ����е��ַ��������У����������ӡ��Ҫ�󣺲���ʹ��C�������е��ַ�������������
//char *reverse_string(char * string)
//{
//	char *p = string;
//	int n = 0;
//	while (*p++ != 0)
//		n++;//�����ַ�����
//	if (n > 1)
//	{
//		char temp = string[0];
//		string[0] = string[n - 1];
//		string[n - 1] = '\0';
//		reverse_string(string + 1);//�ݹ����
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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ǵݹ�
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

////�ݹ�
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
