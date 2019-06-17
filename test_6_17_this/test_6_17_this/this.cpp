#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Student
{
public:
	/*
	void InitStudent(Student* const this, char* name, char* gender, int age)//实质
	{
	strcpy(this->_name, name);
	strcpy(this->_gender, gender);
	this->_age = age;
	}
	*/

	void InitStudent(char* name, char* gender, int age)//省略this(现实)
	{
		//this = nullptr;

		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	/*
	void PrintStudent(Student* const this)//实质
	{
	cout << this->_name << ":" << this->_gender << ":" << this->_age << endl;
	}
	*/
	void PrintStudent()//省略this(现实)
	{
		cout << _name << ":" << _gender << ":" << _age << endl;
	}

	// this是通过参数压栈？     no，是通过ecx寄存器
	void TestFunc(...)//但是传不定参的时候，是通过参数压栈的方式传递
	{
		cout << this << endl;
	}

	//protected:
	char _name[20];
	char _gender[3];
	int _age;
};

int main()
{
	Student p1, p2, p3;
	cout << &p1 << endl;

	//cout << this << endl;
	// this是通过ecx寄存器
	// Student::InitStudent(&p1, "Peter", "男", 40);
	p1.InitStudent("Peter", "男", 40);

	// Student::InitStudent(&p2, "静静", "女", 41);
	p2.InitStudent("静静", "女", 41);
	p3.InitStudent("Summer", "公", 2);

	p1.PrintStudent();
	p2.PrintStudent();
	p3.PrintStudent();

	p1.TestFunc(10);
	p2.TestFunc(10, 20);

	Student* p = &p1;
	p->PrintStudent();

	p = nullptr;//将this修改为空
	p->TestFunc();//打印this时没有问题
	//p->PrintStudent();  // Student::PrintStudent(p);//再用this去成员访问就会崩溃
	return 0;
}