#include "../include/std_lib_facilities.h"
int main()
{
        constexpr double rub_dollar = 73.06, uan_dollar = 6.44, gri_dollar = 27.27, eur_dollar = 0.84, fun_dollar = 0.72;
        cout << "Введите сумму и валюту(r(рубли)/u(юань)/g(гривна)/e(евро)/f(фунт стерлингов)):\n";
        int sum = 0;
        char currency;
        cin >> sum >> currency;
	switch (currency)
	{
	case 'r':
		cout << sum / rub_dollar << " $\n";
		break;
	case 'u':
		cout << sum / uan_dollar << " $\n";
		break;
	case 'g':
		cout << sum / gri_dollar << " $\n";
		break;
	case 'e':
		cout << sum / eur_dollar << " $\n";
		break;
	case 'f':
		cout << sum / fun_dollar << " $\n";
		break;
	default:
			cout << "error\n";
		break;



	}
}
