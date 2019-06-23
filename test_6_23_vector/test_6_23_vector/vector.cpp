#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//构造函数
	//vector<int> v1;//空vector
	//vector<int> v2(5, 100);//5个100
	//vector<int> v3(v2.begin(), v2.end());//区间构造一，拷贝v2
	//int arr[4] = { 0, 1, 2, 3 };
	//vector<int> v4(arr, arr + sizeof(arr) / sizeof(arr[0]));//区间构造二
	//vector<int> v5{ 4, 5, 6, 7, 8 };
	//vector<int> v6(v5);//拷贝构造

	//三种打印方式:只有这三种，vector不能直接打印：cout << v << endl;  <<需要设置重载 
	//for+下标operator[]重载

	vector<int> v{ 1, 2, 3, 4, 5 };
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	//迭代器<正向，反向>
	//正向迭代器正向打印
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;
	//反向迭代器反向打印
	//vector<int>::reverse_iterator rit = v.rbegin();
	//while (rit != v.rend())
	//{
	//	cout << *rit << ' ';
	//	++rit;
	//}
	//cout << endl;

	//范围for
	for (auto e : v)
		cout << e << ' ';
	cout << endl;


	//尾插
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);

	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << ' ';
		++rit;
	}
	cout << endl;

	cout << "size: " << v.size() << endl;

	v.pop_back();
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	//pos去寻找4的位置，注意find的返回类型
	vector<int>::iterator pos = find(v.begin(), v.end(), 4);
	v.erase(pos);
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;


	//swap
	vector<int> vv(5, 100);
	v.swap(vv);
	cout << "v: ";
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	cout << "vv: ";
	for (size_t i = 0; i < vv.size(); ++i)
		cout << vv[i] << ' ';
	cout << endl;





	system("pause");
	return 0;
}