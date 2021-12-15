#include <iostream>
using namespace std;

//函数重载
//函数作用域 相同
//函数名 相同
//函数的参数 顺序 类型 个数 不同
//返回类型不同
void func(int& a)
{
	cout << "func(int &a)" << endl;
}
void func(const int& a)
{
	cout << "func(const int &a)" << endl;

}

void test1()
{
	int a = 10;
	func(a);  //类型是 int 
	printf("---------------\n");
	func(10);  //int &a =10  语法不支持     const int &a =10 会开辟temp空间
}
int main()
{
	test1();

	return 0;
}