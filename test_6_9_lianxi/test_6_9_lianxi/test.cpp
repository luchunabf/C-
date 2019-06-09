#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"

void Person::showInfo()
{
	cout << _name << "-" << _sex << "-" << _age << endl;
}
void Person::setInfo(char* name, char* sex, int age)
{
	_name = name;
	_sex = sex;
	_age = age;
}

int main()
{
	Person p;
	p.setInfo("lc", "male", 23);
	p.showInfo();
	system("pause");
	return 0;
}