#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1; // nul 문자를 넣기위해 +1 함.
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()	// 소멸자
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}