#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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
//		printf("a1��a2��ת����ַ���\n");
//	else
//		printf("a1����a2��ת����ַ���\n");
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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


//���Ͼ���
//��ҵ����
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
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