#define _CRT_SECURE_NO_WARNINGS   1
//模拟实现memmove
//#include<stdio.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//			*((char*)dest + count) = *((char*)src + count);
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr + 3, arr, 16);
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);*/
//	return 0;
//}


//模拟实现memcpy
#include<stdio.h>
#include<assert.h>
void*my_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_memcpy(arr + 2, arr, 16);
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}