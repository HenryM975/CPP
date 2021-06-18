#include "../include/std_lib_facilities.h"
int main()
{
	int current;
	int mass[20];
	int i = 0;
	while (cin >> current && current != 0)
	{
		mass[i] = current;
		i++;
	}
	cout << "------------------------\n";
	int j = 0;
	int coin_1 = 5, coin1_sum = 0;
	
	while(i != j)
	{
		cout << mass[j] << "\n";
		if(mass[j] == coin_1)
			coin1_sum++;
		j++;
		
	}
	cout << "------------------------\n";
	cout << "coin1_sum == " << coin1_sum << "\n";
	/*
	int k  = 0;
	int part = 0;
	while(k != i)
	{
		part = mass[k];
		int l = 0;
		int part_frequency = 0;
		int no_repeat_list[20]; //исключить повторение в корневом цикле + установить выбор числа монет для определения размера массива на старте
		while(l != i)
		{
			if(part == mass[l])
				part_frequency++

				
			l++;
		}
		cout << mass[k] << " - " << part_frequency << "\n";
		k++
	}*/
	
}
