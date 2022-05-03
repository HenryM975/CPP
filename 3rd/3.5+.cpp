#include "../include/std_lib_facilities.h"

int square1(int x)
{
	int result = x;
	for(int i = 0; i < x-1; i++)
	{
	result+=x;
	}
	return(result);
}
int square(int x)
{
	int result = x*x;
	return(result);
}

int main()
{
	int input_number = 0;
	cin >> input_number;
	cout << square1(input_number) << " == " << square(input_number) << "\n";
}
