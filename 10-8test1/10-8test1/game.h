#define _CRT_SECURE_NO_WARNINGS 1

//头文件的引用
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//符号的定义
#define ROW 10
#define COL 10



//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走
void PlayerMove(char board[ROW][COL],int row,int col);

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);