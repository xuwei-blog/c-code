//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	//5个正整数
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("please enter n:");
//		scanf("%d",&n);
//		if (n < 0)
//		{
//			continue;
//		}
//		sum += n;
//		
//	}
//	printf("程序结束!\n");
//	printf("sum = %d\n",sum);
//
//
//	//输入负数结束
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	while (1)
//	{
//		printf("please enter n:");
//		scanf("%d",&n);
//		if (n <= 0)
//		{
//			break;
//		}
//		i++;
//		sum = sum + n;
//	}
//	printf("程序结束!\n");
//	printf("共输出了%d个正整数\n",i);
//	printf("这批正整数的和%d\n",sum);
//
//
//
//	//上三角乘法表
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("\t");
//		}
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//
//	//下三角乘法表
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//
//	//矩形乘法表
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	//学生成绩switch
//	int score = 0;
//	scanf("%d",&score);
//	printf("数学课成绩为%d\n",score);
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//	case 8:
//		printf("这门课成绩为A等\n");
//		break;
//	case 7:
//		printf("这门课成绩为B等\n");
//		break;
//	case 6:
//		printf("这门课成绩为C等\n");
//		break;
//	default:
//		printf("这门课成绩为D等\n");
//	}
//
//	//if判断成绩
//	int score;
//	scanf("%d",&score);
//	printf("数学课成绩为%d\n",score);
//	if (score >= 70)
//	{
//		if (score >= 80)
//			printf("这门课成绩为A等\n");
//		else
//			printf("这门课成绩为B等\n");
//	}
//	else
//	{
//		if (score < 60)
//			printf("这门课成绩为D等\n");
//		else
//			printf("这门课成绩为C等\n");
//	}
//		
//
//
//	//从1输出到100
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d\n",i);
//	}
//
//
//
//
//	//从1加到100
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//
//
//
//
//
//
//
//	return 0;
//}