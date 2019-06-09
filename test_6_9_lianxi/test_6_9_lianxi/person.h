#include <iostream>
using namespace std;
#include <stdlib.h>

class Person
{
public:
	void showInfo();
	void setInfo(char* name,char* sex, int age);
public:
	char* _name;
	char* _sex;
	int _age;
};