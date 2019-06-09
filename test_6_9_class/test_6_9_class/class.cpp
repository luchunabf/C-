#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stdlib.h>

class Person
{
public:
	void PrintPersonInfo();
	void SetPersonInfo(char name, char gender, int age);
public:
	char _name[20];
	char _gender[3];
	int _age;
};

void Person::PrintPersonInfo()
{
	cout << _name << " " << _gender << " " << _age << endl;
}


int main()
{
	Person p;
	p.PrintPersonInfo();//ÌÌÌÌÌÌÌÌÌÌÌÌ (Î´³õÊ¼»¯£©
	system("pause");
	return 0;
}