// Myclass1에 생성자, 멤버 이니셜라이저 추가
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	char id;
	int age;
	char* name;

public:
	Myclass(char aid, int aage, const char* aname); // 생성자 원형
	void getData();	// 메소드 원형(선언)
	~Myclass()	// 소멸자
	{
		delete[]name;
		cout << "called destructor1" << endl;
	}
};

// 멤버 이니셜라이저를 이용한 멤버 초기화
// 생성자가 호출되기 전에 멤버 이니셜라이저에 의해 : id(aid), age(aage)로 초기화
Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) // 생성자 정의
{
	printf("생성자 호출\n");
	int len = strlen(aname) + 1; // nul 문자를 넣기위해 +1 함.
	name = new char[len];
	strcpy(name, aname);
}

void Myclass::getData()	// 메소드 정의
{
	cout << "ID: " << id << endl;
	cout << "나이: " << age << "세" << endl;
	cout << "이름: " << name << endl;
}

int main()
{
	Myclass user99('A', 25, "이주현");
	user99.getData();
	return 0;
}