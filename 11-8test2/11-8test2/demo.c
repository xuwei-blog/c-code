#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	
	char arr[20] = "abc@qq.com";
	char* p = "@.";
	char tmp[20] = { 0 };
	strcpy(tmp, arr);
	char* ret = NULL;

	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	/*ret = strtok(tmp, p);
	printf("%s\n",ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);*/

	

	return 0;
}