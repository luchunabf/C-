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
	cout << "虚表地址：" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf("第%d个地址：0x%x ", i, vTable[i]);
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
//	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
//	cout << " 虚表地址>" << vTable << endl;
//	for (int i = 0; vTable[i] != nullptr; ++i)
//	{
//		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
//		VFPTR f = vTable[i];
//		f();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;
//	Derive d;//	// 思路：取出b、d对象的头4bytes，就是虚表的指针，前面我们说了虚函数表本质是一个存虚函数指针的
//	//指针数组，这个数组最后面放了一个nullptr
//		// 1.先取b的地址，强转成一个int*的指针
//		// 2.再解引用取值，就取到了b对象头4bytes的值，这个值就是指向虚表的指针
//		// 3.再强转成VFPTR*，因为虚表就是一个存VFPTR类型(虚函数指针类型)的数组。
//		// 4.虚表指针传递给PrintVTable进行打印虚表
//		// 5.需要说明的是这个打印虚表的代码经常会崩溃，因为编译器有时对虚表的处理不干净，虚表最后面没有
//		//放nullptr，导致越界，这是编译器的问题。我们只需要点目录栏的 - 生成 - 清理解决方案，再编译就好了。
//	VFPTR* vTableb = (VFPTR*)(*(int*)&b);
//	PrintVTable(vTableb);
//	VFPTR* vTabled = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTabled);
//	return 0;
//}//#endif 