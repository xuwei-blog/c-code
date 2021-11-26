#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void my_strnospace(char* src, char* dest)
{
	while (*src)
	{
		if (*src != ' ')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
}
int main()
{
	char* src = "ni chou sha";
	char dest[100];

	my_strnospace(src, dest);

	printf("%s",dest);


	return 0;
}