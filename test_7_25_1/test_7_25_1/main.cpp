#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

#if 0
class Date
{
public:
	Date(int year, int month, int day)
	:_year(year)
	, _month(month)
	, _day(day)
	{}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	static void print()
	{
		cout << "2019-7-25"<< endl;
		cout << _time << endl;
	}
	static int _time;
private:
	int _year;
	int _month;
	int _day;
	
};

int Date::_time = 0;
int main()
{
	//Date d1(2000,1,1);
	//d1.print();
	Date::print();
	cout << Date::_time << endl;
	return 0;
}
#endif

#include <assert.h>
class String
{
public:
	String(const char* str = "")
	:_str(new char[strlen(str)+1])
	{
		if (str == nullptr)
		{
			assert(0);
			return;
		}
		strcpy(_str, str);
	}
	String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}
	String& operator=(const String& s)
	{
		if (this != &s)
		{
			char* pStr = new char[strlen(s._str) + 1];
			strcpy(pStr, s._str);
			delete[] _str;
			_str = pStr;
		}
		return *this;
	}
	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};

int main()
{
	String s1("hello");
	String s2(s1);
	String s3;
	s3 = s1;

	String* p1 = new String();
	//String* p1 = new String;
	String* p2 = new String("world");

	delete p1;
	delete p2;

	return 0;
}