#include "数组类.h"

//默认构造
Myarray::Myarray()
{
	this->m_capacity = 100;
	this->m_size = 0;
	this->address = new int[this->m_capacity];
}

//有参构造
Myarray::Myarray(int capacity)
{
	this->m_capacity = capacity;
	this->m_size = 0;
	this->address = new int[this->m_capacity];
}

//拷贝构造
Myarray::Myarray(const Myarray & arr)
{
	this->m_capacity = arr.m_capacity;
	this->m_size = arr.m_size;
	this->address = new int[arr.m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		this->address[i] = arr.address[i];
	}
}

//尾插法
void Myarray::PushBack(int val)
{
	this->address[this->m_size] = val;
	this->m_size++;
}

//根据位置设置数据
void Myarray::SetData(int pos, int val)
{
	this->address[pos] = val;
}

//根据位置获取数据
int Myarray::GetData(int pos)
{
	return this->address[pos];
}

//获取数组容量
int Myarray::GetCapacity()
{
	return this->m_capacity;

}

//获取数组大小
int Myarray::GetSize()
{
	return this->m_size;

}

//析构函数
Myarray::~Myarray()
{
	if (this->address != NULL)
	{
		delete[] this->address;
		this->address = NULL;
	}
}