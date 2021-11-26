#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void my_strcpy1(char* src, char* dest)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void my_strcpy2(char* src, char* dest)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	
	char* src = "hello";
	char* dest[100] ;
	my_strcpy2(src, dest);
	printf("%s",dest);

	return 0;
}