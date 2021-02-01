#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
////模拟实现strcpy函数
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
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "abcdef";
//	char*p2 = arr2;
//	printf("%s\n", my_strcpy(arr1, p2));
//	return 0;
//}

//模拟实现库函数strlen
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//
//调整数组使奇数全部都位于偶数前面。
void change(int arr[], int sz)
{
	int *left = arr;
	int *right = arr + sz - 1;
	while (left < right)
	{
		while ((left < right) && (*left) % 2 != 0)
			left++;
		while ((left < right) && (*right) % 2 == 0)
			right--;
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4,5, 6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	change(arr, sz);
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}