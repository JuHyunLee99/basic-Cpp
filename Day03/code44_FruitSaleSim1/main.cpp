// 클래스 기반의 두 가지 객체생성
// 사과장수

#include<iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;	// 사과 가격
	int numofApples;	// 팔고 남은 사과 갯수
	int myMoney;		// 판매자 번 돈

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}
	int SaleApples(int money)	// money : 구매자가 지불한 돈
	{
		int num = money / APPLE_PRICE;	// 판 사과 갯수
		numofApples -= num;				// 팔고 남은 사과 갯수
		myMoney += money;				// 기존 돈 + 팔고 받은 돈
		return num;		// 판 사과 갯수 리턴
	}
	void ShowSalesResult()
	{
		cout << "남은 사과: " << numofApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;	// private:	// 구매자 돈
	int numofApples;	//private:	// 구매자 사과 갯수

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numofApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numofApples += seller.SaleApples(money);	// 리턴받은 구매한 사과(판 사과)갯수 더함.
		myMoney -= money;	// 현재 잔액
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numofApples << endl << endl;	// 구매한 사과
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0); // (사과가격, 사과수, 판매한 돈) 
	FruitBuyer buyer;
	buyer.InitMembers(5000);	// (구매자 돈)
	buyer.BuyApples(seller, 2000);	// (seller, 구매자가 지불한 돈)

	cout << "과일 판매자의 현황"<< endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}