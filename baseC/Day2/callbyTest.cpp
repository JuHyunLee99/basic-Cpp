#include <iostream>

// 2���� �Լ��� ����
void swap(int n1, int n2)
{
	n1 = n2;
	n2 = n1;
	printf("n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;
	printf("ȣ�� �� n1: %d \t n2: %d\n", n1, n2);

	swap(n1, n2);
	return 0;
}