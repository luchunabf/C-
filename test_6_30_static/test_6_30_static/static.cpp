#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#if 0
//ʵ��һ���࣬��������д����˶��ٸ������
class A
{
public:
	A()//���캯������һ�α�ʾ������һ������
	{
		++_getCount;
	}
	A(const A& t)//�������캯������һ�α�ʾ������һ������
	{
		++_getCount;
	}
	static int GetCount()//��̬��Ա����
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


//��1 + 2 + 3 + ... + n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C��
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
		Sum* ps = new Sum[n];//�ȶ���һ���࣬Ȼ�󴴽�һ����n����������Ԫ�ص����飬��ô����Ĺ��캯���ᱻ����n�Σ����ǰ��ۼӴ���ŵ����캯����Ϳ����ˡ�
		delete[] ps;
		return Sum::GetCount();
	}
};
int Solution::Sum::_count = 0;
int Solution::Sum::_total = 0;



