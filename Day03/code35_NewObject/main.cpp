#include<iostream>
#include<stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simiple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;	// new 연산자를 이용하여 힙영역에 변수를 할당

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);	// malloc 함수호출을 통해 힙 영역에 변수 할당

	cout << endl << "end of main" << endl;
	delete sp1;	// 할당방법에 따른 소멸 진행
	free(sp2);
	return 0;
}