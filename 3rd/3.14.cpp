#include "../include/std_lib_facilities.h"

int main()
{
	double len, full_len = 0, elements = 0;
	vector <double> vec;
	while(cin >> len)
	{
		vec.push_back(len);
		full_len += len;
		++elements;
	}
	sort(vec);
	cout << "Число элементов == " << elements << " Минимальное значение == " << vec[0] << " Максимальное значение == " << vec[elements - 1] << " Среднее значение == " << full_len / elements << "\n";
}		
