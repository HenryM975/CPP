//ex2p214
//kelvin to celsius
#include "../include/std_lib_facilities.h"

double ctok(double k)
{
	double celsius = k - 273.15;
	if (k >= 0)
                {
        		return celsius;
                }
        else
                {
                        celsius = -1.0;
			return celsius;
                }


}

int main()
{
	double kelvin = 0.0;
	cin >> kelvin;
	double c  = ctok(kelvin);
	cout << c << '\n';

	return 0;
}
