#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//ʵ��һ�������������ð������
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int flag = 1;   //����������������˳��
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			if (flag == 1)
				break;
		}
	}
}
void print(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
	return 0;
}


//����һ���������飬��ɶ�����Ĳ��� ʵ�ֺ���init() ��ʼ������Ϊȫ0 ʵ��print()  ��ӡ�����ÿ��Ԫ�� ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);//��ӡ
//	printf("\n");
//	reverse(arr, sz);//����
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);//��ʼΪ0
//	print(arr, sz);
//	printf("\n");
//	return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void print(int a[])
//{
//	for (int i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//}
//int main()
//{
//	int a[5] = { 0, 1, 2, 3, 4 };
//	int b[5] = { 5, 6, 7, 8, 9 };
//	for (int i = 0; i < 5; i++)
//	{
//		int tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	printf("a[5]=");
//	print(a);
//	printf("\n");
//	printf("b[5]=");
//	print(b);
//	return 0;
//}

//������