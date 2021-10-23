#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
		//-1 -2  -3 ... -128 127 126... 2 1      0       -1  -2......
		//128 + 127 =255
	}
	printf("%d", strlen(arr)); //找到\0 或者 0 说明字符串结束
	return 0;
}