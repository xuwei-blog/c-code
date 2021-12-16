#include <iostream>
using namespace std;
#include <string>
//类默认私有权限
//结构体默认公共权限
class Person
{
public:
	//设置姓名
	void SetName(string name)
	{
		p_name = name;
	}
	//获取姓名
	string GetName()
	{
		return p_name;
	}
	//获取年龄
	int GetAge()
	{
		return p_age;
	}
	//设置情人
	void SetLover(string lover)
	{
		p_lover = lover;
	}
private:
	string p_name;   //可读可写
	int p_age=18;     //只读
	string p_lover;   //只写
protected:


};

int main()
{
	Person p;
	p.SetName("张三");
	cout << "姓名:" << p.GetName() << endl;
	//获取年龄
	cout << "年龄:" << p.GetAge() << endl;

	//设置情人
	p.SetLover("王五");
	return 0;
}