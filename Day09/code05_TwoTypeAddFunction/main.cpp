//함수 템플릿과 템플릿 함수
#include<iostream>
using namespace std;

// 함수 템플릿
template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}

int Add(int num1, int num2)
{
	cout << "Add(int num1, int num2" << endl;
	return num1 + num2;
}

double Add(double num1, double num2)
{
	cout << "Add(double num1, double num2" << endl;
	return num1 + num2;
}

int main(void)
{
	cout << Add(5, 7) << endl;	// 함수가 정의 되어있지 않으면 템플릿 함수가 호출되지만
	cout << Add(3.7, 7.5) << endl;	// 일반 함수가 정의되어있기 대문에 일반함수 호출
	cout << Add<int>(5, 7) << endl;		// <int> 템플릿 함수의 호출을 명시
	cout << Add<double>(3.7, 7.5) << endl;
	return 0;
}