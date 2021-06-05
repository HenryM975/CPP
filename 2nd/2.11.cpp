#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите 3 числовых значения: \n val1: ";
	int val1, val2, val3;
	cin >> val1;
	cout << " val2: ";
	cin >> val2;
	cout << " val3: ";
	cin >> val3;
	cout << " val1 == " << val1 << " val2 == " << val2 << " val3 == " << val3 << "\n";

       int list[3] = {val1, val2, val3};
       for(int l = 0; l < 3; l++)
       {
        cout << list[l];
        }
       cout << "\n";

       int buf = 0;
       for(int i  = 0; i < 3; i++)
       {	
	       for(int j = 0; j < 2; j++)
		{
			if(list[j] < list[j+1])
			{
			buf = list[j];
			list[j] = list[j+1];
			list[j+1] = buf;
			}
		}
       }
       for(int k = 0; k < 3; k++)
       {
	cout << list[k];
	}
       cout << "\n";

		

}
