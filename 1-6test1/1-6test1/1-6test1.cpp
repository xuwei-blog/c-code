#include <iostream>
using namespace std;

//动态多态产生条件
//现有继承关系
//父类中有虚函数 子类重写父类中的虚函数
//父类指针或引用 指向子类的对象
class Animal
{
public:
	virtual void Speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void Speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	void Speak()
	{
		cout << "小狗在说话" << endl;
	}
};

void doSpeak(Animal & animal)
{
	//如果地址早就绑定好了 地址早绑定 属于静态联编
	//如果调用小猫小狗说话 这个时候函数的地址不能早就绑定好
	//而是在运行阶段再去绑定函数地址 属于动态联编
	animal.Speak();
}

int main()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
	return 0;
}