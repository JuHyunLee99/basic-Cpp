//복사생성자
// 반환할대 만들어진 객체는 언제 소멸하는가?

#include <iostream>
using namespace std;

class Temporary
{

private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100);	// 임시객체 직접 생성 방법
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();	// 임시객체 생성, 소멸
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);	// 참조자에 참조되는 임시객체는 바로 소멸되지 않는다.
	cout << "********** after make!" << endl << endl;
	return 0;	// 여기서 소멸
}