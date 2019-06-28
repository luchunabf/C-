#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
//深入练习日期类的初始化
#if 0
class Time
{
public:
	Time(int hour = 12, int minute = 13, int second = 20)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;

};
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1,int hour = 12, int minute = 13, int second = 20)
		:_year(year)
		,_month(month)
		, _day(day)
		, _a(hour,  minute, second)
	{}
private:
	int _year;
	int _month;
	int _day;
	Time _a;
};

int main()
{
	Date d1;
	system("pause");
	return 0;
}
#endif

#if 0
class Time
{
public:
	Time(int hour = 12, int minute = 13, int second = 20)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;

};
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1, int b = 1,int n = 10)
		:_year(year)
		, _month(month)
		, _day(day)
		, _a()////////////////////////重点理解
		, _b(b)
		, _n(n)
	{}
private:
	int _year;
	int _month;
	int _day;
	Time _a;
	int& _b;
	const int _n;
};

int main()
{
	Date d1;
	system("pause");
	return 0;
}
#endif

#if 0
class Time
{
public:
	Time(int hour = 12, int minute = 13, int second = 20)
		:_hour(hour)
		, _minute(minute)
		, _second(second)
	{}
private:
	int _hour;
	int _minute;
	int _second;

};
class Date
{
public:
	/*Date(int year = 1900)
		:_year(year)
	{}*/
	explicit Date(int year = 1900)
		:_year(year)
	{}
private:
	int _year;
};

int main()
{
	Date d1;
	//d1 = 2019;
	system("pause");
	return 0;
}
#endif

class Date
{
public:
	Date(int year = 1900)
	:_year(year)
	, _array((int*)malloc(sizeof(int)*_year))
	{}
	
private:
	//int* _array;//按照此顺序进行进行先后赋值
	//int _year;
	int _year;
	int* _array;
	
};

int main()
{
	Date d1;
	system("pause");
	return 0;
}