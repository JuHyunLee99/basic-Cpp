#include "Calculator.h"
using namespace std;

int main()
{
	double x, y, result;
	char oper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout<<"Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl;

	Calculator c;

	while (true)
	{
		cout << "input >> ";
		cin >> x >> oper >> y;	// �Է¹ޱ�
		try      //����ó��
		{
			result = c.Calculate(x, oper, y);
			cout << "= " << result << endl;	// ��� ���
		}
		catch (string& s)
		{
			cout << s << endl;	// �����϶� ���
		}
	}
	return 0;
}
