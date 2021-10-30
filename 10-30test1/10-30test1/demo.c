#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	
	(*(void (*)())0)();
	//调用0地址处得函数
	//该参数无参,返回类型时void
	//void (*)()    -- 函数指针类型
	//(void (*)())0       0前面是将0强制类型转换 把int转换成无参函数类型 被解释为一个函数地址
	//解引用
	return 0;
}