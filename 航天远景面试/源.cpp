/*
问：以下代码输出内容？
*/
#include<iostream>
using namespace std;

class CA
{
public:
	~CA()
	{
		cout << "~classA" << endl;
	}
};
class CB :public CA
{
public:
	~CB()
	{
		cout << "~classB" << endl;
	}
};
int main()
{
	CA a;
	CB b;
	CB* c = new CB();
	delete c;
	return 0;
}
/*
答：
输出结果为：
~classB
~classA

CB类继承CA类的public，所以CB *c对象创建的时候，是继承CA类的CB类的对象。
在delete的过程中，先执行CB类的析构函数，打印~classB，再执行CA类的析构函数，打印~classA。
*/