#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//模仿qsort的功能实现一个通用的冒泡排序
#include<stdlib.h>
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void cmp_int(const void*p1, const void* p2)
{
	return (*(int*)p1 > *(int*)p2);
}
void _swap(char*buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, size_t sz,size_t width, int(*cmp)(const void*e1, const void*e2))
{
	size_t i = 0;
	for ( i = 0; i < sz-1; i++)
	{
		size_t j = 0;
		for ( j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
		}
	}
}
int main()
{
	int arr[] = { 8,5,6,2,1,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz, sizeof(arr[0]),cmp_int); 
	print_arr(arr, sz);
	return 0;
}