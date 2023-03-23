// 범위지정 연산자(Scope Resuolution Operator)의 또 다른 기능
#include<iostream>
using namespace std;
int val = 100;	// 전역변수

void SimpleFunc(void)
{
	int val = 20;	// 지역변수
	val += 3;		// 지역변수 val의 값 3 증가
	::val += 7;		// 전역변수 val의 값 7 증가
	cout << val << endl;
	cout << ::val << endl;
}

int main(void)
{
	SimpleFunc();
	return 0;
}