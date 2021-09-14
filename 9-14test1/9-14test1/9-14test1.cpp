# include <stdio.h>
# include <string.h>
# include <windows.h>
int main()
{
	char arr1[] = "Welcome to NewYork!!";
	char arr2[] = "********************";

	int left = 0;
	int right = strlen(arr2) - 1;

	while(left<=right)
	{ 
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n", arr2);
	left++;
	right--;
	Sleep(1000);  //Ë¯ÃßÁ½Ãë
	system("cls");   // Çå¿ÕÆÁÄ»






	}
	return 0;
}