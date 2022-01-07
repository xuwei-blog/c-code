#include <iostream>
using namespace std;
#include <string>

class calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_a + m_b;
		}
		else if (oper == "-")
		{
			return m_a - m_b;
		}
		else if (oper == "*")
		{
			return  m_a * m_b;
		}
	}
	int m_a;
	int m_b;
};

//设计原则 : 开闭原则
// 堆扩展进行开放 堆修改进行关闭
//利用多态实现计算器
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_a;
	int m_b;
};
//加法计算器
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a + m_b;
	}
};
//减法计算器
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a - m_b;
	}
};
//乘法计算器
class MulCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a * m_b;
	}
};
//除法计算器
class  DivCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a / m_b;
	}
};
int main()
{
	AbstractCalculator* calculator = new AddCalculator;
	calculator->m_a = 100;
	calculator->m_b = 100;
	cout << calculator->getResult() << endl;
	delete calculator;

	calculator = new SubCalculator;
	calculator->m_a = 100;
	calculator->m_b = 100;
	cout << calculator->getResult() << endl;
	delete calculator;


	return 0;
}