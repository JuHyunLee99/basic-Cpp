#include<iostream>
#include<stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simiple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;	// new �����ڸ� �̿��Ͽ� �������� ������ �Ҵ�

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);	// malloc �Լ�ȣ���� ���� �� ������ ���� �Ҵ�

	cout << endl << "end of main" << endl;
	delete sp1;	// �Ҵ����� ���� �Ҹ� ����
	free(sp2);
	return 0;
}