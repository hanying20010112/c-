#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//实现一个对整形数组的冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int flag = 1;   //用来假设数组已有顺序
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


//创建一个整形数组，完成对数组的操作 实现函数init() 初始化数组为全0 实现print()  打印数组的每个元素 实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
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
//	print(arr, sz);//打印
//	printf("\n");
//	reverse(arr, sz);//逆置
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);//初始为0
//	print(arr, sz);
//	printf("\n");
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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

//三子棋