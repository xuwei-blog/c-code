#include <iostream>
using namespace std;

//CPU基类
class CPU
{
public:
	//
	//纯虚函数
	virtual void  calculate() = 0;
};

//显卡基类
class VideoCard
{
public:
	virtual void display() = 0;
};

//内存基类
class Memory
{
public:
	virtual void storage() = 0;
};

//电脑类
class computer
{
public:

	computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		cout << "电脑的构造调用" << endl;
		this->m_cpu = cpu;
		this->m_vc = vc;
		this->m_mem = mem;
	}

	void doWork()
	{
		this->m_cpu->calculate();
		this->m_vc->display();
		this->m_mem->storage();
	}

	~computer()
	{
		cout << "电脑的析构调用" << endl;
		if (this->m_cpu)
		{
			delete this->m_cpu;
			this->m_cpu = NULL;
		}
		if (this->m_vc)
		{
			delete this->m_vc;
			this->m_vc = NULL;
		}
		if (this->m_mem)
		{
			delete this->m_mem;
			this->m_mem = NULL;
		}
	}

	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

//厂商 inter
class interCPU :public CPU
{
public:
	void calculate()
	{
		cout << "inter CPU 开始计算了" << endl;
	}
};

class interVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "inter 显卡 开始显示了" << endl;
	}
};

class interMemory :public Memory
{
public:
	void storage()
	{
		cout << "inter 内存 开始存储了" << endl;
	}
};

//Lenovo
class LenoveCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenove CPU 开始计算了" << endl;
	}
};

class LenoveVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenove 显卡 开始显示了" << endl;
	}
};

class LenoveMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenove 内存 开始存储了" << endl;
	}
};


int main()
{
	cout << "组装一台电脑" << endl;
	CPU* intercpu = new interCPU;  //多态:父类的指针指向子类的对象
	VideoCard* lenovevc = new LenoveVideoCard;
	Memory* lenovemem = new LenoveMemory;

	 
	computer c1(intercpu, lenovevc, lenovemem);
	c1.doWork();

	return 0;
}