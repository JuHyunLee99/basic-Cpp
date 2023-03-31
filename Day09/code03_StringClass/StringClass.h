#ifndef __StringClass_H__
#define __StringClass_H__

#include<iostream>
using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String();
	String(const char* s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);
	// String 클래스의 프랜드 함수로 선언
	// -> String 클래스이 private 멤버변수 len, str에 접근 가능
	// -> String 클래스의 객체를 인자로 전달 받아 사용할 수 있음.
	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>>(istream& is, String& s);
};

#endif // !__StringClass_H__

