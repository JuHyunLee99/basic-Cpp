// 다형성 : 가상함수의 호출관계에서 보인 특성
#include <iostream>
using namespace std;

class First
{
public:
	virtual void SimpleFunc() { cout << "First" << endl; }
};

class Second : public First
{
public:
	virtual void SimpleFunc() { cout << "Second" << endl; }
};

int main(void)
{
	First* ptr = new First();
	ptr->SimpleFunc();	// 아래에 동일한 문장이 존재한다.
	delete ptr;

	ptr = new Second();
	ptr->SimpleFunc();	// 위에 동일한 문장이 존재한다.
	delete ptr;
	return 0;
}

// 가상함수를 사용하지 않으면 포인터의 타입에 따라 참조
// 가상함수를 사용하면 객체의 타입에 따라 참조
// 따라서 ptr은 동일한 포인터 변수이지만 참조하는 객체의 자료형이 다르기 때문에 
// 실행결과가 다름.