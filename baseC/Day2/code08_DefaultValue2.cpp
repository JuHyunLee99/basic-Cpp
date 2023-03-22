// 함수의 원형을 별도로 선언한 경우,
// 매개변수의 디폴트 값은 함수의 원형 선언에만 위치시킴.

#include <iostream>
int Adder(int num = 1, int num2 = 2);	// 함수의 선언

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)	// 함수의 정의
{
	return num1 + num2;
}