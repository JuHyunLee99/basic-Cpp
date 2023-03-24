#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다. (은닉)
class Myclass {
private:
	char id;
	int age;
	char name[10];
	//멤버함수(=메소드): 기능
public:
	void set(char aid, int aage, const char *aname);
	void get();
};

void Myclass::set(char aid, int aage, const char *aname)
{
	id = aid;
	age = aage;
	strcpy(name, aname);
}

void Myclass::get()
{
	cout << "ID: " << id << endl;
	cout << "나이: " << age << "세" << endl;
	cout << "이름: " << name << endl;
}

int main()
{
	Myclass user99;
	user99.set('A', 25, "이주현");
	user99.get();
	return 0;
}