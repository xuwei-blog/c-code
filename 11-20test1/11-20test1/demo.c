#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SQUARE(x) x*x
#define PRINT(X) printf("the value of "#X" is %d\n",X)
#define CAT(X,Y) X##Y
int main()
{
	printf("%d\n",SQUARE(3));  //3*3
	printf("%d\n",SQUARE(3+1));  // 3+1*3+1

	int a = 10;
	PRINT(a);
	//printf("the value of "'a'" is %d\n",X);  Èý¶Î×Ö·ûÆ´³ÉÒ»¶Î
	int b = 20;
	PRINT(b);
	int c = 30;
	PRINT(c);

	int yyds666 = 10;
	printf("%d",CAT(yyds,666));  //×Ö·û´®Æ´½Ó



	return 0;
}