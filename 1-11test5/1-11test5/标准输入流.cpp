#include <iostream>
using namespace std;

int main()
{
	cout << "输入0到10之间的数字" << endl;
	int num;
	while (true)
	{
		cin >> num;
		if (num >= 0 && num <= 10)
		{
			cout << "输入正确,输出值为: " << num << endl;
			break;
		}

		//清空缓冲区 重置标志位  
		cin.clear();
		cin.sync();

		//如果标志位为 0 代表缓冲区正常   如果标志位为 1 缓冲区异常
		cout << "cin.fail() = " << cin.fail() << endl;

	}
	return 0;
}