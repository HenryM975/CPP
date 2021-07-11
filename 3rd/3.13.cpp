#include "../include/std_lib_facilities.h"

int main()
{
	double num;
	int len = 0;
	vector <double> vec;
	while(cin >> num)
	{
		vec.push_back(num);
		++len;
	}
	sort(vec);
	if(len%2 == 0)
		cout << "median == " << (vec[len/2] + vec[len/2-1])/2 << "\n";
	
	else if(len%2 != 0)
		cout << "median == " << vec[len/2] << "\n";
	else
		cout << "Error\n";
}
