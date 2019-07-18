#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

class Date
{
public:
	Date(int year = 2019, int month = 7, int day = 18)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	bool operator<(const Date& d) const
	{
		return (_year < d._year) ||
			(_year == d._year && _month < d._month) ||
			(_year == d._year && _month == d._month && _day < d._day);
	}
	bool operator>(const Date& d) const
	{
		return (_year > d._year) ||
			(_year == d._year && _month > d._month) ||
			(_year == d._year && _month == d._month && _day > d._day);
	}
	friend ostream& operator<<( ostream& _cout, const Date& d)//���������
	{
		_cout << d._year << "-" << d._month << "-" << d._day;
		return _cout;
	}
private:
	int _year;
	int _month;
	int _day;
};


class Less
{
public:
	bool operator()(const Date* pd1, const Date* pd2)//�º�����ʹ����ϰ
	{
		return *pd1 < *pd2;
	}
};
int main()
{
	//�������
	//priority_queue<Date, vector<Date>, less<Date>> q1;
	priority_queue<Date> q1;//Ĭ�ϴ������
	q1.push(Date(2019, 7, 18));
	q1.push(Date(2019, 7, 19));
	q1.push(Date(2019, 7, 17));
	cout << q1.top() << endl;

	//����С��
	priority_queue<Date, vector<Date>, greater<Date>> q2;
	q2.push(Date(2019, 7, 18));
	q2.push(Date(2019, 7, 19));
	q2.push(Date(2019, 7, 17));
	cout << q2.top() << endl;


	priority_queue<Date*, vector<Date*>, Less> q3;
	q3.push(&Date(2019, 7, 18));
	q3.push(&Date(2019, 7, 19));
	q3.push(&Date(2019, 7, 17));
	cout << *q3.top() << endl;

	return 0;
}

