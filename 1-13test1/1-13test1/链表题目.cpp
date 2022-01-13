#include <iostream>
using namespace std;
#include <math.h>
#define min 0.0001
#define maxSize 100

int compare(float A[], int An, float B[], int Bn)
{
	int i = 0;
	while (i < An && i < Bn)
	{
		if (fabs(A[i] - B[i]) < min)
		{
			i++;
		}
		else
			break;
	}
	if (i >= An && i >= Bn)
	{
		return 0;
	}
	else if ((i >= An && i < Bn) || A[i] < B[i])
	{
		return -1;
	}
	else
		return 1;
}

int main()
{
	float A[maxSize] = {1,2,3,4};
	float B[maxSize] = {1,2,3,4,3,6};
	cout << compare(A,4,B,6);
	return 0;
}
