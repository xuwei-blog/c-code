#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int str_inserse(char* str)
{
	char* start = str;
	char* end = str + strlen(str) - 1;

	while (start < end)
	{
		if (*start != *end)
		{
			return 0;  //不是回文
		}
		start++;
		end--;
	}
	return 1;  //回文
}

int main()
{
	char str[] = "abccba"; //变量  如果拿指针创建就是常量

	int ret = str_inserse(str);


	if (ret == 1)
	{
		printf("回文");
	}
	else
	{
		printf("不是回文");

	}

	return 0;
}