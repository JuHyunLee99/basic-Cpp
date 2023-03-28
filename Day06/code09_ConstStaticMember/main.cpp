//const static 멤버
#include<iostream>
using namespace std;

class CountryArea
{	// const멤버변수(상수)의 초기화는 이니셜라이저를 통해야함.
public:	// 하지만 const static으로 선언되는 멤버변수(상수)는 선언과 동시에 초기화 가능
	const static int RUSSIA		 = 1707510;
	const static int CANADA		 = 998467;
	const static int CHINA		 = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{	// 상수에 접근하기 위해 객체를 생성할 필요 없다.
	cout << "러시아 면적: " << CountryArea::RUSSIA << "㎢" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "㎢" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "㎢" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "㎢" << endl;
	return 0;
}