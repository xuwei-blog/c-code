#include <iostream>
using namespace std;


class MyOutOfRangeExcepton :public exception
{
public:
	MyOutOfRangeExcepton(const char* str)
	{
		//const char * 可以隐式类型转换成 string 反之不可以
		this->m_errorinfo = str;
	}

	MyOutOfRangeExcepton(string str)
	{ 
		this->m_errorinfo = str;

	}

	//重写
	virtual const char* what() const
	{
		//将string转为const char *
		return m_errorinfo.c_str();
	}

	string m_errorinfo;
};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			throw MyOutOfRangeExcepton(string ("年龄必须在0到150之间"));
		}
		else
		{
			this->m_age = age;
		}
	}

	int m_age;
};


int main()
{
	try
	{
		Person p(1000);
	
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}

	return 0;
}