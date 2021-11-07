#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;  
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;   //∑µªÿ≥ı ºdestµÿ÷∑
}


int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//my_strcat(arr,arr2);
	printf("%s\n", my_strcat(arr1, arr2));


	return 0;
}