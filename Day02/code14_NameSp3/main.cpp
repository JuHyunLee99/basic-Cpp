	// ������ �̸������� ���ǵ� �Լ��� ȣ���� ���� �̸������� ����� �ʿ䰡 ����
	# include <iostream>

	namespace BestComImpl
	{
		void SimpleFunc(void);	//�Լ��� ����
	}

	namespace BestComImpl
	{
		void PrettyFunc(void);	//�Լ��� ����
	}

	namespace ProgComImpl
	{
		void SimpleFunc(void);	// �Լ��� ����
	}

	int main(void)
	{
		BestComImpl::SimpleFunc();
		return 0;
	}

	// �Լ��� ����
	void BestComImpl::SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
		PrettyFunc();	// ���� �̸�����
		ProgComImpl::SimpleFunc();	// �ٸ� �̸�����
	}

	// �Լ��� ����
	void BestComImpl::PrettyFunc(void)
	{
		std::cout << "So Pretty!!" << std::endl;
	}

	void ProgComImpl::SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}