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
	// String Ŭ������ ������ �Լ��� ����
	// -> String Ŭ������ private ������� len, str�� ���� ����
	// -> String Ŭ������ ��ü�� ���ڷ� ���� �޾� ����� �� ����.
	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>>(istream& is, String& s);
};

#endif // !__StringClass_H__

