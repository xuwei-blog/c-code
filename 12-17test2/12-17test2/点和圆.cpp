#include <iostream>
using namespace std;
//点类
class Point
{
public:
	//设置x,y 获取x,y
	void SetX(int x)
	{
		p_x = x;
	}
	void SetY(int y)
	{
		p_y = y;
	}
	int GetX()
	{
		return p_x;
	}
	int GetY()
	{
		return p_y;
	}

private:
	int p_x;
	int p_y;
};

//圆类
class Circle
{
public:
	//设置半径
	void SetR(int r)
	{
		c_r = r;
	}
	//获取半径
	int GetR()
	{
		return c_r;
	}
	//设置圆心
	void SetCenter(Point p)
	{
		c_center = p;
	}
	//获取圆心
	Point GetCenter()
	{
		return c_center;
	}
	//成员函数 判断点和圆的关系
	void IsInCircleByClass(Point p)
	{
		int distance = (c_center.GetX() - p.GetX()) *
			(c_center.GetX() - p.GetX()) +
			(c_center.GetY() - p.GetY()) *
			(c_center.GetY() - p.GetY());
		int r_distance = c_r * c_r;
		if (distance == r_distance)
		{
			cout << "点在圆上" << endl;
		}
		else if (distance > r_distance)
		{
			cout << "点在圆外" << endl;

		}
		else
		{
			cout << "点在圆内" << endl;

		}
	}
private:
	int c_r; //半径
	Point c_center; //圆心
};

//利用全局函数 判断点和圆的关系
void IsInCircle(Circle c, Point p)
{
	int distance = (c.GetCenter().GetX() - p.GetX()) *
		(c.GetCenter().GetX() - p.GetX()) +
		(c.GetCenter().GetY() - p.GetY()) *
		(c.GetCenter().GetY() - p.GetY());
	int r_distance = c.GetR() * c.GetR();
	if (distance == r_distance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > r_distance)
	{
		cout << "点在圆外" << endl;

	}
	else
	{
		cout << "点在圆内" << endl;

	}
}

int main()
{
	//实例化点
	Point p;
	p.SetX(10);
	p.SetY(10);
	//实例化圆
	Circle c;
	//设置圆的圆心
	Point c_center;
	c_center.SetX(10);
	c_center.SetY(0);
	c.SetCenter(c_center);
	//设置半径
	c.SetR(10);
	//全局函数 判断点和圆的关系
	IsInCircle(c, p);
	//成员函数 判断点和圆的关系
	c.IsInCircleByClass(p);
	return 0;
}