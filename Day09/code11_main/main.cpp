// main �����Ű��
#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("���� ���ڰ���: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}

	return 0;
}

/*cmd �ֿܼ� ���ϰ�� 
 �������ϸ� 1 2 3 4 "Hello world! �Է�*/