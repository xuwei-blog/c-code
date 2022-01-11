#include <iostream>
using namespace std;
#include <stdexcept>

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			throw out_of_range("年龄必须在0到150之间");
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
		Person p(151);
	} 
	catch (exception & e)
	{
		cout << e.what() << endl;
	}
	return 0;
}