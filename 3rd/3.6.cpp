#include "../include/std_lib_facilities.h"

void smth(int v)
{
        cout << "\ntest_smth" << v << "\n";
}


int main()
{
	vector<int> v  = {5 , 7, 8, 9, 1};
	for (int x : v)
		cout << x << "\n";
	smth(v[3]);
}


