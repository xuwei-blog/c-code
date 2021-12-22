#include <iostream>
using namespace std;
class Person
{
public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	//试图成员函数 <<重载
	void operator<<(Person& p)   //p.operator<<(cout)    p<<cout
	{

	}
	int m_A;
	int m_B;
};

//利用全局函数 实现左移
ostream& operator<<(ostream &cout, Person& p1)
{
	cout << "m_A = " << p1.m_A << "m_B = " << p1.m_B;
	return cout;
}

void test1()
{
	Person p1(10,10);
	cout << p1 <<endl;
}
int main()
{
	test1();
	return 0;
}