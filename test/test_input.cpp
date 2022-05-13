#include <iostream>

//sunOfArgs - число вводимых аргументов val[] - массив указателей на аргументы
int main(int sumOfArgs, char* val[])
{
	for(int i = 0; i < sumOfArgs; ++i)
	{
		std::cout <<  val[i] << std::endl;
	}	
	return 0;
}
