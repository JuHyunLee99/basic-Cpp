#include<iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};
int main(void)
{
	Person* ptr1 = new Student();			// super -> sub
	Person* ptr2 = new PartTimeStudent();	// super -> sub
	Student* ptr3 = new PartTimeStudent();	// super -> sub
	ptr1->Sleep();
	//prt1->Study();	// ºÒ°¡´É
	ptr2->Sleep();
	ptr3->Sleep();
	ptr3->Study();

	PartTimeStudent* ptr = new PartTimeStudent();
	ptr->Sleep();
	ptr->Study();
	ptr->Work();

	delete ptr1; delete ptr2; delete ptr3; delete ptr;

	return 0;
}