#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strcmp1(char *str1, char* str2)
{
	int  i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return str1[i] > str2[i] ? 1 : -1;
}

int my_strcmp2(char* str1, char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 > *str2 ? 1 : -1;
}

int main()
{
	char* str1 = "hello";
	char* str2 = "hello";

	int ret1 = my_strcmp1(str1, str2);
	int ret2 = my_strcmp2(str1, str2);

	if (ret2 == 0)
	{
		printf("str1 = str2");

	}
	else if (ret2 == 1)
	{
		printf("str1 > str2");

	}
	else
	{
		printf("str1 < str2");

	}


	return 0;
}