#include "../include/std_lib_facilities.h"

int main()
{
	double len;
	vector <double> sm_vec;
	vector <double> m_vec;
	vector <double> in_vec;
	vector <double> ft_vec;
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
			cout << len << unit << " == " << len/100.0 << "m == " << len/2.54 << "in == " << len/2.54/12 << "ft\n";
			sum+=(len/100.0);
			sm_vec.push_back(len); //?
		}


		else if(unit == "m")
		{
			cout << len << unit << " == " << len*100.0 << "sm == " << len*100/2.54 << "in == " << len*100/2.54/12 << "ft\n";
			sum+=len;
			m_vec.push_back(len); //?
		}
		


		else if(unit == "in")
		{
			cout << len << unit << " == " << len*2.54 << "sm == "<< len*2.54/100 << "m == " << len/12.0 << "ft\n";
			sum+=(len/12.0);
			in_vec.push_back(len); //?
		}



		else if(unit == "ft")
		{
			cout << len << unit << " == " << len*12.0 << "in == " <<len*12*2.54 << "sm == " << len*12*2.54/100 << "m\n";
			sum+=(len*12*2.54/100);
			ft_vec.push_back(len); //?
		}
	

		else
			cout << "Error\n";

		cout << "\nsum == " << sum << "m " << sum_of_elements << " elements \n";
	
		//cout << len << unit << "\n";
	}

}
