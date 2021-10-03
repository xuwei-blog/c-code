#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c-->%c\n", A, C);
		printf("---------\n");
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c-->%c\n",A,C);
		
		hanoi(n - 1, B, A, C);
		

	}

}

int main()
{
	int n = 0;
	printf("ÇëÊäÈë¹þÅµËþ²ãÊý:>");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;

}