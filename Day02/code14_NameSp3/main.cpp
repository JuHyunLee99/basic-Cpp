	// 동일한 이름공간에 정의된 함수를 호출할 때는 이름공간을 명시할 필요가 없음
	# include <iostream>

	namespace BestComImpl
	{
		void SimpleFunc(void);	//함수의 선언
	}

	namespace BestComImpl
	{
		void PrettyFunc(void);	//함수의 선언
	}

	namespace ProgComImpl
	{
		void SimpleFunc(void);	// 함수의 선언
	}

	int main(void)
	{
		BestComImpl::SimpleFunc();
		return 0;
	}

	// 함수의 정의
	void BestComImpl::SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
		PrettyFunc();	// 동일 이름공간
		ProgComImpl::SimpleFunc();	// 다른 이름공간
	}

	// 함수의 정의
	void BestComImpl::PrettyFunc(void)
	{
		std::cout << "So Pretty!!" << std::endl;
	}

	void ProgComImpl::SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}