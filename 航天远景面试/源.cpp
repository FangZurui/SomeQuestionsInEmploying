/*
�ʣ����´���������ݣ�
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
��
������Ϊ��
~classB
~classA

CB��̳�CA���public������CB *c���󴴽���ʱ���Ǽ̳�CA���CB��Ķ���
��delete�Ĺ����У���ִ��CB���������������ӡ~classB����ִ��CA���������������ӡ~classA��
*/