#include <iostream>
using namespace std;


class Animal
{
public:
	int m_age;
};

//animal称为 虚基类

//用vbptr 虚基类指针 指向 vbtable中 存放m_age的偏移量
//使m_age只有一份
class Sheep :virtual public Animal
{
	
};

class Tuo :virtual public Animal
{
	
};

class SheepTuo :public Sheep,public Tuo
{

};

int main()
{
	SheepTuo st;
	//一只羊驼只有一个年龄
	st.Sheep::m_age = 40;
	st.Tuo::m_age = 10;

	cout << "st.Sheep::age = " << st.Sheep::m_age << endl;
	cout << "st.Tuo::age = " << st.Tuo::m_age << endl;
	cout << "st.age = " << st.m_age << endl;
	return 0;
}