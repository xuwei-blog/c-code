# include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10 ; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	
	for (i = 0; j == 0; j++)   //j == 0 是判断  不是赋值再判断其bool
		printf("%d",j);
	
	return 0;
}