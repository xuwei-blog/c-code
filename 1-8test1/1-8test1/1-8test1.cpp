#include <iostream>
using namespace std;
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//需求 通过一个通用的排序函数 实现对char和int数组的排序 从大到小
template<typename T>
void mysort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1;j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		//判断 算出的max和刚开始认定的i是否一致  不同就交换数据
		if (i != max)
		{
			myswap(arr[i],arr[max]);
		}
	}
}

template<typename T>
void printarray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//字母从大到小排序
	char chararray[] = "helloworld";
	int len = strlen(chararray);
	mysort(chararray,len);

	//printarray(chararray,len);


	//数字从大到小排序
	int intarray[] = { 2,67,5,8,99 };
	len = sizeof(intarray)/sizeof(int);
	mysort(intarray,len);
	printarray(intarray, len);
	return 0;
}