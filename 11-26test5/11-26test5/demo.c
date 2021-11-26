#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int str_times(char* str, char* substr)
{
	int count = 0;
	char* p = strstr(str,substr); //"llollollo"
	while (p != NULL)
	{
		count++;
		p += strlen(substr); //3
		p = strstr(p,substr);//"llollo"
	}
	return count;
}


int main()
{
	
	char str[] = "hellollollo";
	char substr[] = "llo";

	int ret = str_times(str,substr);

	printf("%d",ret);

	return 0;
}