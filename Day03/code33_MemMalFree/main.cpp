// malloc & free
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>	// c언어의 헤더파일 추가도 가능
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{	// 문자열 저장을 위한 배열을 힙 영역에 할당
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);	// 힙에 할당된 메모리 공간으 소멸
	return 0;
}