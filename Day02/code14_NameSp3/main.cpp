	// 동일한 이름공간에 정의된 함수를 호출할 때는 이름공간을 명시할 필요가 없음
	# include <iostream>

	namespace BestComImp1
	{
		void SimpleFunc(void);	//함수의 선언
	}

	namespace BestComImp1
	{
		void PrettyFunc(void);	//함수의 선언
	}

	namespace ProgComImpl
	{
		void SimpleFunc(void);	// 함수의 선언
	}

	namespace ProgComImpl
	{
		void PrettyFunc(void);	// 함수의 선언


	int main(void)
	{
		BestComImp1::SimpleFunc();
		return 0;
	}

	// 함수의 정의
	void BestComImp1::SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
		PrettyFunc();
		ProgComImpl::SimpleFunc();
	}
	// 함수의 정의
	void ProgComImpl::PrettyFunc(void)
	{
		std::cout << "So Pretty!!" << std::endl;
	}

	void ProgComImpl::SimpleFunc(void)
	{
		std::cout << "ProgComImpl이 정의한 함수" << std::endl;
	}