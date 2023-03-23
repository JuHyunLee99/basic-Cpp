#include <stdio.h>	// c소스의 헤더파일


int main()
{
	const int num = 10;	// 상수화동시에 초기화
	printf("num: %d\n", num);
	//num = 20; // 값 변경 불가능
	
	int val1 = 20;
	int val2 = 30;
	int val3 = 40;

	// 주소를 저장할수 있는 포인터변수, &(주소연산자)
	const int* p1 = &val1;
	printf("p에 저장된 값: %p\n", p1);
	// 포인터 p1을 이용하여 val1의 값을 변경할 수 없음.

	int* const p2 = &val2;
	printf("p가 참조하는 값: %d\n", *p2); // *p = 30
	// 포인터 p2가 상수화

	const int* const p3 = &val3;
	// 포인터 p3가 상수화 되었으며, p3를 이용하여 val3의 값을 변경할 수 없음.
	return 0;
}