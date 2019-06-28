#define _CRT_SECURE_NO_WARNINGS 1
#include <queue>
#include <iostream>
#include <functional>
#include <vector>
#include <stdlib.h>
using namespace std;

#if 0
int main()
{
	vector<int> v{ 3, 5, 8, 1, 0, 7, 6, 2, 9, 4 };
	priority_queue<int> q;
	for (auto& ch : v)
		q.push(ch);
	cout << q.top() << endl;

	priority_queue<int, vector<int>, greater<int>> q1(v.begin(), v.end());
	cout << q1.top() << endl;

	system("pause");
	return 0;
}
#endif

#if 0
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}

	bool operator<(const Date& d)const
	{
		return (_year < d._year) || ((_year == d._year) && (_month < d._month)) || ((_year == d._year) && (_month == d._month) && (_day < d._day));
	}
	bool operator>(const Date& d)const
	{
		return (_year > d._year) || ((_year == d._year) && (_month > d._month)) || ((_year == d._year) && (_month == d._month) && (_day > d._day));
	}

private:
	int _year;
	int _month;
	int _day;
};



int main()
{
	priority_queue<Date, vector<Date>, less<Date>> q1;
	q1.push(Date(2019, 6, 28));
	q1.push(Date(2017, 2, 18));
	q1.push(Date(2019, 6, 27));


	priority_queue<Date, vector<Date>, greater<Date>> q2;
	q2.push(Date(2019, 6, 28));
	q2.push(Date(2017, 2, 18));
	q2.push(Date(2019, 6, 27));
	return 0;
}
#endif

#if 0
class Less
{
public:
	bool operator()(const Date* pLeft, const Date* pRight)
	{
		return *pLeft < *pRight;
	}
};

int main()
{
	priority_queue<Date*, vector<Date*>, Less> q;//优先级队列中放的是类类型地址
	q.push(&Date(2019, 6, 28));
	q.push(&Date(2017, 2, 18));
	q.push(&Date(2019, 6, 27));


	return 0;
}
#endif 

#if 0
class Less
{
public:
	bool operator()(const Date pLeft, const Date pRight)
	{
		return pLeft < pRight;
	}
};

int main()
{
	priority_queue<Date, vector<Date>, Less> q;//优先级队列中放的是类类型（仿函数实现）
	q.push(Date(2019, 6, 28));
	q.push(Date(2017, 2, 18));
	q.push(Date(2019, 6, 27));


	return 0;
}
#endif



class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}

	bool operator<(const Date& d)const
	{
		return (_year < d._year) || ((_year == d._year) && (_month < d._month)) || ((_year == d._year) && (_month == d._month) && (_day < d._day));
	}
	bool operator>(const Date& d)const
	{
		return (_year > d._year) || ((_year == d._year) && (_month > d._month)) || ((_year == d._year) && (_month == d._month) && (_day > d._day));
	}

private:
	int _year;
	int _month;
	int _day;
};

//class Less
//{
//public:
//	bool operator()(const Date pLeft, const Date pRight)
//	{
//		return pLeft < pRight;
//	}
//};

bool Less(const Date a, const Date b)
{
	return a < b;
}

typedef bool(*Compare)(const Date a, const Date b);

int main()
{
	Date d1(2019, 6, 28);
	Date d2(2019, 6, 27);
	Date d3(2019, 6, 26);

	priority_queue<Date, vector<Date>, Compare> q(Less);///////////利用函数指针的方法来把自定义类型放入到优先级队列中
	q.push(d1);
	q.push(d2);
	q.push(d3);

	return 0;
}

