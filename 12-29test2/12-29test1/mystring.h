#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>
class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& str);

public:


	MyString(const char* str);
	MyString(const MyString & str);
	~MyString();


private:
	char * pString; //维护在堆区开辟的字符数组
	int m_size;   //字符串长度 不统计 \0
};