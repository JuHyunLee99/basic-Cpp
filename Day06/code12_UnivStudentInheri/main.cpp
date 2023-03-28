// 상속
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	int age;	// 나이
	char name[50];	// 이름
public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];	// 전공과목
public:
	UnivStudent(const char * myname, int myage, const char* mymajor)
		: Person(myage, myname)	// 부모클래스 생성자 호출	
		// 자식클래스는 부모클래스의 멤버변수에 접근 불가능하기때문에 
		//부모클래스의 생성자를 호출해서 멤버변수 초기화시킴
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My najor is " << major << endl << endl;
	}
};
int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}