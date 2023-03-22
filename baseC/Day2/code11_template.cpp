// 템플릿 맛보기
// '템플릿'을 사용하여 '매크로' 함수와 같이 자료형에 의존하지 않는 '인라인' 함수가 됨
// 데이터 손실 발생하지 않음.
#include<iostream>

template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5.5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}