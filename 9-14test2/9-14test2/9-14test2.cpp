# define _CRT_SECURE_NO_WARNINGS 1
# include <string.h>
# include <stdio.h>


int main()
{

	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{

			printf("登入成功");
				break;
		}


	}
	if (i == 3)
	{
		printf("三次输入均错误");
	}
	return 0;
}