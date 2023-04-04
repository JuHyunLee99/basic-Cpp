#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include "Calculator.h"
using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{

	switch (oper)
	{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			if (y == 0) throw string("0으로 나눌 수 없습니다.예외발생");	// 예외
			return x / y;
		default:
			return 0.0;
	}
}