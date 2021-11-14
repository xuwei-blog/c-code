#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data,0,sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录满了");
		return;
	}
	// 增加一个人的信息
	printf("输入名字;>");
	scanf("%s", pc->data[pc->sz].name);
	printf("输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("输入性别");
	scanf("%s", pc->data[pc->sz].sex);
	printf("输入电话");
	scanf("%s", pc->data[pc->sz].tele);
	printf("输入地址");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%20s\t %5s\t %5s\t %12s\t %20s\n","name","age","sex","tele","addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%20s\t %5d\t %5s\t %12s\t %20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr   );

	}

}