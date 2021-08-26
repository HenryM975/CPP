#include "../include/std_lib_facilities.h"

vector <int> nums, sum;


int main()
{
	for(int i = 0; i < 10; i++)
	{
		nums.push_back(i);
		sum.push_back(0);
	}
	int num;
	cout << "Введите любые значения в диапазоне от 0 до 9 (10 для завершения):\n";
	while(num != 10)
	{
		cin >> num;
		for(int j = 0; j < 10; j++)
		{
			if(num == nums[j])
			{
				++sum[j];
			}
		}
	}
	for(int k = 0; k < 10; k++)
	{
		cout << nums[k] << " - " << sum[k] << "\n";
	}

}
