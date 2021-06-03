#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите мили:\n";
	double miles;
	cin >> miles;
	double kilo;
	kilo = miles * 1.609;
	cout << miles << " миль == " << kilo << " км ";
}
