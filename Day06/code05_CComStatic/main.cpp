// c언어에서 static
#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt;	// 딱 한번만 실행된다.// 함수빠져나가도 소멸X
	// 전역변수와 마찬가지로 초기화하지 않으면 0으로 초기화된다
	cnt++;
	cout << "static_current cnt: " << cnt << endl;
}
void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0;i < 10;i++)
	{
		static_Counter();
		Counter();
	}
	return 0;
}