// const �����Ϳ� const ������
#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;	// const ���� ����
	const int* ptr = &num;	// const ����Ʈ���� ����
	const int* (&ref) = ptr;	// const(���ȭ) �����ͺ��� ����

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}