#include <iostream>
using namespace std;


class MyInter
{
	friend ostream& operator<<(ostream& cout, MyInter& my_inter);

public:
	MyInter()
	{
		m_num = 0;
	}
	//前置++
	MyInter& operator++()      //返回引用的作用是 一直加到一个对象上 
		                       //如果没有引用的话  原来的对象只会加一次
	{
		this->m_num++;
		return *this;
	}
private:
	int m_num;
};

ostream& operator<<(ostream& cout, MyInter& my_inter)
{
	cout << my_inter.m_num;
	return cout;
}

int main()
{
	MyInter my_inter;
	cout << ++(++(++my_inter)) << endl;
	return 0;
}