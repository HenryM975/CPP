#include <iostream>

void changeOutValue(int &value)
{
	value = 12;
}
void faleChange(int value)
{
	value = 16;
}

int main()
{
	int num = 1;
	std::cout << num << std::endl;
	faleChange(num);
	std::cout << num << std::endl;
	changeOutValue(num);
	std::cout << num << std::endl;
	return 0;
}
