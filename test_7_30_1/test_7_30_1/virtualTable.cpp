#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
using namespace std;

#if 1
class Base1
{
public:
	virtual void Func1()
	{
		cout << "Base1::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base1::Func2" << endl;
	}
private:
	int _b1;
};
class Base2
{
public:
	virtual void Func1()
	{
		cout << "Base2::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base2::Func2" << endl;
	}
private:
	int _b2;
};
class Drived :  public Base1,  public Base2
{
public:
	virtual void Func1()
	{
		cout << "Drived::Func1" << endl;
	}
	virtual void Func3()
	{
		cout << "Drived::Func3" << endl;
	}
	//virtual void Func4()
	// {
	//	 cout << "Drived::Func4" << endl;
	// }
private:
	int _d;
};

typedef void(*VFPTR)();
void PrintTable(VFPTR vTable[])
{
	cout << "����ַ��" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf("��%d����ַ��0x%x ", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}



int main()
{
	//Drived d;
	//cout << sizeof(Drived) << endl;
	//cout << sizeof(d) << endl;



	//Base1 b;
	//VFPTR* vTableb = (VFPTR*)(*(int*)&b);
	//PrintTable(vTableb);

	Drived d1;
	VFPTR* vTabled1 = (VFPTR*)(*(int*)&d1);
	PrintTable(vTabled1);
	Drived d2;
	VFPTR* vTabled2 = (VFPTR*)(*(int*)((char*)&d2 + sizeof(Base1)));
	PrintTable(vTabled2);
	return 0;
}
#endif 

//#if 0
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};//typedef void(*VFPTR) ();
//void PrintVTable(VFPTR vTable[])
//{
//	// ����ȡ����е��麯��ָ���ӡ�����á����þͿ��Կ���������ĸ�����
//	cout << " ����ַ>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" ��%d���麯����ַ :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;
//	Derive d;//	// ˼·��ȡ��b��d�����ͷ4bytes����������ָ�룬ǰ������˵���麯��������һ�����麯��ָ���
//	//ָ�����飬���������������һ��nullptr
//		// 1.��ȡb�ĵ�ַ��ǿת��һ��int*��ָ��
//		// 2.�ٽ�����ȡֵ����ȡ����b����ͷ4bytes��ֵ�����ֵ����ָ������ָ��
//		// 3.��ǿת��VFPTR*����Ϊ������һ����VFPTR����(�麯��ָ������)�����顣
//		// 4.���ָ�봫�ݸ�PrintVTable���д�ӡ���
//		// 5.��Ҫ˵�����������ӡ���Ĵ��뾭�����������Ϊ��������ʱ�����Ĵ����ɾ�����������û��
//		//��nullptr������Խ�磬���Ǳ����������⡣����ֻ��Ҫ��Ŀ¼���� - ���� - �������������ٱ���ͺ��ˡ�
//	VFPTR* vTableb = (VFPTR*)(*(int*)&b);
//	PrintVTable(vTableb);
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTabled);
//	return 0;
//}//#endif 