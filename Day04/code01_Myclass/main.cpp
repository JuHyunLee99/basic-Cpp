#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�. (����)
class Myclass {
private:
	char id;
	int age;
	char name[10];
	//����Լ�(=�޼ҵ�): ���
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
	cout << "����: " << age << "��" << endl;
	cout << "�̸�: " << name << endl;
}

int main()
{
	Myclass user99;
	user99.set('A', 25, "������");
	user99.get();
	return 0;
}