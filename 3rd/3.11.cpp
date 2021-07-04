#include "../include/std_lib_facilities.h"


int main()
{
	vector<double> vec;
	double little_nnum, num;
	int len = 0;
	cout << "Введите CTRL+D для завершения\n";
	while(cin >> num && num != '0')
	{
		++len;
		vec.push_back(num);

	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < (len-1); j++)
		{
			if(vec[j] > vec[j+1])
			{
				little_nnum = vec[j+1];
				vec[j+1] = vec[j];
				vec[j] = little_nnum;	
			}	
		}
	}
	cout << "-----------------------------------------\n";
	if(num >= vec[len-1])
                        cout << "Введено наибольшее из имеющихся значений\n";
        if(num <= vec[0])
                        cout << "Введено наименьшее из имеющихся значений\n";


	cout << "\n Наименьшее среди введённых:  " << vec[0] << "\n Наибольшее среди введённых: " << vec[len-1] <<"\n";
	cout << "-----------------------------------------\n";

	}
}
