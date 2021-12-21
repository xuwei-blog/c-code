#include "数组类.h"

int main()
{
	//数组类 对象arr1
	Myarray arr1;

	for (int i = 0; i < 10; i++)
	{
		arr1.PushBack(i);
	}

	for (int i = 0; i < arr1.GetSize(); i++)
	{
		cout << arr1.GetData(i) << endl;
	}

	printf("--------------\n");
	//数组类 对象arr2
	Myarray arr2(arr1);

	for (int i = 0; i < arr2.GetSize(); i++)
	{
		cout << arr2.GetData(i) << endl;
	}

	printf("--------------\n");

	arr2.SetData(0, 200);

	cout << arr2.GetData(0) << endl;
	return 0;
}