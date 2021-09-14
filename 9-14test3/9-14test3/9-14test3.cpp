#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void game()
{
	
	int ret = rand()%100+1;    //%100 范围0到99   再+1   1到100
	//printf("%d\n", ret);

	int guess = 0;
	while (1)
	{ 
	
		printf("猜一个数字:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了!\n");

		}
		else if (guess < ret)
		{
			printf("猜小了!\n");
		}
		else
		{ 
			printf("猜对了!\n");
			break;
	
		}
	}
}


void menu()
{
	printf("**************************\n");
	printf("******* 1.猜数字   *******\n");
	printf("******* 0.退出游戏 *******\n");
	printf("**************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));   //srand函数能给rand函数设定初始值  time函数 时间戳 

	do
	{
		menu();  //打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
			{
				printf("输入有误");
				break;
			}

		}


	} while (input);
	return 0;
}