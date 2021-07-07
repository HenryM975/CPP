#include "../include/std_lib_facilities.h"

int main()
{
	double len;
	vector <double> sm_vec;
	vector <double> m_vec;
	vector <double> in_vec;
	vector <double> ft_vec;
	vector <double> full_vec_m;
	double sum = 0;
	int sum_of_elements = 0;
	string unit;
	cout << "Введите длинну и единичу измерения (sm/m/in/ft)\n";
	while(cin >> len)
	{
		cin >> unit;
		++sum_of_elements;
		if(unit == "sm")
		{
			double len_in_m = len/100.0;
			cout << len << unit << " == " << len_in_m << "m == " << len/2.54 << "in == " << len/2.54/12 << "ft\n";
			sum += len_in_m;
			full_vec_m.push_back(len_in_m);
			sm_vec.push_back(len); //?
		}


		else if(unit == "m")
		{
			cout << len << unit << " == " << len*100.0 << "sm == " << len*100/2.54 << "in == " << len*100/2.54/12 << "ft\n";
			sum+=len;
			full_vec_m.push_back(len);
			m_vec.push_back(len); //?
		}
		


		else if(unit == "in")
		{
			double len_in_m = len*2.54/100;
			cout << len << unit << " == " << len*2.54 << "sm == "<< len_in_m << "m == " << len/12.0 << "ft\n";
			sum+=len_in_m;
			full_vec_m.push_back(len_in_m);
			in_vec.push_back(len); //?
		}



		else if(unit == "ft")
		{
			double len_in_m = len*12*2.54/100;
			cout << len << unit << " == " << len*12.0 << "in == " <<len*12*2.54 << "sm == " << len_in_m << "m\n";
			sum+=len_in_m;
			full_vec_m.push_back(len_in_m);
			ft_vec.push_back(len); //?
		}
	

		else
			cout << "Error\n";


		double buf = 0;
		for(int i = 0; i < sum_of_elements; ++i)
		{
			for(int j = 0; j < sum_of_elements - 1; ++j)
			{
				if(full_vec_m[j] > full_vec_m[j+1])
				{
					buf = full_vec_m[j+1];
					full_vec_m[j+1] = full_vec_m[j];
					full_vec_m[j] = buf;
								
				}
			}
		}

		cout << "sum == " << sum << "m " << sum_of_elements << " elements max == " << full_vec_m[sum_of_elements - 1] <<  "m  min == " << full_vec_m[0] << "m\n";
	
		//cout << len << unit << "\n";
	}

}
