#include "../include/std_lib_facilities.h"

int main()
{
	double len;
	string unit;
	cout << "Введите длинну и единичу измерения (sm/m/in/ft)\n";
	while(cin >> len)
	{
		cin >> unit;
		if(unit == "sm")
			cout << len << unit << " == " << len/100 << "m == " << len/2.54 << "in == " << len/2.54/12 << "ft\n";
		else if(unit == "m")
			cout << len << unit << " == " << len*100 << "sm == " << len*100/2.54 << "in == " << len*100/2.54/12 << "ft\n";
		else if(unit == "in")
			cout << len << unit << " == " << len*2.54 << "sm == "<< len*2.54/100 << "m == " << len/12 << "ft\n";
		else if(unit == "ft")
			cout << len << unit << " == " << len*12 << "in == " <<len*12*2.54 << "sm == " << len*12*2.54/100 << "m\n";

		else
			cout << "Error\n";
		cout << len << unit << "\n";
	}
}
