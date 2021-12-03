#include "snake.h"


//蛇的初始化
void InitSnake()
{
	snake.size = 2;
	snake.body[0].x = WIDE / 2;     //蛇头初始化
	snake.body[0].y = HIGH / 2;

	snake.body[1].x = WIDE / 2 - 1; //蛇的一节身体初始化
	snake.body[1].y = HIGH / 2;
}


//食物的初始化
void InitFood()
{
	food.x = rand() % WIDE; 
	food.y = rand() % HIGH;
}


//初始化UI 
void InitUI()
{
	//获取光标位置的变量
	COORD coord = { 0 };

	//画蛇
	
	for (int i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].x;
		coord.Y = snake.body[i].y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if(i == 0)
			putchar('@');
		else
		{
			putchar('*');
		}
		
	}
	//去除蛇尾
	coord.X = lastx;
	coord.Y = lasty;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');

	//画食物
	coord.X = food.x;
	coord.Y = food.y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');




}

void PlayGame()
{
	char key = 'd';
	//判断蛇是否撞墙
	while (snake.body[0].x >=0 && snake.body[0].x <WIDE
		&& snake.body[0].y >=0 && snake.body[0].y <HIGH)
	{

		InitUI();

		//接收用户按键wasd
		if (_kbhit()) //函数返回值为真说明有输入  不阻塞接收用户输入
		{
			key = _getch();
		}
		switch (key)
		{
		case 'w':
			kx = 0;
			ky = -1;
			break;
		case 'a':
			kx = -1;
			ky = 0;
			break;
		case 's':
			kx = 0;
			ky = 1;
			break;
		case 'd':
			kx = 1;
			ky = 0;
			break;
		default:
			break;
		}


		//蛇头撞身体 
		
		for (int i = 1; i < snake.size; i++)
		{
			//蛇头是否等于身体
			if (snake.body[0].x == snake.body[i].x
				&& snake.body[0].y == snake.body[i].y)
				return;
		}
		//蛇头撞食物
		if (snake.body[0].x == food.x
			&& snake.body[0].y == food.y)
		{
			//食物消失
			InitFood();

			//身体增长
			snake.size++;
			//加分
			score += 10;
			//加速
			sleepsed -= 20;
		}

		//存储蛇尾的坐标
		lastx = snake.body[snake.size - 1].x;
		lasty = snake.body[snake.size - 1].y;
		
		//蛇移动 前一节身体给后一节身体赋值
		for (int i = snake.size - 1; i > 0; i--)
		{
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;

		}
		snake.body[0].x += kx;   //修改蛇头坐标
		snake.body[0].y += ky;

		//加速
		Sleep(sleepsed);
		//清屏
		//system("cls");

	}
}

void InitWall()
{
	for (int i = 0; i <= HIGH; i++)
	{
		for (int j = 0; j <= WIDE; j++)
		{
			if (j == WIDE)
			{
				printf("|");
			}
			else if (i == HIGH)
			{
				printf("_");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


void ShowScore()
{
	//将光标默认位置移动至不干扰游戏的位置
	COORD coord;
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("GAME OVER!!!\n");
	printf("成绩为 %d\n\n\n\n\n",score);
}
