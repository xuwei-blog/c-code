#define _CRT_SECURE_NO_WARNINGS 1
#include "snake.h"



int main()
{
	//光标隐藏
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);


	srand((unsigned int)time(NULL));  //随机数种子

	InitSnake();  //初始化蛇
	InitFood();   //初始化食物
	InitWall();
	InitUI();     //界面
	PlayGame();  

	//打印分数
	ShowScore();
	return 0;
}