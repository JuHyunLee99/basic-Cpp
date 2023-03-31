// ������ : �����Լ��� ȣ����迡�� ���� Ư��
#include <iostream>
using namespace std;

class First
{
public:
	virtual void SimpleFunc() { cout << "First" << endl; }
};

class Second : public First
{
public:
	virtual void SimpleFunc() { cout << "Second" << endl; }
};

int main(void)
{
	First* ptr = new First();
	ptr->SimpleFunc();	// �Ʒ��� ������ ������ �����Ѵ�.
	delete ptr;

	ptr = new Second();
	ptr->SimpleFunc();	// ���� ������ ������ �����Ѵ�.
	delete ptr;
	return 0;
}

// �����Լ��� ������� ������ �������� Ÿ�Կ� ���� ����
// �����Լ��� ����ϸ� ��ü�� Ÿ�Կ� ���� ����
// ���� ptr�� ������ ������ ���������� �����ϴ� ��ü�� �ڷ����� �ٸ��� ������ 
// �������� �ٸ�.