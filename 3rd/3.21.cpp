#include "../include/std_lib_facilities.h"

int main()
{
	unsigned long long int limit = 0;
	cout << "Введите предельное значение\n";
	cin >> limit;


	unsigned long long int  num = 1;  //int
	int i = 0;
	vector <unsigned long long int> vec;
	for(; i < 64; ++i)
	{
		num *= 2;
		/*if(num >= limit)
			cout << "Limit!\n";*/
		vec.push_back(num);
		cout << i << " - " <<  num <<"\n";
		for(int j = 0; j < i; j++)
			cout << vec[j] << " ";
		cout << "\n\n";
	}
}
