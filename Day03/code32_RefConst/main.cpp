// const 포인터와 const 참조자
#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;	// const 변수 선언
	const int* ptr = &num;	// const 포인트변수 선언
	const int* (&ref) = ptr;	// const(상수화) 포인터변수 참조

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}