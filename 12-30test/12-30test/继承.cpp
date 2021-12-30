#include <iostream>
using namespace std;



class BasePage
{
public:
	void header()
	{
		cout << "公共的头部" << endl;
	}
	void footer()
	{
		cout << "公共的底部" << endl;
	}
	void leftlist()
	{
		cout << "公共的左侧列表" << endl;
	}
};

class News : public BasePage
{
public:
	void content()
	{
		cout << "新闻播报" << endl;
	}
};

int main()
{
	News n1;
	n1.header();
	n1.footer();
	n1.leftlist();
	n1.content();
	return 0;
}