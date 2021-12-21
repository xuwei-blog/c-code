#include <iostream>
using namespace std;

class Myarray
{
public:
	//默认构造
	Myarray();         

	//有参构造
	Myarray(int capacity);  

	//拷贝构造
	Myarray(const Myarray & arr);  

	//尾插法
	void PushBack(int val);

	//根据位置设置数据
	void SetData(int pos,int val);

	//根据位置获取数据
	int GetData(int pos);

	//获取数组容量
	int GetCapacity();

	//获取数组大小
	int GetSize();

	//析构函数
	~Myarray();
private:
	int m_capacity; //数组容量
	int m_size;   //数组大小
	int* address; //在堆区开辟的数组的指针
};