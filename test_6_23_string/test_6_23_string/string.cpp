#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string s1("hello world");

	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	
	//s1.resize(20);
	//cout << s1.size() << endl;
	//cout << s1.capacity() << endl;
	//s1.resize(35);
	//cout << s1.size() << endl;
	//cout << s1.capacity() << endl;
	//s1.reserve(20);
	//cout << s1.size() << endl;
	//cout << s1.capacity() << endl;

	//���ֱ�����ʽ��
	//for+operator[]
	//for (size_t i = 0; i < s1.size(); ++i)
	//	cout << s1[i] << endl;

	//������
	//string::iterator it = s1.begin();
	//while (it != s1.end())
	//{
	//	cout << *it << endl;
	//	++it;
	//}
//string::reverse_iterator rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		cout << *rit;
//		++rit;
//	}
//	cout << endl;
	//��Χfor
	//for (auto ch : s1)
	//	cout << ch << endl;

	string s2("I Love world");
	s1.push_back(' ');
	s1.append("and");
	s1 += ' ';
	s1 += s2;

	cout << s1 << endl;

	for (size_t i = 0; i < s1.size(); ++i)
		cout << s1[i] ;
	cout << endl;

	size_t pos = s1.find('L',0);
	if (pos != string::npos)
		cout << s1[pos];
	cout << endl;

	//size_t pos1 = s1.rfind('a', pos);//////////////������:����Ϊpos�ǵڶ�����������ҪѰ�ҵ��ַ����ǵ�һ������
	//if (pos1 != string::npos)
	//	cout << s1[pos1];
	//cout << endl;

	//string str(s1.substr(pos, 4));
	//cout << str << endl;
	//
	//cout << str.c_str() << endl;

	/*size_t pos1 = s1.rfind('w');
	cout << s1[pos1] << endl;*/
	s1.insert(s1.rfind(' ',s1.find('n', 0)), "abc");

	cout << "s1: " << s1 << endl;
	cout << s1.c_str() << endl;

	system("pause");
	return 0;
}
