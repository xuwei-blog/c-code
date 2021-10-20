#include <stdio.h>
#include <string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[20] = {0};
	gets(arr);

	
	int len = strlen(arr);
	reverse(arr,arr+len-1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' & *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')  //如果end指向\0 不跳

		{
			start = end + 1;

		}
		else
			start = end;       // 循环退出条件
	}
	printf("%s",arr);
	return 0;
}