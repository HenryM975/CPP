#include "../include/std_lib_facilities.h"
//решето эратосфена
int main()
{
int limit;
vector <int> values;
cout << "Введите крайнее значение:\n";
cin >> limit;
for(int i = 0; i < limit + 1; i++)
	{
		values.push_back(i);
	}

for(int p = 2; p < limit + 1; p++)
	{
		if (values[p] != 0)
		{
			cout << values[p] << " ";
			for(int j = p * p; j < limit + 1; j += p)
				values[j] = 0;
		}
	}


}	
