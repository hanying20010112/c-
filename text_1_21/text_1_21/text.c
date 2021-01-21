#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>

int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
		return 1;
		
	}
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime == 1)
			printf("%d ", i);
	}
	return 0;
}


//int binary_search(int arr,int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	while (left <= right)
//	{
//		if (arr[mid] > k)
//			right = mid - 1;
//	}
//}
//
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int ret = binary_search(arr, k, sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
