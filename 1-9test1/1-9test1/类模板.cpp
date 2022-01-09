#include <iostream>
using namespace std;
#include <string>

template<class NAMETYPE,class AGETYPE =int> //类模板中 可以有默认
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "姓名= " << this->m_name << " 年龄= " << this->m_age << endl;
	}

	NAMETYPE m_name;
	AGETYPE m_age;
};

int main()
{
	Person<string>p1("王德法", 100);
	p1.showperson();
	return 0;
}