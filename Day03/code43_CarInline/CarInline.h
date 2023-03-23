#ifndef __CAR_H__	// 헤더파일의 중복포함 문제를 해결하기 위한 매크로 선언
#define __CAR_H__

#include <iostream>
using namespace std;

namespace CAR_CONST
{	// enum의 선언을 구조체 내부에 삽입하는 것이 부담스럽다면, 이름공간을 이용
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car	// 클래스 정의
{
private:	// 접근제어 지시자
	char gamerID[CAR_CONST::ID_LEN];	// 소유자 ID
	int fuelGauge;						// 연료량
	int curSpeed;						// 현재속도
public:		//접근제어 지시자
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도증가
	void Break();			// 브레이크, 속도감소
};

inline void Car::ShowCarState()	// 함수 정의
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

inline void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

#endif
