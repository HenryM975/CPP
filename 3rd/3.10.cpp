#include "../include/std_lib_facilities.h"
int main()
{
	double data1, data2;
	while(cin >> data1 && data1 != '|')
	{
		cin >> data2;
		cout << data1 << "\t" << data2 << "\n";
		if(data1 != data2 &&(data1 - data2 > 0.01 || data2 - data1 > 0.01))
			cout << "Наибольшее значение равно " << (data1 > data2 ? data1 : data2) << "\nНаименьшее значение равно " << (data1 < data2 ? data1 : data2) << "\n"; 
		else if(data1 == data2)
			cout << "Числа равны\n";
		else if(data1 - data2 < 0.01 || data2 - data1 < 0.01)
			cout << "Числа почти равны\n";
		else
			cout << "ERROR\n";
		
	}
}
