// ��ü �迭
# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
using namespace std;

class Human {
private:
	// char name[20];
	char* name;
	int id;
	int age;
public:
	Human(const char* aname, int aid, int aage)
	{
		name = new char[strlen(aname) + 1];	// �޸� �����Ҵ�, null ���� �߰�
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human()
	{
		delete [] name;
	}
	//void setDate(const char aname[20], int aid, int aage) {
	//	//name="ȫ�浿";
	//	strcpy(name, aname);
	//	id = aid;
	//	age = aage;
	//}
	void getDate()
	{
		cout << "�̸�: " << name <<" " << "�ֹ�: " << id <<" " << "����: " << age << endl;
	}
};

int main()
{
	//Human h;
	//h.setDate("ȫ�浿", 203933, 30);
	Human h("ȫ�浿", 203933, 30);
	h.getDate();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3,25), Human("�ƹ���", 4, 35) };
	hary[0].getDate();
	hary[1].getDate();
	hary[2].getDate();

	return 0;
}