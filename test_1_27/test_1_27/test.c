#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
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


//дһ����������������һ���ַ��������ݡ�
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


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
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

//������
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


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100001; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		while (tmp / 10)//����Ǽ�λ��
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ӡ����
//int main()
//{
//	/*int line = 0;*/
//	int i = 0;
//	//scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i<7; i++)
//	{
//		int j = 0;
//		for (j = 0; j<7 - 1 - i; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * i + 1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
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


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����1
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
//// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money*2-1

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//����2
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