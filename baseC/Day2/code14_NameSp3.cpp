	// ������ �̸������� ���ǵ� �Լ��� ȣ���� ���� �̸������� ����� �ʿ䰡 ����
	# include <iostream>

	namespace BestComImp1
	{
		void SimpleFunc(void);	//�Լ��� ����
	}

	namespace BestComImp1
	{
		void PrettyFunc(void);	//�Լ��� ����
	}

	namespace ProgComImpl
	{
		void SimpleFunc(void);	// �Լ��� ����
	}

	namespace ProgComImpl
	{
		void PrettyFunc(void);	// �Լ��� ����


	int main(void)
	{
		BestComImp1::SimpleFunc();
		return 0;
	}

	// �Լ��� ����
	void BestComImp1::SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
		PrettyFunc();
		ProgComImpl::SimpleFunc();
	}
	// �Լ��� ����
	void ProgComImpl::PrettyFunc(void)
	{
		std::cout << "So Pretty!!" << std::endl;
	}

	void ProgComImpl::SimpleFunc(void)
	{
		std::cout << "ProgComImpl�� ������ �Լ�" << std::endl;
	}