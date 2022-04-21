//ex2p214
#include "../include/std_lib_facilities.h"

double ctok(double c)
{
	double kelvin = c + 273.15;
	return kelvin;
}

int main()
{
	double c = 0.0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';

	return 0;
}
