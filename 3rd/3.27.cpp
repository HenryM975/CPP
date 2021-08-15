#include "../include/std_lib_facilities.h"
//решето эратосфена
int main()
{
int limit, sum_of_nums;
vector <int> values, final_vector;
cout << "Введите необходимое количество простых чисел\n";
cin >> sum_of_nums;
if(sum_of_nums > 4700)
	cout << "Too big number!\n";
else
{
limit = sum_of_nums * 10;
for(int i = 0; i < limit + 1; i++)
        {
                values.push_back(i);
        }

//while(final_vector.size() != sum of nums)
for(int p = 2; final_vector.size() != sum_of_nums; p++)
        {
                if (values[p] != 0)
                {
			final_vector.push_back(values[p]);
                        cout << values[p] << "-" << final_vector.size() << " ";
                        for(int j = p * p; j < limit + 1; j += p)
                                values[j] = 0;
                }
        }

cout << "\n";
}
}

