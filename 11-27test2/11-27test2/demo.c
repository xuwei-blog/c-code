#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void my_strcpy(char* dest, char* src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

int main()
{
	char* str = "hello world";
	char dest[100];
	my_strcpy(dest, str);

	printf("%s",dest);

	return 0;
}