// malloc & free
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>	// c����� ������� �߰��� ����
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{	// ���ڿ� ������ ���� �迭�� �� ������ �Ҵ�
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);	// ���� �Ҵ�� �޸� ������ �Ҹ�
	return 0;
}