#define _CRT_SECURE_NO_WARNINGS   1
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299������� : 7

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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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



//дһ���������ز����������� 1 �ĸ��������磺 15    0000 1111    4 �� 1

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
////ģ��ʵ��strcpy����
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