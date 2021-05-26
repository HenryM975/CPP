#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите имя и возраст, после чего нажмите 'enter'\n";
	string name;
	double age;
	cin >> name >> age;
	age *= 12;
	cout << name << " " << age << "\n";
}
