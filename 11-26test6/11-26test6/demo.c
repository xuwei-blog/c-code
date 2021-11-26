#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void str_inserse(char* str)
{
	char* start = str;
	char* end = str + strlen(str) - 1;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int main()
{
	char str[] = "helloworld"; //变量  如果拿指针创建就是常量
	
	str_inserse(str);

	printf("%s\n",str);


	return 0;
}