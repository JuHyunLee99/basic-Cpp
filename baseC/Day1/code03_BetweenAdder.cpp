// ������ ������ �Է� std::cin >> val1 >> val2

#include <iostream>

int main()
{
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� �����Է�: ";
	std::cin >> val1 >> val2;	// 3 7

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;	// 4 + 5 + 6
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += 1;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}