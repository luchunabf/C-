#define _CRT_SECURE_NO_WARNINGS 1

#if 1//ÎÒµÄ
#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	return false;
}
bool ValidDay(int year, int month, int day)
{
	int array[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapYear(year))
		array[2] += 1;
	if (year > 0 && month > 0 && month < 12 && day > 0 && day < array[month])
		return true;
	return false;
}
int CountDay(int year, int month, int day)
{
	int countday = 0;
	int array[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapYear(year))
		array[2] += 1;
	for (int i = 1; i < month; ++i)
		countday += array[i];
	countday += day;
	return countday;
}

int main()
{
	int year, month, day, n = 0;
	while (cin >> year >> month >> day)
	{
		if (ValidDay(year, month, day))
		{
			n = CountDay(year, month, day);
			cout << n << endl;
		}
		else
			cout << -1 << endl;
	}
	return 0;
}
#endif



#if 0
//ls
#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
		return true;

	return false;
}

int GetMonthOfDay(int year, int month)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (IsLeapYear(year) && 2 == month)
		days[2] += 1;

	return days[month];
}

bool IsVliadDate(int year, int month, int day)
{
	if (year > 0 &&
		month >= 1 && month <= 12 &&
		day > 0 && day <= GetMonthOfDay(year, month))
	{
		return true;
	}

	return false;
}



// 2019,6,29
int ConvertDate(int year, int month, int day)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int totalDays = 0;

	if (IsLeapYear(year))
		days[2] += 1;

	for (int i = 1; i < month; ++i)
	{
		totalDays += days[i];
	}

	totalDays += day;
	return totalDays;
}

int main()
{
	int year, month, day;

	while (cin >> year >> month >> day)
	{
		if (IsVliadDate(year, month, day))
		{
			cout << ConvertDate(year, month, day) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}


	return 0;
}
#endif