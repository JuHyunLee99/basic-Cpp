// this 포인터
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
		cout << "address=" << this << endl;	// 객체자신의 주소값
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
	SoSimple* ptr1 = sim1.GetThisPointer();	//sim1 객체의 주소값 저장
	cout << ptr1 << ", ";
	ptr1->ShowSimpleDate();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();	//sim2 객체의 주소값 저장
	cout << ptr2 << ", ";
	ptr2->ShowSimpleDate();

	return 0;
}
