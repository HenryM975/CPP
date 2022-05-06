#include <iostream>

void displayArray(int intArray[], int Size)
{
	int* pArray = intArray;
	for(int n = 0; n < Size; n++, pArray++)
	{
		std::cout << n << " : " << *pArray << " - " << pArray << std::endl;
	}
}

int main()
{
	int mas[3] = {1, 2, 3};
	displayArray(mas, 3);
}
