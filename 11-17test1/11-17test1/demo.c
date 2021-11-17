#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	printf("%d\n",5 % 3);       //2
	printf("%d\n",5 % -3);	    //2
	printf("%d\n",-5 % 3);  	//-2
	printf("%d\n",-5 % -3);   	//-2

	printf("%d\n",3 % 5);		//3
	printf("%d\n",3 % -5);   	//3
	printf("%d\n",-3 % 5);	    //-3
	printf("%d\n",-3 % -5);	    //-3

	printf("%d\n",8 % 3 );      //2
	printf("%d\n",8 % -3 );     //2
	printf("%d\n",-8 % 3 );     //-2
	printf("%d\n",-8 % -3 );    //-2


	return 0;
}