#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include "StringClass.h"

String::String()
{
	len = 0;
	str = NULL;
}

String::String(const char* s)
{
	len = strlen(s)+1;
	str = new char[len];
	strcpy(str, s);
}
String::String(const String& s)
{
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String()
{
	if (str != NULL)
		delete[]str;
}

String& String::operator = (const String& s)
{
	if (str != NULL)
		delete[]str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+= (const String& s)
{
	len += (s.len - 1);
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
		delete[]str;
	str = tempstr;
	return *this;
}

bool String::operator== (const String& s)
{	// strcpm: 문자열 비교
	return strcmp(str, s.str) ? false : true;
}

String String::operator+ (const String& s)
{
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);	//String temp=tempstr;
	delete[]tempstr;
	return temp;
}
ostream& operator<< (ostream& os, const String& s)
{	// String 클래스의 멤버 함수가 아니지만,
	// String 클래스의 프랜드 함수로 선언됐지 때문에
	// -> String 클래스이 private 멤버변수 len, str에 접근 가능
	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);
	return is;
}
