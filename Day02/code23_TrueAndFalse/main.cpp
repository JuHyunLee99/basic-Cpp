// true와 false의 의미
#include<iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;
	cout << "false: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
		{
			break;
		}
	}
		cout << endl;

		cout << "sizeof 1: " << sizeof(1)<< endl;	// 상수 1: 4
		cout << "sizeof 0: " << sizeof(0) << endl;	// 상수 0: 4
		cout << "sizeof true: " << sizeof(true) << endl;	// true: 1
		cout << "sizeof false: " << sizeof(false) << endl;	// flase: 1
		return 0;

}