#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//���캯��
	//vector<int> v1;//��vector
	//vector<int> v2(5, 100);//5��100
	//vector<int> v3(v2.begin(), v2.end());//���乹��һ������v2
	//int arr[4] = { 0, 1, 2, 3 };
	//vector<int> v4(arr, arr + sizeof(arr) / sizeof(arr[0]));//���乹���
	//vector<int> v5{ 4, 5, 6, 7, 8 };
	//vector<int> v6(v5);//��������

	//���ִ�ӡ��ʽ:ֻ�������֣�vector����ֱ�Ӵ�ӡ��cout << v << endl;  <<��Ҫ�������� 
	//for+�±�operator[]����

	vector<int> v{ 1, 2, 3, 4, 5 };
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	//������<���򣬷���>
	//��������������ӡ
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << ' ';
		++it;
	}
	cout << endl;
	//��������������ӡ
	//vector<int>::reverse_iterator rit = v.rbegin();
	//while (rit != v.rend())
	//{
	//	cout << *rit << ' ';
	//	++rit;
	//}
	//cout << endl;

	//��Χfor
	for (auto e : v)
		cout << e << ' ';
	cout << endl;


	//β��
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

	//posȥѰ��4��λ�ã�ע��find�ķ�������
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