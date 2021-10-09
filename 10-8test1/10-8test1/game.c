#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
			//printf("%c \n", board[i][j]);
		}
	}
}


//      3*3     的三子棋
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c 丨 %c 丨 %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row -1)
//		{
//			printf("---丨---丨---\n");
//		}
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int m = 0;
	for (m = 0; m < row; m=m+1)     //打印行
	{
		int n = 0;
		for (n = 0;n<col;n++)    //打印列
		{
			printf(" %c ",board[m][n]);
			if (n < col - 1)
			{
				printf("丨");

			}
		}
		printf("\n");
		if (m < row - 1)
		{
			int m = 0;
			for (m = 0; m < col; m++)
			{
				//printf("%d", col);

				printf("---");
				if (m < col - 1)
					printf("丨");
			}
			printf("\n");
		 }

		
	}
}



void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("玩家走:>\n");
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);

		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{

			//下棋
			//是否坐标被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}

		}
		else
		{
			printf("坐标非法, 请重新输入\n");
		}

	}
	

}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("电脑走;>\n");
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}

}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;  //棋盘没满
			}

		}
	}
	return 1; //棋盘满了
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}


	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}


	//判断平局
	//如果棋盘满了返回1  不满返回0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';


}	
