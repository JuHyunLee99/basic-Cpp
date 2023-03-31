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
	Person& operator = (const Person& copy)	// ������ �����ε�
	{	// ���� ���� ������ �ذ� // ������ �����ε� ���ϸ� ���� ������ ���� �߻�
		// �ּҸ� ����Ű�� �� ������ �̹� delete�Ǽ� �߻��� ����
		delete[]name;	// ���� �������� �Ҵ�� name �޸� ����
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
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("������", 20001201);
	p4=p1;
	p4.showPerson();

	return 0;
}