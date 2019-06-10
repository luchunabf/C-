#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include <stdlib.h>

class Peron
{
public:
	void showpersoninfo()
	{
		cout << _name << " " << _genger << " " << _age << endl;
	}
	void setperoninfo(char* name,char* gender,int age)
	{
		_name = name;
		_genger = gender;
		_age = age;
	}
private:
	int _age;
	char* _name;
	char* _genger;

};

int main()
{
	Peron p1;
	p1.setperoninfo("lu", "male", 23);
	p1.showpersoninfo();
	system("pause");
	return 0;
}

