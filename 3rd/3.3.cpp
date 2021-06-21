#include "../include/std_lib_facilities.h"
int x = 100;
int main()
{
	int x = 50;
	{
		int x = x;
		cout << "local x == " << x << " global x == " << ::x;
	}
}
