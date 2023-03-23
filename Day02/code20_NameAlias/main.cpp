// 이름공간의 별칭 지정
// 이름공간이 중첩되면서까지 과도하게 사용되는 경우
#include<iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;	// 별칭 선언
	cout << ABC::num1 << endl;	// 접근
	cout << ABC::num2 << endl;
	return 0;
}