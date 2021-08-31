#include "../include/std_lib_facilities.h"

int main()
{
	double a, b, c;
	cout << "ax^2 + b + c = 0\na = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;
	cout << "\nc = ";
	cin >> c;
	int val = (- c - b)/a;
		if(val > 0)
			cout << "x = +/-" << sqrt(val);
		else
			cout << "Нет корня\n";


}
