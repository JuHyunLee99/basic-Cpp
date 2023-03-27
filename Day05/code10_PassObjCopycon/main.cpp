// 할당이후, 복사 생성자를 통한 초기화
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class SoSimple
{
private:
	int num;	
public:
	SoSimple(int n) : num(n)		// obj 객체 생성, 초기화 // num 생성, 초기화
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)	// ob 객체 생성, obj 객체로 초기화
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)	// 복사 생성자 호출
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);	// 생성자 호출
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;
	return 0;

}