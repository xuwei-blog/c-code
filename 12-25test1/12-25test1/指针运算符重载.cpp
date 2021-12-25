#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person有参构造调用" << endl;
		this->m_age = age;
	}
	void showage()
	{
		cout << "age = " << this->m_age << endl;
	}
	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	int m_age;
};


class SmartPoint
{
public:
	SmartPoint(Person* person)
	{
		this->m_person = person;
	}
	~SmartPoint()
	{
		if (this->m_person)
		{
			delete this->m_person;
			this->m_person = NULL;
		}
	}
	//重载->运算符
	Person* operator->()
	{
		return this->m_person;
	}
	//重载 * 运算符
	Person& operator*()
	{
		return *m_person;
	}

private:
	Person* m_person;
};
void test1()
{
	//Person *p = new Person(18);
	//p->showage();
	////或者 本体.函数名 (*p).showage();  
	//delete p;
	SmartPoint sp(new Person(18));
	sp->showage(); //编译器简化前 sp->->showage();
	(*sp).showage();
}

int main()
{

	test1();
	return 0;
}