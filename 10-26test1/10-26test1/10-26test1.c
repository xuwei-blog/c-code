#include <stdio.h>

int i;   //全局变量 没有初始化 默认是 0
int main()
{
	i--; // -1
	if (i > sizeof(i))   //sizeof算出的结果是 4  类型是 无符号整型unsigned int  i被转换成无符号整型 -1变成超级大的数字
	{
		printf(">");
	}
	else
	{
		printf("<");
	}
	return 0;
}