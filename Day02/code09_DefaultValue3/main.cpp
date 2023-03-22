// 부분적 디폴트 값 설정
// 매개변수 일부분만 디폴트 값을 지정하려면,
// 오른쪽 매개변수의 디폴트 값으 채우는 형태로 정의.

#include <iostream>
int BoxVolume(int length, int width=1, int height=1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl; // 에러
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}