//�Լ� ���ø��� ���ø� �Լ�
#include<iostream>
using namespace std;

// �Լ� ���ø�
template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}

int Add(int num1, int num2)
{
	cout << "Add(int num1, int num2" << endl;
	return num1 + num2;
}

double Add(double num1, double num2)
{
	cout << "Add(double num1, double num2" << endl;
	return num1 + num2;
}

int main(void)
{
	cout << Add(5, 7) << endl;	// �Լ��� ���� �Ǿ����� ������ ���ø� �Լ��� ȣ�������
	cout << Add(3.7, 7.5) << endl;	// �Ϲ� �Լ��� ���ǵǾ��ֱ� �빮�� �Ϲ��Լ� ȣ��
	cout << Add<int>(5, 7) << endl;		// <int> ���ø� �Լ��� ȣ���� ���
	cout << Add<double>(3.7, 7.5) << endl;
	return 0;
}