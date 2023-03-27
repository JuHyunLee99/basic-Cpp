// °´Ã¼ ¹è¿­
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
		name = new char[strlen(aname) + 1];	// ¸Þ¸ð¸® µ¿ÀûÇÒ´ç, null °ø°£ Ãß°¡
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human()
	{
		delete [] name;
	}
	//void setDate(const char aname[20], int aid, int aage) {
	//	//name="È«±æµ¿";
	//	strcpy(name, aname);
	//	id = aid;
	//	age = aage;
	//}
	void getDate()
	{
		cout << "ÀÌ¸§: " << name <<" " << "ÁÖ¹ø: " << id <<" " << "³ªÀÌ: " << age << endl;
	}
};

int main()
{
	//Human h;
	//h.setDate("È«±æµ¿", 203933, 30);
	Human h("È«±æµ¿", 203933, 30);
	h.getDate();

	Human hary[3] = { Human("±è¿µÈñ", 2, 23), Human("±èÃ¶¼ö", 3,25), Human("¾Æ¹«°³", 4, 35) };
	hary[0].getDate();
	hary[1].getDate();
	hary[2].getDate();

	return 0;
}