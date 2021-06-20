#include "../include/std_lib_facilities.h"
int main()
{
	int current;
	cout << "Введите число обрабатываемых значений:\n";
	int mass_len;
	cin >> mass_len;
	int mass[mass_len];
	int i = 0;
	cout << "Введите значения через enter:\n";
	while (current != 0 && i <  mass_len)
	{
		cin >> current;
		mass[i] = current;
		i++;
	}
	cout << "------------------------\n";
	int real_len = 0, temporary_part = 0, temporary_part2 = 0, p = 0;
	while(p != i)
	{
		temporary_part = mass[p];
		if(temporary_part != temporary_part2)
			real_len++;
		temporary_part2 = temporary_part;
		p++;	


	}
	cout << "\n real_len == " << real_len << "\n\n"; 


	int k  = 0;
	int part = 0;
	int no_repeat_list[real_len];
	while(k != real_len)
	{	
		part = mass[k];
		for(int m = 0; m < mass_len; m++)
		{
			if(part == no_repeat_list[m])
                                {
					k++;
					m = mass_len;

				}

		}
		int l = 0;
		int part_frequency = 0;
		while(l != i)
		{
			if(part == mass[l])
				part_frequency++;

				
			l++;
		}
		cout << part  << " - " << part_frequency << "\n";
		no_repeat_list[k] = part;
		k++;
	}
	
}
