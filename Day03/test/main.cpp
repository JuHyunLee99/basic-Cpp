#include <iostream>
using namespace std;

int main(void)
{
	int num1[] = { 1, 2, 3, 4 };
	int* num2 = num1;
	printf("%p\n", num2);
	printf("%d", *num2);

}