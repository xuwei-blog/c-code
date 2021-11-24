#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
int main()
{
////	//5个正整数
//
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		printf("please enter n:");
//		scanf("%d",&n);
//		if (n <= 0)
//		{
//			continue;
//		}
//		sum = sum + n;
//		
//		
//	}
//	printf("程序结束!\n");
//	printf("sum = %d\n",sum);
//
//
	//输入负数结束
	//int i = 0;
	//int n = 0;
	//int sum = 0;
	//while (1)
	//{
	//	printf("please enter n:");
	//	scanf("%d",&n);
	//	if (n <= 0)
	//	{
	//		break;
	//	}
	//	i++;
	//	sum = sum + n;
	//}
	//printf("程序结束!\n");
	//printf("共输出了%d个正整数\n",i);
	//printf("这批正整数的和%d\n",sum);

//
//
////	//上三角乘法表
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("\t");
//		}
//
//
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
	
//
//
	//下三角乘法表
	//int i = 0;
	//int j = 0;
	//for(i = 1; i <= 9; i++)
	//{
	//	
	//	for (j = 9; j >=0; j--)
	//	{
	//		printf("%d*%d=%d\t", i, j, i * j);
	//	}
	//	printf("\n");
	//}

//
//
	//矩形乘法表
	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	
	//	for (j = 1; j <= 9; j++)
	//	{
	//		printf("%d*%d=%d\t", i, j, i * j);
	//	}
	//	printf("\n");
	//}
//
//	//学生成绩switch
	//int score = 0;
	//scanf("%d",&score);
	//printf("数学课成绩为%d\n",score);
	//switch (score / 10)
	//{ 
	//case 10:
	//case 9:
	//case 8:
	//	printf("这门课成绩为A等\n");
	//	break;
	//case 7:
	//	printf("这门课成绩为B等\n");
	//	break;
	//case 6:
	//	printf("这门课成绩为C等\n");
	//	break;
	//default:
	//	printf("这门课成绩为D等\n");
	//}
//
//	//if判断成绩
	//int score;
	//scanf("%d",&score);
	//printf("数学课成绩为%d\n",score);
	//if (score >= 70)
	//{
	//	if (score >= 80)
	//		printf("这门课成绩为A等\n");
	//	else
	//		printf("这门课成绩为B等\n");

	//}


	//else
	//{
	//	if (score < 60)
	//		printf("这门课成绩为D等\n");
	//	else
	//		printf("这门课成绩为C等\n");
	//}
//		
//
//
//	//从1输出到100
//	int i = 1;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	printf("%d\n",i);
//	//}
//
//	do
//	{
//		printf("%d\t", i);
//		i++;
//
//	} while (i<=100);
////
//
//
//
//	//从1加到100
	//int i = 0;
	//int sum = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum = sum + i;
	//}
	//printf("%d\n", sum);

//
	 int m = 7;
	 int  n = 2;
	 float c = m / n ;
	 printf("%.2f",c); //输出的是3.00


	 int m = 7;
	 int  n = 2;
	 float c = (float)m / n;
	 printf("%.2f", c); //输出的是3.50

	//int i = 1;
	//int n = 0;
	//scanf("$d",&n);
	//for (i = 1; i < n; i++)
	//{
	//	if (n % i == 0)
	//	{
	//		printf("no");
	//	}
	//	else
	//	{
	//		printf("yes");
	//	}

	//}

	//int i = 1;
	//int n = 0;
	//scanf("%d", &n);
	//for (i = 2; i <= n-1; i++)
	//{
	//	if (n % i == 0)
	//	{	
	//		break;
	//	}
	//}
	//printf("%d\n",i);
	//if (i>=n)
	//{
	//	printf("%d是素数\n",n);

	//}
	//else
	//{
	//	printf("%d是zhi数\n", n);

	//}


	//int i = 0;
	//for (i = 1000; i <= 2500; i++)
	//{
	//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	//	{
	//		printf("%d\n",i);
	//	}
	//}

	//int i = 1;
	//int j = 1;
	//for (i = 2; i <= 1000; i++)
	//{
	//	for (j = 2; j <= i-1; j++)  
	//	{

	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j == i)
	//	{
	//		printf("%d 是素数\n",i);
	//	}
	//	else
	//	{
	//		printf("%d是合数\n", i);
	//	}
	//}

	return 0;
}