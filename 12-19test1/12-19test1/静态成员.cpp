#include <iostream>
using namespace std;
class Person
{
public:
	//静态成员变量:编译阶段就分配了内存
	//类内声明 类外初始化
	//静态成员变量 所有对象都共享同一份数据
	static int a;
};
int Person::a = 0;

int main()
{
	//1.通过对象进行访问
	Person p1;
	cout << p1.a << endl;
	Person p2;
	p2.a = 100;
	cout << p1.a << endl;  //p1 p2共享数据

	//2.通过类名访问
	cout << Person::a << endl;

	return 0;
}