#include <iostream>
using namespace std;

void partition(int arr[], int n)
{
	int temp;
	int i = 0;
	int j = n - 1;
	while (i < j)
	{
		while (i < j && arr[j] >= temp)
			j--;
		if (i < j)
		{
			arr[i] = arr[j];
			i++;
		}
		while (i < j && arr[j] < temp)
			j++;
		if (i < j)
		{
			arr[j] = arr[i];
			j--;
		}
	}
	arr[i] = temp;
	
}