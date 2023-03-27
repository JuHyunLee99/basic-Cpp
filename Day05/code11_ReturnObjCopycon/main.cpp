//복사생성자
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)	// 복사 생성자 호출	/ ob객체
{
	cout << "reutrn 이전" << endl;
	return ob;	// 복사 생성자 호출 // 임시객체
}

int main(void)
{
	SoSimple obj(7);	// 생성자 호출 / obj 객체
	SimpleFuncObj(obj).AddNum(30).ShowData();
	obj.ShowData();
	return 0;
}