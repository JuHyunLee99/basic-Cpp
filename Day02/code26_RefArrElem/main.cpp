// �������� ���� ���� ����

#include<iostream>
using namespace std;

int main(void)
{
	// �����ڴ� ������ ���ؼ��� ���� ����.
	// int& ref = 20;
	
	// ����ʰ� ���ÿ� �������� �����ؾ߸� ��.
	// int& ref;

	// �����ڸ� �����ϸ鼭 NULL�� �ʱ�ȭ�ϴ� �͵� �Ұ���
	// int& ref = NULL;

	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}