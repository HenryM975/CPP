#include "../include/std_lib_facilities.h"

int main()
{
	char answer = ' ';
	vector <int> vec;
	for(int i = 1; i <= 100; ++i)
	{
		vec.push_back(i);
	}
	int vec_size = vec.size();
	int sum_of_elements = vec_size;
	for(int i = 1; i < vec_size; ++i)
	{
		cout << "Ваше значение больше " << middle_num  << " ?" << endl;
		cin >> answer;
		if(answer == 'y')
		{
			i = middle_num+1;
			middle_num = i + i/2;
		}
		else if(answer == 'n')
		{
			vec_size /= 2;
		}
		else
		{
		}

	}
}
