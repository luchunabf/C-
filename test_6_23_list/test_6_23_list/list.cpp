#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;//��list
	list<int> l2(5, 100);//5��100
	//�������俽����������������
	list<int> l3(l2.begin(), l2.end());//������begin��end����l2
	int arr[] = { 1, 2, 3, 4, 5 };
	list<int> l4(arr, arr + sizeof(arr) / sizeof(arr[0]));
	//Ҳ����ֱ��������ʽ��ֵ
	list<int> l5{ 1, 2, 3, 4, 5, 6, 7 };
	//��������
	list<int> l6(l5);

	//���ִ�ӡ��ʽ:����������Χfor
	list<int>::iterator it = l6.begin();
	while (it != l6.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	//���������
	list<int>::reverse_iterator rit = l6.rbegin();
	while (rit != l6.rend())
	{
		cout << *rit << ' ';
		++rit;
	}
	cout << endl;

	//��Χfor
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	cout << l6.size() << endl;
	
	cout << l6.front() << endl;
	cout << l6.back() << endl;

	l6.push_back(8);
	l6.push_back(9);
	l6.push_back(0);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	l6.pop_back();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	l6.push_front(0);
	l6.push_front(5);
	l6.push_front(7);
	l6.push_front(4);
	l6.push_front(2);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	l6.pop_front();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	list<int>::iterator pos = find(l6.begin(), l6.end(), 5);
	l6.insert(pos, 18);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	auto pos1 = find(l6.begin(), l6.end(), 8);
	l6.erase(pos1);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//list����ת
	l6.reverse();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//list������
	l6.sort();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//����list��ȥ��
	l6.unique();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//����list�ĺϲ�
	list<int> l(9, 100);
	l6.merge(l);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	system("pause");
	return 0;
}