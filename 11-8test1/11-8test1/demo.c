#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strstr(char* str1, char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = str1;
	if (*str2 == '\0')
	{
		return str1;
	}
	while (*cp)
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
	printf("%s", my_strstr(p, q));
	
	return 0;
}