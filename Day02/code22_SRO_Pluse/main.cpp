// �������� ������(Scope Resuolution Operator)�� �� �ٸ� ���
#include<iostream>
using namespace std;
int val = 100;	// ��������

void SimpleFunc(void)
{
	int val = 20;	// ��������
	val += 3;		// �������� val�� �� 3 ����
	::val += 7;		// �������� val�� �� 7 ����
	cout << val << endl;
	cout << ::val << endl;
}

int main(void)
{
	SimpleFunc();
	return 0;
}