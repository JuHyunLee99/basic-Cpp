#include<iostream>
using namespace std;
class Mycalu
{
private:
	int num1;
	int num2;
public:
	// 생성자(콜론초기화)
	Mycalu(int n1, int n2);
	void add();
	void sub();
	void mul();
	void div();
};

Mycalu::Mycalu(int n1, int n2) :num1(n1), num2(n2)
{
	//empty
}

void Mycalu::add()
{
	cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
}
void Mycalu::sub()
{
	cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
}
void Mycalu::mul()
{
	cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
}
void Mycalu::div()
{
	cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
}
int main(void)
{
	Mycalu cal(6, 3);
	cal.add();
	cal.sub();
	cal.mul();
	cal.div();
	return 0;
}