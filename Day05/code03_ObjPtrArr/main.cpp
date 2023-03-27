// 객체 포인터 배열
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person	// code02_Objarr 과 동일
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)	// 생성자
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()	// 배열 생성시 필요한 생성자
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage)	// 데이터 초기화
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person* parr[3];	// 포인터 배열 선언/ 객체의 주소값 3개를 저장할 수 있는 배열
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);	// 객체 생성하여 이 객체의 주소 값으로 배열에 저장
	}

	parr[0]->ShowPersonInfo();	// 객체포인터로 접근할때는 '->'
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];	// 총 3회 delete
	delete parr[1];
	delete parr[2];
	return 0;

}