#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
//头文件
#include <string.h>
#include <stdio.h>


//定义
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


#define MAX 1000

//类型的定义
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;  //把struct PeoInfo  简写为 PeoInfo 

typedef struct Contact
{
	//创建通讯录
	PeoInfo data[MAX];
	int sz;
}Contact;

//初始化通讯录
void InitContact(Contact* pc);


//增加联系人
void AddContact(Contact* pc);


//打印通讯录信息
void PrintContact(const Contact* pc);