#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите целое число:\n";
	int num;
	cin >> num;
	if(num % 2 == 0)
		cout << "Число " << num << " является четным\n";
	else if(num % 2 != 0)
		cout << "Число " << num << " является нечетным\n";
	else
		cout << "Error\n";
}
