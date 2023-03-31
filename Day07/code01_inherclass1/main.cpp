#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char name[30];
	int age;
public:
	Person(const char*, int);	// �Լ� ����(����)������ �Ű����� �̸� ��������
	void getData();
};

class Student : public Person
{
private:
	int studentId;
public:
	Student(const char*, int, int);
	void showData();
};

Person::Person(const char* aname, int aage) : age(aage)
{
	strcpy(name, aname);
}
void Person::getData()
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
}

Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage), studentId(astudentId)
{	}
void Student::showData()
{
	getData();
	cout << "ID: " << studentId << endl;
}

int main()
{
	Student st1("������", 25, 1);
	st1.showData();
	return 0;
}