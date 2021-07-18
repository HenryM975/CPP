#include "../include/std_lib_facilities.h"

int main()
{
	int answer;
	cout << "Выберите способ ввода чисел: буквенный (1), числовой(2)\n";
	cin >> answer;
	if(answer == 1)
	{
		vector<string> vec = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine", "ten"};
		string number1, number2;
		char oper;
		double number1_result, number2_result;
		cout << "Введите 2 числа в буквенном виде и операцию (+-*/)\n";
		while(cin >> number1 >> number2 >> oper)
		{
			int i = 0;
			for(;i < 11; ++i)
			{
				if(number1 == vec[i])
				{
					//...
				}
				if(number2 == vec[i])
				{
					//...
				}
			}	
		}
			

	}
	else if(answer == 2)
	{
	double num1, num2;
	char operation;
	cout << "Введите 2 числа и операцию (+-*/)\n";
	while(cin >> num1 >> num2 >> operation)
	{
		if(operation == '+')
			cout << num1 << " + " << num2 << " == " << num1 + num2 << "\n";
		else if(operation == '-')
			cout << num1 << " - " << num2 << " == " << num1 - num2 << "\n";
		else if(operation == '*')
			cout << num1 << " * " << num2 << " == " << num1 * num2 << "\n";
		else if(operation == '/')
			cout << num1 << " / " << num2 << " == " << num1 / num2 << "\n";
		else
			cout << "Error\n";
	}
	}
	else
		cout << "Error\n";
}
