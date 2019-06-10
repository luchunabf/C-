#include<iostream>
using namespace std;
#include<stdlib.h>

class Person
{
public:
	void showpersoninfo();
	void setpersoninfo(char* name, char* gender, int age);
private:
	char* _name;
	char* _gender;
	int _age;
};