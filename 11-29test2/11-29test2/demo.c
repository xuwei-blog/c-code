#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define WIDE 60
#define HIGH 20

//一个身体的对象
struct BODY
{
	int x;
	int y;
};

//定义蛇对象
struct SNACK
{
	struct BODY body[HIGH*WIDE];
	int size;
}snack;

//定义食物对象
struct FOOD
{
	int x;
	int y;
}food;

int score = 0;

//蛇的初始化
void InitSnack(void)
{
	snack.size = 2;
	snack.body[0].x = WIDE / 2; //蛇头初始化
	snack.body[0].y = HIGH / 2;

	snack.body[1].x = WIDE / 2 -1; //蛇的一节身体初始化
	snack.body[1].x = HIGH / 2;
}

int main()
{
	for (size_t i = 0; i < HIGH; i++)
	{
		for (size_t j = 0; j < WIDE; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}