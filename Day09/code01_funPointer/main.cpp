#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
private:
	char * name;
	int birthday;
public:
	Person(const char* aname, int abirthday)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		birthday = abirthday;
	}
	Person(const Person& copy)
	{
		birthday = copy.birthday;
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	Person& operator = (const Person& copy)	// 연산자 오버로딩
	{	// 얕은 복사 문제점 해결 // 연산자 오버로딩 안하면 얕은 복사의 문제 발생
		// 주소를 가리키는 데 실제는 이미 delete되서 발생한 문제
		delete[]name;	// 기존 힙영역에 할당된 name 메모리 삭제
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		birthday = copy.birthday;
		return *this;
	}
	void showPerson()
	{
		cout << name << ", " << birthday << endl;
	}
	~Person()
	{
		delete[] this->name;
	}
};

int main(void)
{
	Person p1("홍길동", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("강감찬", 20001201);
	p4=p1;
	p4.showPerson();

	return 0;
}