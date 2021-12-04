//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int my_strstr(char* str, char* substr)
//{
//	int num = 0;
//	while (*str != '\0')
//	{
//		if (*str != *substr)
//		{
//			num++;
//			str++;
//			continue;
//		}
//		char* tmpstr = str;
//		char* tmpsubstr = substr;
//		while (*tmpsubstr != '\0')
//		{
//			if (*tmpstr != *tmpsubstr)
//			{
//				num++;
//				str++;
//				break;
//			}
//			tmpstr++;
//			tmpsubstr++;
//
//		}
//		if (*tmpsubstr == '\0')
//		{
//			return num;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char* str = "abcdedefesdh";
//	char* substr = "h";
//
//	int ret = my_strstr(str,substr);
//	if (ret == 0)
//		printf("找不到\n");
//	else
//		printf("找到了\n");
//
//
//
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strstr(char* str1, char* str2)
{
    assert(str1 && str2);
    char* s1 = NULL;
    char* s2 = NULL;
    char* cp = str1;         //回溯
    if (*str2 == '\0')
    {
        return str1;  //substr如果为空直接返回str
    }
    while (*cp)  //str不为空执行
    {
        s1 = cp;  
        s2 = str2;
        while ((*s1 == *s2) && *s1 && *s2)
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return cp;
        }
        cp++;
    }
}

int main()
{
    char* p = "abbbccc";
    char* q = "bbc";
    char* ret = my_strstr(p, q);
    if (ret == NULL)
    {
        printf("not find");
    }
    else
    {
        printf("%s", ret);
    }
    return 0;
}
