#include <iostream>

// 2번재 함수로 구현
void swap(int n1, int n2)
{
	n1 = n2;
	n2 = n1;
	printf("n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;
	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);

	swap(n1, n2);
	return 0;
}