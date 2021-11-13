#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int say_sys()
{
	union Un
	{
		char a;
		int b;
	}u;
	u.b = 1;
	return u.a;
}

int main()
{
	int ret = say_sys();
	if (ret == 1)
	{
		printf("xiao duan");

	}
	else
	{
		printf("da duan");
	}


	return 0;
}