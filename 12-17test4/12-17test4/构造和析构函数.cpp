#include <iostream>
using namespace std;

class Person
{
public:  
	//构造函数 有参 和 无参
	Person()
	{
		cout << "Person默认构造函数的调用" << endl;
	}
	Person(int age)
	{
		p_age = age;
		cout << "Person有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		p_age = p.p_age;
		cout << "Person拷贝构造函数的调用" << endl;

	}

	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int p_age;
};

int main()
{   //构造函数的调用
	Person p(18);     //括号法
	Person p2(p);

	Person p3;    //无参构造
	//注意不要写成函数的声明  Person p3();

	//显示法
	Person p4 = Person(10);
	Person p5 = Person(p4);   //注意栈中  p4先进去 p5再进去
	                           //先执行p5析构函数 再p4

	//匿名对象 执行完 立即释放
	Person(10);

	//不要用拷贝构造函数 初始化 匿名对象
	Person(p3);  //编译器认为p3实例化 会重定义

	//隐式法   不建议用
	Person p6 = 10;  //会转换成 Person p6 = Person(10);
	Person p7 = p6;     
	return 0;
}