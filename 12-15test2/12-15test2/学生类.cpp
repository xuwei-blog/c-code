#include <iostream>
using namespace std;
#include <string>
class Student
{
public:  //公共权限
	string s_name;
	int s_age;
};

void test1()
{
	Student s1;
	s1.s_age = 10;
	s1.s_name = "zhangsan";
	cout << "name:" << s1.s_name << endl;
	cout << "age:" << s1.s_age << endl;
}
//内联函数  可以在预处理时展开 以空间换时间    类内部的函数  隐式增加了inline
inline void func();
inline void func() {  };

//函数重载
void func(int a,int b)
{
	cout << "func(int a)" << endl;
}
void func(int b)
{
	cout << "func(int b)" << endl;

}
void test2()
{
	func(1);

}
int main()
{
	//test1();
	test2();
	return 0;
}