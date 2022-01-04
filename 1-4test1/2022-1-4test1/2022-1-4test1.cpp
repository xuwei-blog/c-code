#include <iostream>
using namespace std;

//公共继承
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son1 :public Base1
{
public:
	void func()
	{
		m_a = 100;//父类中 公共权限 子类中 公共权限
		m_b = 100;//父类中 私有权限 子类中 私有权限

		//父类中的私有信息 子类无法访问
		//m_c = 100;
	}
};


//保护继承
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son2 :protected Base2
{
public:
	void func()
	{
		m_a = 100;//父类中 公共权限 子类中 保护权限
		m_b = 100;//父类中 私有权限 子类中 保护权限

		//父类中的私有信息 子类无法访问
		//m_c = 100;
	}
};


//私有继承
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son3 :private Base3
{
public:
	void func()
	{
		m_a = 100;//父类中 公共权限 子类中 私有权限
		m_b = 100;//父类中 私有权限 子类中 私有权限

		//父类中的私有信息 子类无法访问
		//m_c = 100;
	}
};

int main()
{
	//公共继承
	Son1 s1;
	s1.m_a = 100;//在Son1中 m_a是公共权限 类外可以访问
	//s1.m_b = 100;//在Son1中 m_b是保护权限 类外不可访问
	
	//保护继承
	Son2 s2;
	//s2.m_a = 100; //保护权限 无法访问
	//s2.m_b = 100; //保护权限 无法访问
	//s2.m_c = 100; //私有权限 类外不可以访问

	//私有继承
	Son3 s3;
	//s3.m_a = 100; //私有权限 类外不可以访问
	//s3.m_b = 100; //私有权限 类外不可以访问
	//s3.m_c = 100; //私有权限 类外不可以访问

	return 0;
}