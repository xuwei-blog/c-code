#include  <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_age = age;
	}
	//常函数: 修饰成员函数中的this指针 让指针指向的值不可以修改
	void ShowPerosn() const 
	{
		//this指针的本质 :  Person * const this
		// this =NULL 指针的指向不可以修改 而指针指向的值可以改
		// const Person * const this
		//m_age = 100;  常函数 不能修改成员属性
		m_a = 100;
		cout << "person age = " << m_age << endl;
	}
	int m_age;
	mutable int m_a; //关键字 能在常函数中修改成员属性
};

int main()
{
	//常对象   注意:常对象 只能调用常函数  避免其他函数修改成员变量的属性
	const Person p1(10);
	//p1.m_age = 10;    //不能修改
	p1.m_a = 10;        //可以修改

	p1.ShowPerosn();
}