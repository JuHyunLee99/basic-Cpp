// �� �̻��� ��(Type)�� ���� ���ø� ����
#include<iostream>
using namespace std;

template <class T1, class T2>	// �� �̻��� ���ø� Ÿ�� ��� // Ű���� class ���
void ShowData(double num)	// �Ű����� �⺻ �ڷ��� ���� ����
{
	cout << (T1)num << ", " << (T2)num << endl;	// �ڷ��� �� ��ȯ
}

int main(void)
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);
	return 0;
}