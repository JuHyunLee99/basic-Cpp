// SimpleClass()로 정의된 생성자를 이용해서 객체 생성하기위해,
// SimpleClass sc1();를 구성하면 안되는 이유 
#include<iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowDate() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();
	SimpleClass mysc = sc1();	// 함수의 원형 선언!
	mysc.ShowDate();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}