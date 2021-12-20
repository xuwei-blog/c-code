#include <iostream>
using namespace std;

class ChairMan
{
public:
	static ChairMan* GetInstance()
	{
		return singleman;
	}
private:
	//将构造函数私有化 不可以创建多个对象
	ChairMan() { }
	ChairMan(const ChairMan &){}
	//将主席指针私有化 对外提供只读接口
	static ChairMan* singleman;  //类内声明 类外初始化
};
ChairMan* ChairMan::singleman = new ChairMan;

void test1()
{
	ChairMan* c1 = ChairMan::GetInstance();
	ChairMan* c2 = ChairMan::GetInstance();
	if (c1 == c2)
		cout << "c1 == c2" << endl;
	else
		cout << "c1 != c2" << endl;

}

int main()
{
	test1();
	return 0;
}