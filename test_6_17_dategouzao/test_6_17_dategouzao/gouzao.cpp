#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include <iostream>
using namespace std;

#if 0
//���캯��
class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date()
	{}
private:
	int _year;
	int _month;
	int _day;

	//�Զ�������
	Time _t;

};

int main()
{
	Date d;
	return 0;
}
#endif



#if 0
//��������
class String
{
public:
	String(const char* pstr = "")
	{
		_str = (char*)malloc(strlen(pstr) + 1);
		if (nullptr == _str)
		{
			//assert(0);
			return;
		}

		strcpy(_str, pstr);

		cout << "String()" << endl;
	}

	~String()
	{
		if (_str)
		{
			free(_str);
		}

		cout << "~String()" << endl;
	}
private:
	char* _str;
};


class Person
{
public:
	Person()
	{
		cout << "Person()" << endl;
	}

	
	/*~Person()
	{
		cout << "call ~String();" << endl;//�������������ǣ����ð��������������������
	}*/
	

private:
	String _strName;
};


void TestSeqList()
{
	Person p;
}

int main()
{
	TestSeqList();
	system("pause");
	return 0;
}
#endif



#if 0
//const
class Date
{
public:
	// ȫȱʡ�Ĺ��캯��
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// const��Ա�����в����޸ĳ�Ա����
	// const����thisָ�룬��������ǰ�����е����ݲ������޸�
	// const Date* const
	void PrintDate()const
	{
		//this->_day = 1;
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	// Date* const
	void PrintDate()
	{
		_day = 1;
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator==(const Date& d)const
	{
		//_day = 1;
		//d._day = 1;
		return _year == d._year &&
			_month == d._month &&
			_day == d._day;
	}

	Date* operator&()
	{
		return this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2019, 6, 16);
	d1.PrintDate();

	const Date d2(2019, 6, 17);
	d2.PrintDate();
	/*cout << &d << endl;

	const Date cd(2019, 6, 16);
	cout << &cd << endl;*/
	return 0;
}
#endif


#if 0
template<class T>
class SeqList
{
public:
	SeqList(size_t capacity = 3)
		: _array(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}

	// ��������&��ֵ���������

	~SeqList()
	{
		if (_array)
		{
			delete[] _array;
			_array = nullptr;
			_size = 0;
			_capacity = 0;
		}
	}

	void PushBack(const T& data);

	void PopBack()
	{
		//if (!Empty())//��ʦ����
		if (Empty())//������
			return;

		--_size;
	}

	// �������
	T& operator[](size_t index)//(size_t index)����Ž�[]����
	{
		return _array[index];
	}

	T& Front()
	{
		return _array[0];
	}


	size_t Size()const
	{
		return _size;
	}

	size_t Capacity()const
	{
		return _capacity;
	}

	bool Empty()const
	{
		return 0 == _size;
	}

private:
	T* _array;
	size_t _size;
	size_t _capacity;
};

template<class T>
void SeqList<T>::PushBack(const T& data)
{
	// _CheckCapacity();
	_array[_size++] = data;
}


int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	cout << array[5] << endl;


	SeqList<int> s1;
	s1.PushBack(1);
	s1.PushBack(2);
	s1.PushBack(3);
	s1.PopBack();
	//cout << s1.Size() << endl;
	//cout << s1.Capacity() << endl;
	//cout << s1.Front() << endl;
	cout << s1.operator[](1) << endl;
	cout << s1[1] << endl;
	//s1[1] = 10;

	SeqList<double> s2;
	s2.PushBack(1.0);
	s2.PushBack(2.0);
	s2.PushBack(3.0);
	system("pause");
	return 0;
}
#endif

#if 0 //��ģ�����ϰ
template<typename T>
class SeqList
{
public:
	SeqList(size_t capacity = 10)//���10 ����ʡ��
		: _array(new T[capacity])//ע������T���������������
		, _size(0)
		, _capacity(capacity)
	{}      //�����岻�������������ڸ�ֵ���ǳ�ʼ��
	
	~SeqList()
	{
		if (_array)
		{
			delete[] _array;
			_array = nullptr;
			_size = 0;
			_capacity = 0;
		}
	}

	void PushBack(const T& data);//���������������������涨��
	void CheckCapacity();//�����涨���������������

	void PopBack()
	{
		if (Empty())
			return;
		--_size;
	}

	T& operator[](size_t index)//�����±����,(size_t index)����Ž�[]����
	{
		assert(index < _size);
		return _array[index];
	}

	size_t Size()
	{
		return _size;
	}

	size_t Capacity()
	{
		return _capacity;
	}

	bool Empty()
	{
		return 0 == _size;
	}



private:
	T* _array;
	size_t _size;
	size_t _capacity;
};

template<typename T>
void SeqList<T> ::PushBack(const T& data)
{
	CheckCapacity();
	_array[_size++] = data;
}

template<typename T>	
void SeqList<T> ::CheckCapacity()////////////////////////////////
{
	if (_size == _capacity)
	{
		//delete[] _array;
		_array = new T[_capacity * 2];
		_capacity *= 2;
		
	}
	return;
}

int main()
{
	SeqList<int> s1;//������ʵ��������Ҫ��T�ľ�������int����������ʽ���
	s1.PushBack(0);
	s1.PushBack(1);
	s1.PushBack(2);
	
	s1.PushBack(3);
	s1.PushBack(4);
	s1.PushBack(5);
	s1.PushBack(6);
	s1.PushBack(7);
	s1.PushBack(8);
	s1.PushBack(9);
	cout << s1.operator[](1) << endl;
	cout << s1[1] << endl;
	s1.PushBack(10);
	
	cout << s1.Capacity() << endl;
	cout << s1.Size() << endl;
	//s1.PopBack();
	//cout << s1.Size() << endl;
	cout << s1.operator[](1) << endl;
	cout << s1[1] << endl;
	system("pause");
	return 0;
}
#endif 

#if 0
//���캯����ϰ
class Date
{
public:
	Date(int year, int month, int day)//���캯��
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& d)//�������캯��
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	~Date()//��������
	{
		//cout << "��������������" << endl;//����Ա���������Զ������ͱ���ʱ�����������������
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date s1(2019, 6, 17);
	Date s2(s1);//(int)��ֵ��ͬ��������ֵ��ŵĵ�ַ��ͬ
	//system("pause");
	return 0;
}
#endif

#if 0
class String
{
public:
	String(const char* str = "hello")//���캯��
	{
		_str = (char*)malloc(strlen(str) + 1);//+1�Ǹ�\0һ���ռ�
		strcpy(_str, str);
	}
	String(const String& d)//�������캯��
	{
		_str = d._str;
		strcpy(_str, d._str);
	}
	~String()//��������
	{
		cout << "~String()" << endl;
		free(_str);
	}


private:
	char* _str;
};
int main()
{
	String s1;
	String s2("world");
	String s3(s2);//�����,ͬһ���ڴ�ռ䱻�ͷŶ�Σ�s2 �� s3 ָ��ͬһ���ڴ�
	return 0;
}
#endif 

#if 0
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
//private:
	int _year;
	int _month;
	int _day;
};

bool operator==(const Date& d1, const Date& d2)
{
	return d1._year == d2._year
		&& d1._month == d2._month
		&& d1._day == d2._day;
}

int main()
{
	Date d1(2019, 9, 26);
	Date d2(2019, 9, 27);
	cout << (d1 == d2) << endl;
	system("pause");
	return 0;
}
#endif

#if 0
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//bool operator==(Date* this, const Date& d)////////////////////////////////////
	bool operator==(const Date& d)
	{
		return this->_year == d._year
			&& this->_month == d._month
			&& this->_day == d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d1(2019, 9, 26);
	Date d2(2019, 9, 27);
	cout << (d1 == d2) << endl;
	system("pause");
	return 0;
}
#endif 

#if 0
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator=(const Date& d)//��ֵ���������
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date s1;
	Date s2(2019, 6, 18);
	s1 = s2;
	return 0;
}
#endif

#if 1
class Date
{
public:
	Date(int year = 2019, int month = 6, int day = 17)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	void Display()
	{
		cout << "Display()" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl;
	}
	void Display() const
	{
		cout << "Display() const" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date s1;
	s1.Display();
	const Date s2;//��const���εĶ��������� ��const�ĳ�Ա����
	s2.Display();

	system("pause");
	return 0;
}
#endif 
