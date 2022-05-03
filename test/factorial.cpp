#include <iostream>

int factorial(int x)
{
	if(x > 1)
	{
		x *= factorial(x - 1);
	}
	else if(x = 1)
	{
		x *= 1;
	}
	else
	{
		std::cout << "error in factorial" << std::endl;
	}
	return(x);
}

int main()
{
	int input_num = 0;
	std::cin >> input_num;
	std::cout << factorial(input_num) << std::endl;
	
	return 0;
}


