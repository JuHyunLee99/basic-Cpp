#include<iostream>
using namespace std;
// private 로 선언된 생성자를 통해서도 객체의 생성이 가능함.
// 클래스 내부에서 객체 생성
class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}	// 생성자 정의
	AAA& CreateInitObj(int n) const	// 객체를 참조로 반환
	{
		AAA* ptr = new AAA(n);	// 객체생성
		return *ptr;	// 객체 반환
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) { }	// 생성자 정의
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;
}