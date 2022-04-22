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
	if(c <= -273.15)
		{
			cout << "Температура не может быть ниже 0K\n";
		}
	else if (c > -273.15)
		{
			double k = ctok(c);
			cout << k << '\n';
		}
	else
		{
			cout << "ERROR\n";
		}

	return 0;
}
