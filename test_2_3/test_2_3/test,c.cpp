#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//#include<string.h>
//
//int is_left_move(char* s1, char* s2)
//{
//	int len2 = strlen(s2);
//	int len1 = strlen(s1);
//	if (len1 != len2)
//		return 0;
//	strncat(s2, s2, len2);
//	if (strstr(s2, s1))
//		return 1;
//	else
//		return 0;
//	
//}
//int main()
//{
//	char a1[] = "AABCD";
//	char a2[] = "BCDAA";
//	if (is_left_move(a1, a2) == 1)
//		printf("a1是a2旋转后的字符串\n");
//	else
//		printf("a1不是a2旋转后的字符串\n");
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<assert.h>
//#include<string.h>
//void reverse(char*left,char*right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//char* left_move(char* str, int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//	return str;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//杨氏矩阵
//作业内容
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
int find(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;
	while (x < r && y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y]>k)
			y--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int  k = 0;
	scanf("%d", &k);
	int ret = find(arr, k, 3, 3);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}