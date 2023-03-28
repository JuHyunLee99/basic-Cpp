// static ������� (Ŭ���� ����)
#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;	// ��ü���� simObjCnt ����x / static �������, Ŭ���� ���� 
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

int SoSimple::simObjCnt = 0;	// static ������� �ʱ�ȭ
// ������ ������ �ʱ�ȭ�ϸ� �ȵ�.

class SoComplex
{
private:
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1; // ��� SoSimple ��ü�� simObjCnt�� ����.
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}