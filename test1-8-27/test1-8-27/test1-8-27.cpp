

#include <stdio.h>

void test()
{
	int a = 1;
	a++;
	printf("%d", a);

}

int main()
{

	int i = 0;
	while (i < 10)
	{
		test();
		i++;


	}


	return 0;
}