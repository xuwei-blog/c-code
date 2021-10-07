#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("***********************\n");
	printf("******** 1.play *******\n");
	printf("******** 0.exit *******\n");
	printf("***********************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int c = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (c);

	return 0;
}