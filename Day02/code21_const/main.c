#include <stdio.h>	// c�ҽ��� �������


int main()
{
	const int num = 10;	// ���ȭ���ÿ� �ʱ�ȭ
	printf("num: %d\n", num);
	//num = 20; // �� ���� �Ұ���
	
	int val1 = 20;
	int val2 = 30;
	int val3 = 40;

	// �ּҸ� �����Ҽ� �ִ� �����ͺ���, &(�ּҿ�����)
	const int* p1 = &val1;
	printf("p�� ����� ��: %p\n", p1);
	// ������ p1�� �̿��Ͽ� val1�� ���� ������ �� ����.

	int* const p2 = &val2;
	printf("p�� �����ϴ� ��: %d\n", *p2); // *p = 30
	// ������ p2�� ���ȭ

	const int* const p3 = &val3;
	// ������ p3�� ���ȭ �Ǿ�����, p3�� �̿��Ͽ� val3�� ���� ������ �� ����.
	return 0;
}