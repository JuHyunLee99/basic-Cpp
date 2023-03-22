// 이름공간(namespace)
/* SimpleFunc(void) 함수의 이름과 매개변수 형이 동일하기때문에,
자신만의 이름공간을 만들고 이 안에 함수 정의, 변수 선언 */
#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{	// '::' : 범위지정 연산자
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}