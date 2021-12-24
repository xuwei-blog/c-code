#include <iostream>
using namespace std;


class MyInter
{
	//前置++  friend ostream& operator<<(ostream& cout, MyInter& my_inter);
	//后置++  
	friend ostream& operator<<(ostream& cout, MyInter my_inter);

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

	//后置++
	MyInter operator++(int)    //返回值 不需要引用   
		                        //不能 ((a++)++)  
		                        //返回值是temp不是a
	{
		//j记录初始状态
		MyInter temp = *this;
		this->m_num++;
		return temp;
	}
private:
	int m_num;
};

ostream& operator<<(ostream& cout, MyInter my_inter)
{
	cout << my_inter.m_num;
	return cout;
}


void test2()
{
	MyInter my_inter;
	cout << my_inter++ << endl;
	cout << my_inter << endl;

}
void test1()
{
	MyInter my_inter;
	cout << ++(++(++my_inter)) << endl;
}


int main()
{
	test2();
	return 0;
}