#include <iostream>
using namespace std;
#include<stdlib.h>

class Date
{
public:
	void showDate();
	void setDate(int year, int month, int day);
private:
	int _year;
	int _month;
	int _day;

};