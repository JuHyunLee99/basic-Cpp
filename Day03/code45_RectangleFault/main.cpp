// 정보은닉
#include<iostream>
using namespace std;

class Point
{
public:
	int x;	// x좌표의 범위는 0이상 100 이하
	int y;	// y좌표의 범위는 0이상 100 이하
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;
public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ",";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ",";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{	
	Point pos1 = { -2, 4 };	// 문제점1: 0이상 100이하가 아님
	Point pos2 = { 5, 9};
	Rectangle rec = { pos2, pos1 };	// 문제점2: 좌상단 죄표값이 우 하단 좌표값보다 크다. 
	rec.ShowRecInfo();
	return 0;
}