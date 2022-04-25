//ex8p215
//draft


#include <iostream>
#include <vector>

int main()
{
	
	int a = 1, len = 0, sumElements = 0;
	std::vector<int> v0;
	
	std::cout << "Колличество суммируемых значений:\n";
	std::cin >> sumElements;
	std::cout << "Введите несколько целых чисел (| для завершения):\n";
	while(a != 0)
	{
		std::cin >> a;
		v0.push_back(a);
		++len;
		
	}
	int sum = 0;
	for(int i=0; i<sumElements-1; ++i)
	{
		sum+=v0[i];
		std::cout << v0[i] << " ";
	}	
	std::cout << "\n" << sum << "\n";
	return 0;
}
