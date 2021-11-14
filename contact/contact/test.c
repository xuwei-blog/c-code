#include "contact.h"



void menu()
{
	printf("********************************\n");
	printf("*******  1.add    2.del    *****\n");
	printf("*******  3.search 4.modify *****\n");
	printf("*******  5.sort   6.print  *****\n");
	printf("*******  0.exit            *****\n");
	printf("********************************\n");
}


enum option
{            //枚举类型成员最好大写
	exit,
	add,
	del,
	search,
	modify,
	sort,
	print

};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			break;
		case search:
			break;
		case modify:
			break;
		case sort:
			break;
		case print:
			PrintContact(&con);   //即使不修改数据 传地址也比较好
			break;
		case exit:
			break;
		default:
			printf("输入有误,请重新输入;>");
			break;
		}


	} while (input);


	return 0;
}