// main 실행시키기
#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달 인자개수: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return 0;
}

/*cmd 콘솔에 파일경로 
 실행파일명 1 2 3 4 "Hello world! 입력*/