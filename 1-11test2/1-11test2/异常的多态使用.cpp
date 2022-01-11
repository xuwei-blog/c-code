#include <iostream>
using namespace std;

//异常的基类
class BaseException
{
public:
	virtual void printerror() = 0;

};
//空指针异常
class NULLPointException : public BaseException
{
public:
	virtual void printerror()
	{
		cout << "空指针的异常" << endl;
	}
};
//越界异常
class OutOfRangeException : public BaseException
{
public:
	virtual void printerror()
	{
		cout << "越界的异常" << endl;
	}
};
void dowork()
{
	throw NULLPointException();
}
int main()
{
	try
	{
		dowork();
	}
	catch (BaseException & e)
	{
		e.printerror();
	}
	return 0;
}