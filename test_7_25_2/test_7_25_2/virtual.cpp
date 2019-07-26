#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base1
{
public:
	virtual void func1()
	{
		cout << "Base1:: func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base1:: func2()" << endl;
	}
private:
	int _b1;
	char _b2;
	double _b3;
};
class Base2
{
public:
	virtual void func1()
	{
		cout << "Base2:: func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base2:: func2()" << endl;
	}
private:
	int _b4;
	double _b5;
	char _b6;

};
class Drived :public Base1, public Base2
{
public:
	virtual void func1()
	{
		cout << "Drived::func1()" << endl;
	}
	virtual void func3()
	{
		cout << "Drived:: func3()" << endl;
	}
private:
	int _d1;
};

int main()
{
	Drived d1;
	cout << sizeof(d1) << endl;//20 �̳������࣬�������ָ�롾�̳м����࣬���м���������ָ�롿���������ิ�ƻ�����������������
	return 0;/////////////���̳м����࣬�͸��Ƽ���������ָ�룬�Լ����麯������д�˾͸��ǣ�δ��д�͸���һ���̳�������������ӡ�
	////////////////////// ���Լ����С�����̳м����࣬�ͼӼ���ָ�룬�������ճ�Ա�����Ӻͼ���
}