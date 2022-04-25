//ex6p214
//draft
//celsius to fahrenheit
#include "../include/std_lib_facilities.h"

double ctof(double c)
{
	double fahrenheit = ((9/5)*c)+32 ;
	if (c >= -273.15)
                {
        		return fahrenheit;
                }
        else
                {
                        fahrenheit = -1.0;
			return fahrenheit;
                }


}

double ftoc(double f)
{
	double cels = (((f-32)*5)/9);
	return cels;
}

int main()
{
	double celsius = 0.0;
	cin >> celsius;
	double f  = ctof(celsius);
	double c = ftoc(f);
	cout << f << ":" << c << '\n';

	return 0;
}
