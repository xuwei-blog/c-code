#include <iostream>
using namespace std;

int mydiv(int a, int b)
{
	if (b == 0)
	{
		throw 'a';
	}
	return a / b;
}

int main()
{
	int a = 10;
	int b = 0;

	try
	{
		mydiv(a, b);
	}
	catch (int)
	{
		cout << "int类型异常捕获" << endl;
	}
	catch (...)
	{
		cout << "其他类型异常捕获" << endl;
	}

	return 0;
}