#include <stdio.h>	// c�ҽ��� �������


int main()
{
	//int num = 10;
	//printf("num: %d\n", num);
	//num = 20;
	//printf("num: %d\n", num);


	const int num = 20;	// ���ȭ���ÿ� �ʱ�ȭ
	printf("num: %d\n", num);
	//num = 20; // �� ���� �Ұ���

	int* p = &num;	// �ּҸ� �����Ҽ� �ִ� �����ͺ���, &(�ּҿ�����)
	printf("p�� ����� ��: %p", p);
	printf("p�� �����ϴ� ��: %d\n", *p); // *p = 20

	return 0;
}