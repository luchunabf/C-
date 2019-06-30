#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#if 0
//实现一个类，计算程序中创建了多少个类对象
class A
{
public:
	A()//构造函数调用一次表示创建了一个对象
	{
		++_getCount;
	}
	A(const A& t)//拷贝构造函数调用一次表示创建了一个对象
	{
		++_getCount;
	}
	static int GetCount()//静态成员函数
	{
		return _getCount;
	}
private:
	static int _getCount;
};

int A::_getCount = 0;

int main()
{
	cout << A::GetCount() << endl;
	A a1, a2;
	A a3(a2);
	cout << A::GetCount() << endl;

	
	return 0;
}
#endif


//求1 + 2 + 3 + ... + n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）
class Solution {
	class Sum
	{
	public:
		Sum()
		{
			++_count;
			_total += _count;
		}
		static void Sumret()
		{
			_count = 0;
			_total = 0;
		}
		static int GetCount()
		{
			return _total;
		}
	private:
		static int _count;
		static int _total;
	};

public:
	int Sum_Solution(int n) {
		Sum::Sumret();
		Sum* ps = new Sum[n];//先定义一个类，然后创建一个含n个这种类型元素的数组，那么该类的构造函数会被调用n次，我们把累加代码放到构造函数里就可以了。
		delete[] ps;
		return Sum::GetCount();
	}
};
int Solution::Sum::_count = 0;
int Solution::Sum::_total = 0;



