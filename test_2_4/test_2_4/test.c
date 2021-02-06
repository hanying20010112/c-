#define _CRT_SECURE_NO_WARNINGS   1
//模拟实现strcat
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, char* stc)
//{
//	assert(dest && stc);
//	char* ret = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *stc++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a1[20] = "hello";
//	char a2[20] = "bit";
//	printf("%s\n", my_strcat(a1, a2));
//	return 0;
//}



//模拟实现strstr
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 &&s2);
//	const char* cp = s1;
//	if (*s2 == '\0')
//		return (char*)s1;
//	while (*cp)
//	{
//		const char* p1 = cp;
//		const char* p2 = s2;
//		while ((*p1) && (*p2) && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)cp; cp++;
//
//	}
//	return NULL;
//}
//int main()
//{
//	char a1[] = "abcdef";
//	char a2[] = "cde";
//	char* ret = my_strstr(a1, a2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("未找到子串\n");
//	return 0;
//}


//模拟实现strcmp
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char a1[] = "abc";
//	char a2[] = "abcdef";
//	int ret = my_strcmp(a1, a2);
//	printf("%d\n", ret);
//	return 0;
//}



//模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char*dest, const char*src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char a1[] = "**************";
//	char a2[] = "hello bit";
//	my_strcpy(a1, a2);
//	printf("%s\n", a1);
//	return 0;
//}


//模拟实现 strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	const char* cp = str;
	while (*cp != '\0')
		cp++;
	return cp - str;
}
int main()
{
	char arr[] = "hello bit";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}