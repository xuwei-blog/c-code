#include <iostream>
using namespace std;

class Person
{
public:  //构造和析构必须声明在全局作用域
	//构造函数
	//没有返回值 不用写void
	//函数名与类名 相同
	//可以有参数 可以重载
	//构造函数由 编译器 自动调用 一次
	Person()
	{
		cout << "构造函数的调用" << endl;
	}
	//析构函数
	//没有返回值
	//函数名与类名 相同 函数名前加 ~
	//不可以有参数 不可以重载
	//析构函数由 编译器 自动调用 一次
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
};

int main()
{
	Person p;
	//对象创建的时候 调用构造函数 
	//对象清除的时候 调用析构函数
	return 0;
}