#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1;//空list
	list<int> l2(5, 100);//5个100
	//两个区间拷贝：迭代器、数组
	list<int> l3(l2.begin(), l2.end());//迭代器begin和end拷贝l2
	int arr[] = { 1, 2, 3, 4, 5 };
	list<int> l4(arr, arr + sizeof(arr) / sizeof(arr[0]));
	//也可以直接数组形式赋值
	list<int> l5{ 1, 2, 3, 4, 5, 6, 7 };
	//拷贝构造
	list<int> l6(l5);

	//两种打印方式:迭代器、范围for
	list<int>::iterator it = l6.begin();
	while (it != l6.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	//反向迭代器
	list<int>::reverse_iterator rit = l6.rbegin();
	while (rit != l6.rend())
	{
		cout << *rit << ' ';
		++rit;
	}
	cout << endl;

	//范围for
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

	//list的逆转
	l6.reverse();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//list的排序
	l6.sort();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//有序list的去重
	l6.unique();
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	//有序list的合并
	list<int> l(9, 100);
	l6.merge(l);
	for (auto ch : l6)
		cout << ch << ' ';
	cout << endl;

	system("pause");
	return 0;
}