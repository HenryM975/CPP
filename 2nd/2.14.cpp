#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите целое цисло от 0 до 4 в буквенном виде(in rus):\n ";
	string num;
	cin >> num;
	if(num == "нуль")
		cout << "0\n";
	else if(num == "один")
		cout << "1\n";
	else if(num == "два")
		cout << "2\n";
	else if(num == "три")
		cout << "3\n";
	else if(num == "четыре")
		cout << "4\n";
	else 
		cout << "error\n";
}//How we can do it better???
