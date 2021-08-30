#include "../include/std_lib_facilities.h"

int main()
{
	vector <int> vec;
	int i = 0;
	string values;
	cin >> values;
	while(values != "q")
	{
		vec.push_back(stoi(values));
		++i;
		cin >> values;
	}
	sort(vec);
	cout << "min == " << vec[0] << " max == " << vec[i-1] << "\n";

}
