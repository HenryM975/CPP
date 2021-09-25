#include "../include/std_lib_facilities.h"



int main()
{
	try
	{
	vector <int> ve1 = {1, 2, 3};
	int i = 0;
	cin >> i;
	if(!cin)
		cout << "no input data" << endl;
	
	if(i == 2)
        {
                error("Введение числа 2 вызывае ошибку");
        }

	cout << i << endl; 
	int k = 5 / i; //catch не отлавливает /0!
	cout << k << endl;
	cout << ve1.size()  << ve1[3] << endl;
	}
	catch(exception& e) //catch(...)
	{
		cout << "Error!" << e.what() << endl;
	}
}
