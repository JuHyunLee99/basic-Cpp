// �̸����� ����� �Լ� ����� ������ ����
# include <iostream>

namespace BestComImp1
{
	void SimpleFunc(void);	//�Լ��� ����
}

namespace ProgComImpl
{
	void SimpleFunc(void);	// �Լ��� ����
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

// �Լ��� ����
void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}
// �Լ��� ����
void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}