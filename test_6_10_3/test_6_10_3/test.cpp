#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

void Date::setDate(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
void Date::showDate()
{
	cout <<  _year << "��" << _month << "��" << _day << "��" << endl;
}
int main()
{
	Date d1;
	d1.setDate(2019, 6, 10);
	d1.showDate();
	system("pause");
	return 0;
}