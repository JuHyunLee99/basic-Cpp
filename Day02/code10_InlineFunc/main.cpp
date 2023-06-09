// '매크로'를 이용하지 않은 C++ 기반의 '인라인' 함수 정의

/* 매트로
	장점: 일반적인 함수에 비해 실행속도의 이점, 자료형에 의존적이지 않음.
	단점: 복잡한 함수를 매크로의 형태로 정의하는데 한계가 있음 */

/* 인라인
	프로그램 코드라인 안으로 들어가 버린 함수
	일반 함수처럼 정의가 가능, but 자료형에 의존하므로 데이터 손실 발생
	'템플릿'을 사용하면 매크로 함수와 같이 자료형에 의존하지 않는 함수가 됨.*/

/* 매크로를 이용한 함수의 인라인화는 전처리기에 의해 처리
	키워드 inline을 이용한 함수의 인라인화는 컴파일러에 의해 처리 */

#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}