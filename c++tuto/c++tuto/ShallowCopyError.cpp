#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
	Person(const char * myname, int myage) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo()const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}

private:
	char * name;
	int age;
};

int main() {
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}