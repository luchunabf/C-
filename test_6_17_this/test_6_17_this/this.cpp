#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Student
{
public:
	/*
	void InitStudent(Student* const this, char* name, char* gender, int age)//ʵ��
	{
	strcpy(this->_name, name);
	strcpy(this->_gender, gender);
	this->_age = age;
	}
	*/

	void InitStudent(char* name, char* gender, int age)//ʡ��this(��ʵ)
	{
		//this = nullptr;

		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}

	/*
	void PrintStudent(Student* const this)//ʵ��
	{
	cout << this->_name << ":" << this->_gender << ":" << this->_age << endl;
	}
	*/
	void PrintStudent()//ʡ��this(��ʵ)
	{
		cout << _name << ":" << _gender << ":" << _age << endl;
	}

	// this��ͨ������ѹջ��     no����ͨ��ecx�Ĵ���
	void TestFunc(...)//���Ǵ������ε�ʱ����ͨ������ѹջ�ķ�ʽ����
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
	// this��ͨ��ecx�Ĵ���
	// Student::InitStudent(&p1, "Peter", "��", 40);
	p1.InitStudent("Peter", "��", 40);

	// Student::InitStudent(&p2, "����", "Ů", 41);
	p2.InitStudent("����", "Ů", 41);
	p3.InitStudent("Summer", "��", 2);

	p1.PrintStudent();
	p2.PrintStudent();
	p3.PrintStudent();

	p1.TestFunc(10);
	p2.TestFunc(10, 20);

	Student* p = &p1;
	p->PrintStudent();

	p = nullptr;//��this�޸�Ϊ��
	p->TestFunc();//��ӡthisʱû������
	//p->PrintStudent();  // Student::PrintStudent(p);//����thisȥ��Ա���ʾͻ����
	return 0;
}