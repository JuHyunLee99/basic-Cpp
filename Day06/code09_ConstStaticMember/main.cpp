//const static ���
#include<iostream>
using namespace std;

class CountryArea
{	// const�������(���)�� �ʱ�ȭ�� �̴ϼȶ������� ���ؾ���.
public:	// ������ const static���� ����Ǵ� �������(���)�� ����� ���ÿ� �ʱ�ȭ ����
	const static int RUSSIA		 = 1707510;
	const static int CANADA		 = 998467;
	const static int CHINA		 = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{	// ����� �����ϱ� ���� ��ü�� ������ �ʿ� ����.
	cout << "���þ� ����: " << CountryArea::RUSSIA << "��" << endl;
	cout << "ĳ���� ����: " << CountryArea::CANADA << "��" << endl;
	cout << "�߱� ����: " << CountryArea::CHINA << "��" << endl;
	cout << "�ѱ� ����: " << CountryArea::SOUTH_KOREA << "��" << endl;
	return 0;
}