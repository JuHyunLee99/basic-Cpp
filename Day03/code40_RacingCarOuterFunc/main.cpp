/* 함수는 구조체 외부로 뺄수 있음.
: 구조체 내에 정의된 함수가 많거나 길어질경우*/
// 구조체 안에 함수가 정의된경우 함수를 인라인으로 처리
// 밖으로 빼내면 인라인X -> 인라인을 원하면 키워드 inline을 이용.
#include <iostream>
using namespace std;

namespace CAR_CONST
{	// enum의 선언을 구조체 내부에 삽입하는 것이 부담스럽다면, 이름공간을 이용
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];	// 소유자 ID
	int fuelGauge;						// 연료량
	int curSpeed;						// 현재속도

	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도증가
	void Break();			// 브레이크, 속도감소
};

// inline void Car::ShowCarState()
void Car::ShowCarState()	// 함수 정의
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

// inline void Car::Accel()
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

// inline void Car::Break()
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}