// Myclass1�� ������, ��� �̴ϼȶ����� �߰�
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
	Myclass(char aid, int aage, const char* aname); // ������ ����
	void getData();	// �޼ҵ� ����(����)
	~Myclass()	// �Ҹ���
	{
		delete[]name;
		cout << "called destructor1" << endl;
	}
};

// ��� �̴ϼȶ������� �̿��� ��� �ʱ�ȭ
// �����ڰ� ȣ��Ǳ� ���� ��� �̴ϼȶ������� ���� : id(aid), age(aage)�� �ʱ�ȭ
Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) // ������ ����
{
	printf("������ ȣ��\n");
	int len = strlen(aname) + 1; // nul ���ڸ� �ֱ����� +1 ��.
	name = new char[len];
	strcpy(name, aname);
}

void Myclass::getData()	// �޼ҵ� ����
{
	cout << "ID: " << id << endl;
	cout << "����: " << age << "��" << endl;
	cout << "�̸�: " << name << endl;
}

int main()
{
	Myclass user99('A', 25, "������");
	user99.getData();
	return 0;
}