#include <iostream>
using namespace std;
const double PI = 3.14;   //代替define定义  

class Circle
{
public:  //公共权限
	//类中的函数 称为成员函数 也叫成员方法
	//求圆周长
	double  CalcCircle()
	{
		return 2 * PI * circle_r;
	}
	//设置半径
	void SetR(int r)
	{
		circle_r = r;
	}
	//类中的变量 称为成员变量 也叫成员属性
	//半径
	int circle_r;
};
int main()
{
	Circle c1;    //实例化对象  类的对象
	c1.circle_r = 10;   //类似结构体的赋值
	c1.SetR(20);
	cout << "圆的周长是: " << c1.CalcCircle() << endl;
	return 0;
}