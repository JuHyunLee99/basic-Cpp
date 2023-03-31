// 가상 함수 virtual
#include <iostream>
using namespace std;

class Super {
public:
	//void func1() { cout << "Super::func1()" << endl; }
	//void func2() { cout << "Super::func2()" << endl; }
	//void func3() { cout << "Super::func3()" << endl; }
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	virtual void func3() { cout << "Super::func3()" << endl; }
};
class Sub : public Super
{
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main()
{
	Super super;
	Sub sub;
	super.func3();
	super.func2();
	super.func1();
	sub.func4();
	sub.func3();
	sub.func2();
	sub.func1();

	cout << endl;

	Super* ps = new Sub;
	ps->func3();
	ps->func1();
	ps->func2();

	delete ps;

	return 0;
}

/* 부모클래스 타입으로 자식클래스 객체 포인터 만들 경우 (함수는 오버라이딩됨)
*  함수 호출하면 포인트 타입에 따라 부모클래스의 멤버함수(오버라이딩 안된)가 호출됨.

* 부모클래스 타입으로 자식클래스 객체 포인터를 선언했을 때 
*오버라이딩된 함수를 호출하고 싶을때 virtual 사용
 */