#define _CRT_SECURE_NO_WARNINGS
#include "Calculator.h"
using namespace std;
#include <vector>
#include<string>

int main()
{
	string input;
	Calculator c;
	vector<string> tokens;
	string token = "";
	double a, b, result;
	char oper;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl;

	while (true)
	{
		cout << "input >> ";
		cin >> input;	// 입력받기

		// 연산자를 기준으로 숫자 구분해서 벡터에 넣기
		for (char i : input) 
		{
			if (isdigit(i))	// 숫자라면
				token += i;	// 13이면 처음 1넣고 그다음 3해서 13저장
			else			// 연산자이면 숫자끝
			{
				tokens.push_back(token);		// 숫자 문자열을 벡터에 추가
				token = "";						// token 초기화
				tokens.push_back(string(1, i));	//'연산자 char-> string해서 벡터에 추가
			}
		}	
		tokens.push_back(token);	// 마지막도 추가
		token = "";		// token 초기화
		a = stod(tokens[0]);
		oper = tokens[1][0];;
		b = stod(tokens[2]);
		tokens.clear();		// 벡터 tokens 초기화
		

		try      //예외처리
		{			
			result = c.Calculate(a, oper, b);	// 계산
			cout << "= " << result << endl;	// 결과 출력
		}
		catch (string& s)
		{
			cout << s << endl;	// 예외일때 출력
		}
	}
	return 0;
}
