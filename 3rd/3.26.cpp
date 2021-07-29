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
/*for(int i = 0; i < limit; ++i)
{
	if(i % 2 == 0)
		values.erase(values.begin());
}*/
values.erase(values.cbegin() + 1);
for(int i = 0; i < limit - 1; ++i)
{
	cout << values[i];
}
}
	
