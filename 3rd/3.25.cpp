#include "../include/std_lib_facilities.h"

int main()
{ 
        vector <int> all_nums;
        vector <int> primes;
        int i = 1, limit = 100;
	cout << "Введите предельное значение:\n";
	cin >> limit;
        for(; i < limit; ++i)
        {
                all_nums.push_back(i);
                int dividers = 0;
                for(int j = 0; j < i; ++j)
                {
                        if(i % all_nums[j] == 0)
                        {
                                ++dividers;
                        }
                }
                if(dividers <= 2)
                        primes.push_back(i);
        }
        int k = 0;
        for(; k < primes.size(); ++k)
                cout << primes[k] << " ";
        cout << "\n";

}

