// ��� �̴ϼȶ������� �̿��� ���� �� const ���(����) �ʱ�ȭ
// ������

#include<iostream>
using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;	// ��� ����
	int numofApples;	// �Ȱ� ���� ��� ����
	int myMoney;		// �Ǹ��� �� ��

public:
	FruitSeller(int price, int num, int money): APPLE_PRICE(price), numofApples(num), myMoney(money)
	{

	}
	int SaleApples(int money)	// money : �����ڰ� ������ ��
	{
		int num = money / APPLE_PRICE;	// �� ��� ����
		numofApples -= num;				// �Ȱ� ���� ��� ����
		myMoney += money;				// ���� �� + �Ȱ� ���� ��
		return num;		// �� ��� ���� ����
	}
	void ShowSalesResult() const
	{
		cout << "���� ���: " << numofApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
private:
	int myMoney;	// private:	// ������ ��
	int numofApples;	//private:	// ������ ��� ����

public:
	FruitBuyer(int money) : myMoney(money), numofApples(0)
	{
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numofApples += seller.SaleApples(money);	// ���Ϲ��� ������ ���(�� ���)���� ����.
		myMoney -= money;	// ���� �ܾ�
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numofApples << endl << endl;	// ������ ���
	}
};

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);	// (seller, �����ڰ� ������ ��)

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}