#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	void(*signal(int,void(*)(int)))(int);
	//1.signal 和() 先结合,说明signal是函数名
	//2.signal 是个函数名 函数的第一个参数类型是int  第二个参数类型是函数指针
	// 该函数指针,指向一个int类型,返回类型是void
	//3.signal函数的返回类型也是一个函数指针
	// 该函数指针,指向一个int参数,返回类型是void
	//这是一次函数的声明
	

	//类比
	typedef unsigned int uint;    

	typedef void (*pfun_t)(int);
	//对void(*)(int)的函数指针类型重命名为pfun_t


	void(*)(int) signal(int, void(*)(int));   //这是理论的写法 但是与语法需要把函数以及函数的参数类型放到*后面
	//函数指针类型替换之后
	pfun_t signal(int, pfun_t);
	
	  
	return 0;
}