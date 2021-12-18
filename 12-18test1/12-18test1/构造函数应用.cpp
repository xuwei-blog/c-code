#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;


class Person
{
public:
	Person(const char * name,int age)
	{
		p_name = (char *)malloc(strlen(name) + 1);
		strcpy(p_name,name);
		p_age = age;
	}
	Person(const Person& p)
	{
		p_name = (char*)malloc(strlen(p.p_name)+1);
		strcpy(p_name,p.p_name);
		p_age = p.p_age;
	}
	~Person()
	{
		if (p_name != NULL)
		{
			cout << "析构函数" << endl;;

			free(p_name);
			p_name = NULL;
		}
	}

	char * p_name;
	int p_age;
};

void test1()
{
	Person p1("德玛西亚", 20);
	cout << "name=" << p1.p_name << "age=" << p1.p_age << endl;;
	Person p2(p1);
	cout << "name=" << p2.p_name << "age=" << p2.p_age<<endl;

}

int main()
{
	test1();

	return 0;
}