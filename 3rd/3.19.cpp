#include "../include/std_lib_facilities.h"

int main()
{
	vector <string> vec = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
int num;
cout << "Введите значение от 0 до 10. Используйте 11 для выхода\n";
		while(cin >> num && num != 11)
			cout << vec[num] << "\n";
cout << "Введите значение от 1 до 10 в буквенном виде (zero ... ten)\n";
string number;
	while(cin >> number && number != "11")
	{
		int i = 0;
		for(; i < 11; i++)
				if(number == vec[i])
					cout << i << "\n";
	}

}
