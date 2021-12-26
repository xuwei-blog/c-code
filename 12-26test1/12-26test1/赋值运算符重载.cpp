#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
	Person(const char* name, int age)
	{
		this->m_name = new char[strlen(name) + 1];
		strcpy(this->m_name, name);
		this->m_age = age;
	}
	//重载operator=
	Person& operator=(const Person& p)
	{
		//先判断原来堆区是否有内容 有就先释放
		if (this->m_name != NULL)
		{
			delete[] this->m_name;
			this->m_name = NULL;
		}
		this->m_name = new char[strlen(p.m_name) + 1];
		strcpy(this->m_name, p.m_name);
		this->m_age = p.m_age;
		return  *this;
	}
	//拷贝构造
	Person(const Person& p)
	{
		this->m_name = new char[strlen(p.m_name) + 1];
		strcpy(this->m_name, p.m_name);
		this->m_age = p.m_age;
	}

	~Person()
	{
		if (this->m_name != NULL)
		{
			delete [] this->m_name;  //因为是数组 所以释放的时候 需要加[]
			this->m_name = NULL;
		}
	}
	char* m_name;
	int m_age;
};


int main()
{
	Person p1("tom", 10);
	Person p2("jerry", 19);
	//编译器默认给一个类4个函数 默认构造 析构 拷贝构造 operator=
	p2 = p1;
	cout << "p2.name = " << p2.m_name << " p2.age = " << p2.m_age << endl;
	//提供连等的操作
	//修改重载=的返回值 
	Person p3("",0);

	p3 = p2 = p1;
	cout << "p3.name = " << p1.m_name << " p3.age = " << p3.m_age << endl;

	//重写拷贝构造
	Person p4 = p3;
	return 0;
}