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

