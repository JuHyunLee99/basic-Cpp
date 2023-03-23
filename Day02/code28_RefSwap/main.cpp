// 참조자를 이용한 Call-by-reference
#include<iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2) //매개변수 참조자
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);	// 매개변수로 참조자가 선언
	cout << "val1: " << val1 << endl;
	cout << "val1: " << val2 << endl;
	return 0;
}