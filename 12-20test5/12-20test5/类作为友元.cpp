#include <iostream>
using namespace std;

class Building; //先声明 后实现

class GoodGay
{
public:
	GoodGay();

	void visit();

	Building * m_building;
};
class Building  //实现类
{
	friend class GoodGay;   //类作为友元
public:
	Building();
	string m_sittingroom;
private:
	string m_bedroom;
};

Building::Building()    //构造函数
{
	this->m_sittingroom = "客厅";
	this->m_bedroom = "卧室";
}
GoodGay::GoodGay()    //构造函数
{
	this->m_building = new Building;
}

void GoodGay::visit()   //成员函数
{
	cout << "好基友正在访问:" << this->m_building->m_sittingroom << endl;
	cout << "好基友正在访问:" << this->m_building->m_bedroom << endl;
}
int main()
{
	GoodGay gg;
	gg.visit();

	return 0;
}