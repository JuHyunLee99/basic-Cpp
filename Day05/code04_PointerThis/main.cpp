// this ������
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;	// ��ü�ڽ��� �ּҰ�
	}
	void ShowSimpleDate()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();	//sim1 ��ü�� �ּҰ� ����
	cout << ptr1 << ", ";
	ptr1->ShowSimpleDate();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();	//sim2 ��ü�� �ּҰ� ����
	cout << ptr2 << ", ";
	ptr2->ShowSimpleDate();

	return 0;
}
