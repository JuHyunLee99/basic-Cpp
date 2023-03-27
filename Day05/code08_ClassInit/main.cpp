// 복사생성자
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2)
		:num1(n1), num2(n2)
	{
		//empty
	}
	SoSimple(const SoSimple& copy)	// 복사 생성자 // const으로 변경을 막는게 좋다.
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple&copy)" << endl;
	}
	void ShowSimpleDate()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직적" << endl;
	SoSimple sim2 = sim1;	// SoSimple sim2(sim1); 으로 변환 가능
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleDate();
	return 0;
}