#include <iostream>
using namespace std;

//c++的引用
//引用必须初始化 初始化之后不可改变引用目标

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int& b = a;
	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//数组的引用
	int arr[10];
	int (&parr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "parr=" << parr[i] << endl;
	}

	//参数传递
	int m = 10;
	int n = 20;
	Swap(m,n);
	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
	return 0;
}