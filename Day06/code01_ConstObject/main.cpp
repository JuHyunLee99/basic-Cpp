//const 객체와 const 객체의 특성
#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& Addnum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20);	// const 객체는 const 함수만 사용할 수 있다.
	obj.ShowData();
	return 0;
}