#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S
{
	char arr[10];
	int a;
	float b;
};

int main()
{
	struct S s = {"abc",10,5.5f};
	struct S tmp = { 0 };
	char arr2[20];
	//把一个格式化的数据 转换成字符串
	sprintf(arr2,"%s %d %f\n",s.arr,s.a,s.b);

	printf("%s",arr2);
	//从arr2字符串中还原出一个结构体数据
	sscanf(arr2,"%s %d %f",tmp.arr,&(tmp.a),&(tmp.b));
	printf("%s %d %f\n",tmp.arr,tmp.a,tmp.b);
	return 0;
}