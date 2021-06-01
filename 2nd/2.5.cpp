#include "../include/std_lib_facilities.h"
int main()
{
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	cout << "c == " << c << " i1 == " << i1 <<" i2 == " << i2 << "\n-----		--------------\n";
	int a = 2000;
	char d = a;
	int b = d;
	if (a != b)
		cout << "a != b \n a == " << a << "\n d == " << d << "\n b == "<< b << "\n";
	else
	cout << " a == b == d " << a << "|" << b << "|" <<  d << "\n-------------------\n";
	double input_d = 0;
	while (cin>>input_d)
	{
		int int_i = input_d;
		char char_c = int_i;
		int int_i_2 = char_c;
		cout <<"\n input_d == " << input_d
		     <<"\n int_i == " << int_i
		     <<"\n char_c == " << char_c
		     <<"\n int_i_2 == " << int_i_2 << "\n";

	}
	//char x_test {1000}; narrowing conversion
	char x_test_2 {40};
		

}
