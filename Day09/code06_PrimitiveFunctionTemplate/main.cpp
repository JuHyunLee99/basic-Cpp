// 둘 이상의 형(Type)에 대해 템플릿 선언
#include<iostream>
using namespace std;

template <class T1, class T2>	// 둘 이상의 템플릿 타입 명시 // 키워드 class 사용
void ShowData(double num)	// 매개변수 기본 자료형 선언 가능
{
	cout << (T1)num << ", " << (T2)num << endl;	// 자료형 형 변환
}

int main(void)
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);
	return 0;
}