#include "../include/std_lib_facilities.h"
int main()
{
	int current;
	int mass[20];
	int i = 0;
	while (cin >> current)
	{
		mass[i] = current;
	}
	for(int j = 0; j != i; j++)
	{
		cout << mass[j] << "\n";
	}
}
