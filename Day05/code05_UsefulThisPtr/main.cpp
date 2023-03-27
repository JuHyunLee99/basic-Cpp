// this 포인터의 활용
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;	// this->num1: 멤버변수 / num1: 매개변수
		this->num2 = num2;
	}
	
	//TwoNumber(int num1, int num2)	// 멤버 이니셜라이저
	//	: num1(num1), num2(num2)
	//{
	//	//empty
	//}
	
	void ShowTwoNumber()
	{
		cout << this->num1 << endl;	// 멤버변수 접근/ 보통 this 생략
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}