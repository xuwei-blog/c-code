# include <iostream>
using namespace std;

int atk = 100;
int main()
{
	int atk = 200;
	cout << "hello world" << endl;
	cout << "atk="<< atk << endl;
	cout << "atk="<< ::atk << endl;   // :: 表示作用域   ::前面不加东西 表示全局作用域


	//如果没有命名标准空间 就用 std::count 和  std::endl
	return 0;
}
