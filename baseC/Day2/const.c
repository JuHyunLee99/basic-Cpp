#include <stdio.h>	// c소스의 헤더파일


int main()
{
	//int num = 10;
	//printf("num: %d\n", num);
	//num = 20;
	//printf("num: %d\n", num);


	const int num = 20;	// 상수화동시에 초기화
	printf("num: %d\n", num);
	//num = 20; // 값 변경 불가능

	int* p = &num;	// 주소를 저장할수 있는 포인터변수, &(주소연산자)
	printf("p에 저장된 값: %p", p);
	printf("p가 참조하는 값: %d\n", *p); // *p = 20

	return 0;
}