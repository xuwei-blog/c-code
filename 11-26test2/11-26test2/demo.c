#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char* my_strch(char* src, char* ch)
{
	while (*src)
	{
		if (*src == *ch)
		{
			return src;
		}
		src++;
	}
	return NULL;
}

int main()
{
	char* src = "hello world";
	char* ch = "o";

	
	char* ret  = my_strch(src, ch);
	if(ret != NULL)
		printf("%s", ret);


	return 0;
}