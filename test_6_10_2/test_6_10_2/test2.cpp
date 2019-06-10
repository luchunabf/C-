#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"

void Person::setpersoninfo(char* name, char* gender, int age)
{
	_name = name;
	_gender = gender;
	_age = age;
}
void Person::showpersoninfo()
{
	cout << _name << " " << _gender << " " << _age << endl;
}

int main()
{
	Person p1;
	p1.setpersoninfo("lc", "male", 23);
	p1.showpersoninfo();
	system("pause");
	return 0;
}

