// ���� ������
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
	int num;
	char* name;
public:
	Myclass(int n, const char * name) : num(n)	
	{
		cout << "������ ȣ��" << endl;
		this -> name = new char[strlen(name) + 1];
		strcpy(this->name, name);

	}
	explicit Myclass(const Myclass& copy)	// �Ű������� ��ü �������� // const�� ������ ���°� ����.
	{	// explicit�� ����Ͽ� ������ ȣ������ ���� �� �ִ�.
		cout << "��������� ȣ��" << endl;
		this -> num = copy.num;
		//this->name = copy.name;	// ���� ����
		this->name = new char[strlen(copy.name) + 1];	// ���� ����
		strcpy(this->name, copy.name);
	}
	void getData()
	{
		cout << num << endl;
		cout << name << endl;
	}
	~Myclass()
	{	
		cout << "�޸� ����" << endl;
		delete[] this->name;
	}
};

int main()
{
	Myclass m1(1, "ȫ�浿");		//������ ȣ��
	//Myclass m2 = m1;	// ��������� ȣ��. int num2 = num1
	//explicit�� ����Ͽ� ������ ȣ������ ���� �� �ִ�.
	Myclass m3(m1);		// ��������� ȣ��

	m1.getData();
	//m2.getData();
	m3.getData();

	return 0;	// ���� �߻� : ���� ����
}