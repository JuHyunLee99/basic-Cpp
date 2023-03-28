// c���� static
#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt;	// �� �ѹ��� ����ȴ�.// �Լ����������� �Ҹ�X
	// ���������� ���������� �ʱ�ȭ���� ������ 0���� �ʱ�ȭ�ȴ�
	cnt++;
	cout << "static_current cnt: " << cnt << endl;
}
void Counter()
{
	int cnt = 0;
	cnt++;
	cout << "current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0;i < 10;i++)
	{
		static_Counter();
		Counter();
	}
	return 0;
}