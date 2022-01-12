#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myprint(int val)
{
	cout << val << endl;
}

int main()
{
	//容器就是一个模板
	vector<int>v;   //创建一个vector容器 容器中存放的是int类型

	//插入元素
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//遍历元素
	vector<int> ::iterator itBegin = v.begin(); //v.begin() 起始迭代器指向容器中第一个数据
	vector<int> ::iterator itEnd = v.end(); //v.End() 起始迭代器指向容器中最后一个数据的下一个位置
	
	//第一种遍历
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;

	}

	//第三种遍历
	for_each(v.begin(),v.end(),myprint);



	return 0;
}