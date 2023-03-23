// 참조자의 선언 가능 범위

#include<iostream>
using namespace std;

int main(void)
{
	// 참조자는 변수에 대해서만 선언 가능.
	// int& ref = 20;
	
	// 선언됨과 동시에 누군가를 참조해야만 함.
	// int& ref;

	// 참조자를 선언하면서 NULL로 초기화하는 것도 불가능
	// int& ref = NULL;

	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}