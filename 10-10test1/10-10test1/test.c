#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("*********  1.play  *********\n");
	printf("*********  0.exit  *********\n");
	printf("****************************\n");
}

void game()
{
	//初始化棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	

	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);


	//设置雷
	SetMine(mine,ROW,COL);


	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine,show, ROW, COL);


}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误,请重新输入\n");
		}
	} while (input);


	return 0;
}