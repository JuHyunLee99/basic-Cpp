//멤버변수로 참조자 선언
#include<iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)	// 객체 참조 초기화, 상수 참조 초기화
		: ref(r), num(n)
	{
		// empty constructor body
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}