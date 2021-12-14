#include <iostream>
#include <cstdlib>
using namespace std;

struct Person
{
	int age;
};

//引用
void allocateSpace1(Person * &p)
{
	p = (Person*)malloc(sizeof(Person));
	p->age = 20;
}

//多级指针
void allocateSpace2(Person ** p)
{
	//p指向指针的指针 *p指针 指向的是person本体  **p person本体
	*p = (Person*)malloc(sizeof(Person));
	(*p)->age = 10;
}



void test1()
{
	Person * p = NULL;
	allocateSpace1(p);
	//allocateSpace2(&p);
	cout << "p->age= " << p->age << endl;
}

int main()
{
	test1();

	return 0;
}