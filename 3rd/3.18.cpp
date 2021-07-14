#include "../include/std_lib_facilities.h"

int main()
{
	double num1, num2;
	char operation;
	cout << "Введите 2 числа и операцию (+-*/)\n";

	while(cin >> num1 >>  num2 >> operation)
	{
		if(operation == '+')
			cout << "Сумма " << num1 << " и " << num2 << " равна " << num1 + num2 << "\n";
		else if(operation == '-')
			cout << "Разность " << num1 << " и " << num2 << " равна " << num1 - num2 << "\n";
		else if(operation == '*')
			cout << "Произведение " << num1 << " и " << num2 << " равно " << num1 * num2 << "\n";
		else if(operation == '/')
			cout << "Частное " << num1 << " и " << num2 << " равно " << num1 / num2 << "\n";
		else 
			cout << "Error\n";
	}
}
