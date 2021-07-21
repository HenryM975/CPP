#include "../include/std_lib_facilities.h"

int main()
{
	int num = 1;
	int i = 0;
	cout << "int*=2:\n";
	while(num > 0)
	{
		++i;
		num *= 2;
		if(num > 0)
			cout << i << "-" << num << " ";
		else
			cout << "over\n";

	}
	num = 1;
	cout << "int+=1:\n";
	while(num > 0)
	{
		num += 1;
		if(num > 0)
			;//cout << num << " ";
		else
			cout << "over\n";
	}
	cout << num - 1 << "\n";


	/*
	double num_0 = 1.0;
	cout << "double*=2:\n";
	while(num_0 > 0)
	{
		num_0 *= 2;//?inf
		if(num_0 > 0)
			cout << num_0 << " ";
		else
			cout << "over\n";
	}
	cout << num_0 << "\n";
	*/


}
