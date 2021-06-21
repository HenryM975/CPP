#include "../include/std_lib_facilities.h"
int main()
{
	constexpr double rub_dollar = 73.06, uan_dollar = 6.44, gri_dollar = 27.27;
	cout << "Введите сумму и валюту(r(рубли)/u(юань)/g(гривна)):\n";
	int sum = 0;
	char currency;
	cin >> sum >> currency;
	if(currency == 'r')
		cout << sum/rub_dollar << " $\n";
	else if(currency == 'u')
		cout << sum/uan_dollar << " $\n";
	else if(currency == 'g')
		cout << sum/gri_dollar << " $\n";
	else
		cout << "error\n";
	
}
