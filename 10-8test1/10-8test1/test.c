#include "game.h"


void menu()
{
	printf("***********************\n");
	printf("******** 1.play *******\n");
	printf("******** 0.exit *******\n");
	printf("***********************\n");
}

char ret = 0;  //接受游戏状态


void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);
		//判断是否结束游戏
		ret = IsWin(board, ROW, COL);
		
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);

		DisplayBoard(board, ROW, COL);

		//判断是否结束游戏
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')                               //  BUG :  1.平局不退出   2.电脑下棋会把玩家的棋子覆盖
		{
			break;
		}


	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
		

	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}



int main()
{
	int c = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d",&c);
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