// 얕은 복사 디폴트 복사 생성자의 문제점
// 깊은 복사
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)	// 복사 생성자
	{
		name = new char[strlen(copy.name) + 1];	// 깊은 복사 추가
		strcpy(name, copy.name);
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()	// 디폴트 복사 생성자/ 소멸자 두번 호출되야하는 데 한번만 호출됨. <- 얕은 복사 문제점.
	{			// 깊은 복사하면 두번 호출됨. 얕은 복사 문제점 해결
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}