#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main()
{
	//ÈÝÆ÷Ç¶Ì×ÈÝÆ÷
	vector<vector<int>> v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;

	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 10);
		v3.push_back(i + 100);
	}

	//½«Ð¡ÈÝÆ÷·ÅÈë´óÈÝÆ÷
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//±éÀú´óÈÝÆ÷
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it == vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
	return 0;
}