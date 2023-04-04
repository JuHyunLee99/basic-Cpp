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
		cin >> input;	// �Է¹ޱ�

		// �����ڸ� �������� ���� �����ؼ� ���Ϳ� �ֱ�
		for (char i : input) 
		{
			if (isdigit(i))	// ���ڶ��
				token += i;	// 13�̸� ó�� 1�ְ� �״��� 3�ؼ� 13����
			else			// �������̸� ���ڳ�
			{
				tokens.push_back(token);		// ���� ���ڿ��� ���Ϳ� �߰�
				token = "";						// token �ʱ�ȭ
				tokens.push_back(string(1, i));	//'������ char-> string�ؼ� ���Ϳ� �߰�
			}
		}	
		tokens.push_back(token);	// �������� �߰�
		token = "";		// token �ʱ�ȭ
		a = stod(tokens[0]);
		oper = tokens[1][0];;
		b = stod(tokens[2]);
		tokens.clear();		// ���� tokens �ʱ�ȭ
		

		try      //����ó��
		{			
			result = c.Calculate(a, oper, b);	// ���
			cout << "= " << result << endl;	// ��� ���
		}
		catch (string& s)
		{
			cout << s << endl;	// �����϶� ���
		}
	}
	return 0;
}
