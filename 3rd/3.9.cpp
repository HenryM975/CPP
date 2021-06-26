#include "../include/std_lib_facilities.h"
int main()
{
	int num = 12345;
	int mass[10];
	vector <int> mass_main;
	for(int i = 0; i < 1000; ++i)
	{
		cout << mass[i] << "|";	
		mass_main.push_back(mass[i]);
	}
	cout << "\n----------------------------------------------\n";
	for(int i = 0; i > -1000; --i)
	{
		cout << mass[i] << "|";
		mass_main.push_back(mass[i]);
	}
	cout << "\n----------------------------------------------\n";
	sort(mass_main);
	for(int i = 0; i < mass_main.size(); i++)
		cout << mass_main[i] << "|";
	cout << "\n";
	
}

