// 클래스 템플릿
#include<iostream>
using namespace std;

template<typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);	// 디폴트 값음 함수 선언에서만
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{ }

template <typename T>
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');	// 좌표정보를 문자로 표시하는 상황의 표현
	pos3.ShowPosition();

	Point<int> pos4;
	pos4.ShowPosition();

	return 0;
}