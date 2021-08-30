#include "../include/std_lib_facilities.h"

int main()
{
	vector <int> vec;
	int i = 0;
	string data;
	cin >> data;
	while(data != "q")
	{
		vec.push_back(stoi(data));
		++i;
		cin >> data;
	}
	
	cout << "min == " << vec[0] << " max == " << vec[i-1];

}
