#include "../include/std_lib_facilities.h"
//решето эратосфена
int main()
{
int limit;
vector <int> values;
vector <int> deletion;
vector <int> result;
cout << "Введите крайнее значение:\n";
cin >> limit;
for(int i = 0; i < limit; ++i)
{
	values.push_back(i);
	cout << i << " ";
}
	for(int i = 2; i < limit; ++i)
	{
		for(int j = 0; j < deletion.size(); ++j)
		{
			if(j == deletion.size())
			{
				values[i] //??????
			}

		}
	}
}
	
