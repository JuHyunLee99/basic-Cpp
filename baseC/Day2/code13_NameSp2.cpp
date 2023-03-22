// 이름공간 기반의 함수 선언과 정의의 구분
# include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);	//함수의 선언
}

namespace ProgComImpl
{
	void SimpleFunc(void);	// 함수의 선언
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

// 함수의 정의
void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}
// 함수의 정의
void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}