#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen(char arr[])
{
	assert(arr);
	char* p = arr;
	while (*p++ != '\0')
	{

	}
	return p - arr;
}
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int ret = my_strlen(arr);
	printf("%d",ret);

	return 0;
}