// �Ҵ�����, ���� �����ڸ� ���� �ʱ�ȭ
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class SoSimple
{
private:
	int num;	
public:
	SoSimple(int n) : num(n)		// obj ��ü ����, �ʱ�ȭ // num ����, �ʱ�ȭ
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)	// ob ��ü ����, obj ��ü�� �ʱ�ȭ
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)	// ���� ������ ȣ��
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);	// ������ ȣ��
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;

}