// Self-Reference ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n)	//��ȯ���� ������ SelfRef& / => ��ü �ڽ��� ������ �� �ִ� ������ ����(���� ��)�� ��ȯ
	{
		num += n;
		return *this;	// ��ü �ڽ��� �����Ͱ� �ƴ� ��ü �ڽ��� ��ȯ
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}