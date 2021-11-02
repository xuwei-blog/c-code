#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;   //  e1大于e2  return 1
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	print(arr,sz);
}

struct stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
}

void test2()
{
	struct stu s[] = { {"zhangsan",20},{"xxxxxxxxx",50},{"yyyyyyy",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照age排名
	//qsort(s,sz,sizeof(s[0]),sort_by_age);
	//按照name排名
	qsort(s,sz,sizeof(s[0]),sort_by_name);


}
int main()
{
	//排序整型
	//test1();
	//排序结构体类型
	test2();

	return 0;
}