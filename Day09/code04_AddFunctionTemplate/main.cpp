// 템플릿
// 자료형에 의존하지 않는 함수를 만들수 있음
#include <iostream>
using namespace std;

template <typename T>	// 함수 템플릿
T Add(T num1, T num2)
{
	return num1 + num2;
}

//int main(void)
//{
//	cout << Add<int>(15, 20) << endl;
//	cout << Add<double>(2.9, 3.7) << endl;
//	cout << Add<int>(3.2, 3.2) << endl;
//	cout << Add<double>(3.14, 2.75) << endl;
//	return 0;
//}

int main(void)
{
	cout << Add(15, 20) << endl;
	cout << Add(2.9, 3.7) << endl;
	cout << Add(3.2, 3.2) << endl;
	cout << Add(3.14, 2.75) << endl;
	return 0;
}

// 첫번째 main이 더 좋다. 코드는 명확한게 더 좋다.