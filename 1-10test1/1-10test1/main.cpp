#include "通用类型数组.hpp"

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void myprintint(MyArray<int>& myintarray)
{
	for (int i = 0; i < myintarray.getsize(); i++)
	{
		cout << myintarray[i] << endl;
	}
}

void myprintperson(MyArray<Person>& mypersonarr)
{
	for (int i = 0; i < mypersonarr.getsize(); i++)
	{
		cout <<"姓名 = " << mypersonarr[i].m_name <<" 年龄 =" << mypersonarr[i].m_age << endl;
	}
}

int main()
{
	//int 
	MyArray<int> myintarray(100);
	for (int i = 0; i < 10; i++)
	{
		myintarray.pushback(i + 100);
	}
	myprintint(myintarray);

	cout << "-----" << endl;

	//Person
	MyArray<Person> mypersonarr(100);
	Person p1("孙悟空", 1);
	Person p2("猪八戒", 2);
	Person p3("沙悟净", 3);
	Person p4("唐三藏", 4);

	mypersonarr.pushback(p1);
	mypersonarr.pushback(p2);
	mypersonarr.pushback(p3);
	mypersonarr.pushback(p4); 
	myprintperson(mypersonarr);
	cout << "容量大小 = " << mypersonarr.getcapacity() << endl;
	cout << "数组大小 = " << mypersonarr.getsize() << endl;
	return 0;
}