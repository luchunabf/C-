#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;///////////////ע����Ŀ��Χ������double
	while (cin >> a >> b >> c)
	{
		if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))//����֮�ʹ��ڵ����� ���ж��ܷ����������
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
