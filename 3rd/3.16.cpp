#include "../include/std_lib_facilities.h"
int main()
{
	int num = 9;
	int* addr = &num;
	int* addr2 = &num;
	cout << num << "|" << addr << "|"  << &num;
	
	for(int i = 0; i < 10000; ++i)
			cout << i << ": " << ++addr << " == " << *addr << "\n";
	
}
