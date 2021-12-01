#define _CRT_SECURE_NO_WARNINGS 1
#include "snake.h"



int main()
{

	srand((unsigned int)time(NULL));  //随机数种子
	InitSnake();  //初始化蛇
	InitFood();   //初始化食物
	InitUI();     //界面
	PlayGame();  



	return 0;
}