#pragma once
//头文件引用
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

//宏定义
#define WIDE 60
#define HIGH 20

static int score = 0;

static int kx = 0;    //用户按下wasd 得到的坐标
static int ky = 0;

static int lastx = 0;  //蛇尾的坐标
static int lasty = 0;

static int sleepsed = 400;


//一个身体的对象
struct BODY
{
	int x;
	int y;
}body;

//定义蛇对象
struct SNAKE
{
	struct BODY body[HIGH * WIDE];
	int size;
}snake;

//定义食物对象
struct FOOD
{
	int x;
	int y;
}food;


//函数的声明
void InitSnake();

void InitFood();

void InitUI();

void PlayGame();

void InitWall();

void ShowScore();
