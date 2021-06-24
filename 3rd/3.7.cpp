#include "../include/std_lib_facilities.h"
int main()
{
	vector <int> test;
	int len = 0;
	for(int data; cin >> data; )
		test.push_back(data), ++len;
	cout << "----------------\n";
	for(int i = 0; i < len; i++)
		cout << test[i] << "\n";
	cout << "int size == " << sizeof(int) << "\n";
}
