#ifndef __CAR_H__	// ��������� �ߺ����� ������ �ذ��ϱ� ���� ��ũ�� ����
#define __CAR_H__

namespace CAR_CONST
{	// enum�� ������ ����ü ���ο� �����ϴ� ���� �δ㽺���ٸ�, �̸������� �̿�
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car	// Ŭ���� ����
{
private:	// �������� ������
	char gamerID[CAR_CONST::ID_LEN];	// ������ ID
	int fuelGauge;						// ���ᷮ
	int curSpeed;						// ����ӵ�
public:		//�������� ������
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();	// �������� ���
	void Accel();			// ����, �ӵ�����
	void Break();			// �극��ũ, �ӵ�����
};

#endif