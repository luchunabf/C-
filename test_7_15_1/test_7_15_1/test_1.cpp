#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

#if 0
int main()
{
	int i = 0, a = 1, b = 2, c = 3;
	//i = ++a || ++b || ++c;//��������⣺i��ʾ����|�Ľ�����ʽ��ֻ�����1,0
	//cout << i << a << b << c;//1223
	i = --a && ++b && ++c;
	cout << i << a << b << c;//0023
	return 0;
}
#endif

int main()
{
	int a = 1, b = 0, c = -1, d = 0;
	d = ++a || ++b&&++c;  //����dֻ��ʾ��٣����ü��㸳ֵ�����0��1
	cout << d << endl;//1
	cout << a << endl;//2
	cout << b << endl;//0
	cout << c << endl;//-1

	return 0;
}