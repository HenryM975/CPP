#include "../include/std_lib_facilities.h"
int main()
{
	char data1, data2;
	while(cin >> data1 && data1 != '|')
	{
		cin >> data2;
		cout << data1 << "\t" << data2 << "\n";
		cout << "Наибольшее значение равно " << (data1 > data2 ? data1 : data2) << "\nНаименьшее значение равно " << (data1 < data2 ? data1 : data2); 
	}
}
