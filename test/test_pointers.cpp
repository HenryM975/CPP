#include <iostream>

int main()
{
	int first = 0;
	int *addr = &first;
	for(int i = 0; i < 100; ++i)
	{
		std::cout << addr << " | " << *addr << std::endl;
		++addr;
	}
	return 0;
}
