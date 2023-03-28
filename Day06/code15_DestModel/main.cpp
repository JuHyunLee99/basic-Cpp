// 유도클래스의 생성자 및 소멸자 정의의 모델
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char* name;	// 이름
public:
	Person(const char* myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person()
	{
		delete[] name;
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char *major;	// 전공과목
public:
	UnivStudent(const char* myname, const char* mymajor)
		: Person(myname)	// 부모클래스 생성자 호출	
		// 자식클래스는 부모클래스의 멤버변수에 접근 불가능하기때문에 
		//부모클래스의 생성자를 호출해서 멤버변수 초기화시킴
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		delete[]major;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My najor is " << major << endl << endl;
	}
};
int main(void)
{
	UnivStudent std1("Kim","Mathematics");
	std1.WhoAreYou();

	UnivStudent std2("Hong", "Physics");
	std2.WhoAreYou();
	return 0;
}