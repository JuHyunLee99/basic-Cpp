// 복사 생성자
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
	int num;
	char* name;
public:
	Myclass(int n, const char * name) : num(n)	
	{
		cout << "생성자 호출" << endl;
		this -> name = new char[strlen(name) + 1];
		strcpy(this->name, name);

	}
	explicit Myclass(const Myclass& copy)	// 매개변수는 객체 참조형태 // const로 변경을 막는게 좋다.
	{	// explicit를 사용하여 묵시적 호출방식을 막을 수 있다.
		cout << "복사생성자 호출" << endl;
		this -> num = copy.num;
		//this->name = copy.name;	// 얕은 복사
		this->name = new char[strlen(copy.name) + 1];	// 깊은 복사
		strcpy(this->name, copy.name);
	}
	void getData()
	{
		cout << num << endl;
		cout << name << endl;
	}
	~Myclass()
	{	
		cout << "메모리 해제" << endl;
		delete[] this->name;
	}
};

int main()
{
	Myclass m1(1, "홍길동");		//생성자 호출
	//Myclass m2 = m1;	// 복사생성자 호출. int num2 = num1
	//explicit를 사용하여 묵시적 호출방식을 막을 수 있다.
	Myclass m3(m1);		// 복사생성자 호출

	m1.getData();
	//m2.getData();
	m3.getData();

	return 0;	// 에러 발생 : 얕은 복사
}