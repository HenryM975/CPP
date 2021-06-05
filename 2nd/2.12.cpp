#include "../include/std_lib_facilities.h"
int main()
{
	cout << "Введите 3 строковых значения: \n val1:";
	string val1, val2, val3;
	cin >> val1;
	cout << " val2:";
	cin >> val2;
	cout << " val3:";
	cin >> val3;
	cout << " val1 == " << val1 << " val2 == " << val2 << " val3 == " << val3 << "\n";
	int val1_len = val1.size(), val2_len = val2.size(), val3_len = val3.size();
	string list[3] = {val1, val2, val3};
       int sizelist[3] = {val1_len, val2_len, val3_len};
	for(int i = 0; i < 3; i++)
	{
		cout << sizelist[i] << "\n";
	}


	int buf = 0;
       for(int i  = 0; i < 3; i++)
       {
               for(int j = 0; j < 2; j++)
                {
                        if(sizelist[j] < sizelist[j+1])
                        {
                        buf = sizelist[j];
                        sizelist[j] = sizelist[j+1];
                        sizelist[j+1] = buf;
                        }
                }
       }
	cout << "______________________________________\n";
       for(int i = 0; i < 3; i++)
                cout << sizelist[i] << "\n";
        cout << "______________________________________\n";

        
       	for(int i = 0; i < 3; i++)
      		for(int j = 0; j < 3; j++)
		{
			int list_part_size = list[j].size();//?????
			if(sizelist[i] == list_part_size)
				cout << list[j] << "\n";
		}
 



}
