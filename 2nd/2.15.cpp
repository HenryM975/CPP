#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите операцию и 2 числа:\n";
	int  num_1, num_2;
	string operation;
	cin >>  operation >> num_1 >>  num_2;
	if(operation == "-")
		cout << num_1 - num_2;
	else if(operation == "+")
		cout << num_1 + num_2;
	else if(operation == "*")
		cout << num_1 * num_2;
	else if(operation == "/")
		cout << num_1 / num_2;
	else if(operation== "%")
		cout << num_1 % num_2;
	else
		cout << "error";
	cout << "\n";
			 



		
		
}
