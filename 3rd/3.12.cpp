#include "../include/std_lib_facilities.h"

int main()
{
	char len;
	vector <double> sm_vec;
	vector <double> m_vec;
	vector <double> in_vec;
	vector <double> ft_vec;
	string unit;
	cout << "Введите длинну и единичу измерения (sm/m/in/ft)\n";
	while(cin >> len && len != 'q')
	{
		cin >> unit;
		if(unit == "sm")
		{
			cout << len << unit << " == " << len/100.0 << "m == " << len/2.54 << "in == " << len/2.54/12 << "ft\n";
			sm_vec.push_back(len); //?
		}


		else if(unit == "m")
		{
			cout << len << unit << " == " << len*100.0 << "sm == " << len*100/2.54 << "in == " << len*100/2.54/12 << "ft\n";
			m_vec.push_back(len); //?
		}


		else if(unit == "in")
		{
			cout << len << unit << " == " << len*2.54 << "sm == "<< len*2.54/100 << "m == " << len/12.0 << "ft\n";
			in_vec.push_back(len); //?
		}


		else if(unit == "ft")
		{
			cout << len << unit << " == " << len*12.0 << "in == " <<len*12*2.54 << "sm == " << len*12*2.54/100 << "m\n";
			ft_vec.push_back(len); //?
		}

		else
			cout << "Error\n";
		cout << len << unit << "\n";
	}
}
