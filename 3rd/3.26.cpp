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
}
