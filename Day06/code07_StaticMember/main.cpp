// static 멤버변수 (클래스 변수)
#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;	// 객체내에 simObjCnt 존재x / static 멤버변수, 클래스 변수 
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::simObjCnt = 0;	// static 멤버변수 초기화
// 생성자 내에서 초기화하면 안됨.

class SoComplex
{
private:
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1; // 모든 SoSimple 객체가 simObjCnt을 공유.
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}