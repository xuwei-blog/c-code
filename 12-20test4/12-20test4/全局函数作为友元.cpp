#include <iostream>
using namespace std;
#include <string>
class Building
{
	friend void GoodGay(Building* building); //全局函数作为友元
public:
	Building()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}

public:
	string m_sittingroom;
private:
	string m_bedroom;
};
  
void GoodGay(Building* building)
{
	cout << "好基友正在访问:" << building->m_sittingroom << endl;
	//可以访问 private权限
	cout << "好基友正在访问:" << building->m_bedroom << endl; 
}

int main()
{
	Building building;
	GoodGay(&building);
	return 0;
}