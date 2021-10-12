#include <stdio.h>


int main()
{
	int a = 5;
	int b = a >> 1;
	printf("%d\n",b);   //  2



	int m = 3;
	int n = 5;
	//就用两个变量交换值
	//按位亦或
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d %d\n",m,n);

	//按位与

	int i = 5 | 3;
	printf("%d\n",i);  // (111)2 = 7

	//按位与
	int j = 5 & 3;
	printf("%d",j);  //   (001)2   = 1


	return 0;


}