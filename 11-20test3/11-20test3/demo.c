#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <ctype.h>

enum State
{
	INVALID,
	VALID
};

enum State state = INVALID;

int my_atoi(const char* s)
{
	int flag = 1;
	//空指针
	if (NULL == s)
	{
		return 0;
	}
	//空字符
	if (*s == '\0')
	{
		return 0;
	}
	//跳过空白字符
	while (isspace(*s))
	{
		s++;
	}
	//+ / -
	if (*s == '+')
	{
		flag = 1;
		s++;
	}
	else if (*s == '-')
	{
		flag = -1;
		s++;
	}
	//处理数字字符的转换
	long long n = 0;
	while (isdigit(*s))
	{
		n = n * 10 + flag * (*s - '0');
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		state = VALID;
		return (int)n;
	}
	else
	{ 
		//非数字字符的情况
		return (int)n;
	}
		


}

int main()
{
	
	const char* p = "     -1234";
	int ret = my_atoi(p);
	if(state == VALID)
		printf("合法的转换:%d\n",ret);
	else
		printf("不合法的转换:%d\n", ret);

	return 0;
}