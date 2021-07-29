#include "../include/std_lib_facilities.h"
//решето эратосфена
int main()
{
int limit;
vector <int> values;
cout << "Введите крайнее значение:\n";
cin >> limit;
for(int i = 0; i < limit; ++i)
{
	values.push_back(i);
	cout << i << " ";
}
//vec.erase(vec.begin() + 1)
cout << "\n -------------------------------- \n";
int del_sum = 0;
for(int i = 1; i < limit; i++)
{
	if(i % 2 == 0)
	{
		values.erase(values.begin() + i);
		++del_sum;
	}
	else
	{
		cout << "*\n";
	}
}
//cout << " - " << values.cbegin() << " - ";
//values.erase(values.cbegin()); ?????????????
for(int i = 0; i < limit - del_sum; ++i)
{
	cout << values[i];
}
}
	
