#include <stdio.h>


int main()
{
	int n = 9;

	//原码反码补码
	//00000000000000000000000000001010

	float* pFloat = (float*)&n;

	printf("n=%d\n",n);

	printf("*pFloat=%f\n",*pFloat);
	//以浮点数的视角看内存中储存的二进制数据
	//0(S正数) 00000000 (E 0+127) 000000000001010 (M)
	*pFloat = 9.0;
	//以浮点数的方式储存二进制数据
	//1001.0  1.001*2^3   E=3
	//0  10000010   001000000000000000
	printf("num=%d\n",n);
	//以整型方式读取
	printf("*pFloat=%f\n",*pFloat);
	//浮点数方式读取
	return 0;

}