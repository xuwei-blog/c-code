#include "mystring.h"

//重载左移运算符
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;

}

MyString::MyString(const char* str)
{
	cout << "Mystring有参构造" << endl;
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString,str);
	this->m_size = strlen(str);
}


MyString::MyString(const MyString & str)
{
	cout << "Mystringk拷贝构造" << endl;

	this->pString = new char[strlen(str.pString)+1];
	strcpy(this->pString, str.pString);
	this->m_size = str.m_size;
}

MyString::~MyString()
{
	if (this->pString != NULL)
	{
		cout << "Mystring析构" << endl;

		delete[] this->pString;
		this->pString = NULL;
	}
}