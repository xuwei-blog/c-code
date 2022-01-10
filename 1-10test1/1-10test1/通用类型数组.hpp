#pragma once
#include <iostream>
#include <string>
using namespace std;


//类模板
template<class T>
class MyArray
{
public:
	//除非用户提供默认capacity 否则数组必须有默认构造


	//有参构造
	MyArray(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		this->m_capacity = arr.capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[this->m_capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	
	}

	//重载=
	MyArray& operator = (const MyArray& arr)
	{
		if (this->paddress)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
		this->m_capacity = arr.capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[this->m_capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}

		return *this;
	}
	
	//重载[]
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//尾插法
	void pushback(const T& val)
	{
		if (this->m_capacity <= this->m_size)
		{
			return;
		}
		this->paddress[this->m_size] = val;
		this->m_size++;
	}

	//获取数组容量
	int getcapacity()
	{
		return this->m_capacity;
	}

	//获取数组大小
	int getsize()
	{
		return this->m_size;
	}



	//析构函数
	~MyArray()
	{
		if (this->paddress)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}


private:
	T* paddress;  //指向堆区数组指针

	int m_capacity;

	int m_size;

};