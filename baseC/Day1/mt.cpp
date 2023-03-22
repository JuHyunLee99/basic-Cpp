# include <stdio.h>

int g = 0;
void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;	// 지역변수
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("locak n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", ary);

	return 0;
}

/*
메모리영역은 크게 나누면
1. 코드세그먼트 2. 데이터세그먼트
동적데이터(스택,힙), 정적데이터
*/