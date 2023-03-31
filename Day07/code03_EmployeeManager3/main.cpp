#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Employee {
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
};
class PermanentWorker : public Employee
{
private:
	int salary;	//월 급여
public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class TemporaryWorker : public Employee
{
private:
	int workTime;	//이 달에 일한 시간의 합계
	int payPerHour; //시간당 급여

public:
	TemporaryWorker(const char* name, int pay)
		:Employee(name),workTime(0), payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const	// 이 달의 급여
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class SalesWorker : public PermanentWorker
{
private:
	int salesResult;	// 월 판매실적
	double bonusRtio;	// 상여금 비율
public:
	SalesWorker(const char * name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRtio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const	// 오버라이딩 
	{	// 부모클래스의 멤버함수는 가려지고 자식클래스의 멤버함수로 재정의됨
		return PermanentWorker::GetPay()
			+ (int)(salesResult * bonusRtio);
	}	  
	void ShowSalaryInfo() const	// 오버라이딩
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}   
};
class EmployeeHandlar
{
private:
	Employee* empList[50];	// 포인트 배열 선언 = 객체의 주소 값 50개 저장할 수 있는 배열
	int empNum;
public:
	EmployeeHandlar() : empNum(0)
	{}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
	/*
		for(int i=0; i<empNum; i++)
			empList[i]->ShowSalaryInfo();
	*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for(int i=0; i<empNum; i++)
		empList[i]->GetPay();
		*/
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandlar()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{	
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandlar handler;
	
	//정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);	// 5시간 일한 결과 등록
	handler.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	//이번달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}




/*배열포인터, 포인터배열*/
/*
* 1. 배열포인터: 포인터인데 배열을 가리키는 포인터	// 포인터 하나임
* 2. 포인터배열: 포인터로 이루어진 배열	// 포인터 여러개로 이루어진 배열
* 
* 1. 포인터 배열
* int n1 = 10, n2 = 20, n3 = 30;
* int* ary[3] = {&n1, &n2, &n3};	// 포인터배열
* 
* 2. 배열 포인터
* int* pa = &a;	// 포인터
* 
* int ary[3] = {1, 2, 3};	// 1차원 배열
* int (* pary) = ary;	// 1차원 배열을 가리키는 배열포인터 // 주소 = 배열 이름
* 
* int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};	// 2차원 배열
* int (*parr)[3] = arr;	// 2차원 배열을 가리키는 배열포인터
*/