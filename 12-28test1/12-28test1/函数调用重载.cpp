#include <iostream>
using namespace std;
#include <string>
class MyADD
{
public:
	int  operator()(int a,int b)  
	{
		return a + b;
	}
};

int main()
{
	MyADD my;
	my(1,1);//   类的  仿函数
	cout << MyADD()(1, 1) << endl; //匿名函数 执行完立即释放
	return 0;
}