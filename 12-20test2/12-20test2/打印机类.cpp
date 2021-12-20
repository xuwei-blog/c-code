#include <iostream>
using namespace std;

class Printer
{
public:
	static Printer* GetInstance()   //提供静态成员指针接口  要加static关键字
	{
		return printer;
	}
	void PrintText(string text)
	{
		p_count++;
		cout << text << endl;
	}
	int p_count = 0;
private:
	Printer(){}    //提供默认构造函数
	Printer(const Printer &){}  //禁止拷贝构造
	static Printer*printer;    //内部声明 外部初始化
};
Printer* Printer::printer = new Printer;  

int main()
{
	//p1使用打印机
	Printer* p1 = Printer::GetInstance();
	p1->PrintText("入职证明");
	p1->PrintText("离职证明");
	p1->PrintText("加薪申请");
	p1->PrintText("旅游申请");
	cout << "打印机使用次数:"<<p1->p_count << endl;

	//p2使用打印机
	Printer* p2 = Printer::GetInstance();
	p2->PrintText("加班申请");
	cout << "打印机使用次数:" << p2->p_count << endl;

	//结论 : 只有一个 打印机对象  
	return 0;
}
