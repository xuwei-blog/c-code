#include <iostream>
using namespace std;

//批量删除连续的数据

void del(int arr[], int& length, int i, int j)
{
	int delta;
	delta = j - i + 1;
	for (int k = j + 1; k < length; k++)
	{
		arr[k - delta] = arr[k];
	}
	length = length - delta;
}

int main()
{
	int A[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = 10;
	del(A,length,3,5);
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl << length;
	return 0;
	
}