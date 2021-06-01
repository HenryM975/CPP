#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите ваше имя:\n";
	string sender_name;
	cin >> sender_name;
	cout << "Введите имя получателя:\n";
	string recipient_name;
	cin >> recipient_name;
	cout << "Введите пол получателя(m/f):\n";
	char recipient_sex;
	cin >> recipient_sex;
	cout << "Введите возраст получателя:\n";
	int recipient_age;
	cin >> recipient_age;
	if(recipient_age > 0 && recipient_age < 110)
	{
		if(recipient_sex == 'm')
		{
	cout << "Дорогой " << recipient_name << "\n Это " << sender_name
		<< ", как дела?\n Тебе исполнилось " << recipient_age << "\n";
		}
		else
		{
		cout << "Дорогая " << recipient_name << "\n Это " << sender_name<< ", как дела?\n Тебе исполнилось " << recipient_age << "\n";
		}
	}
	else
	{
		cout << "Это шутка?\n";
	}
}
