//ex7p215
#include <iostream>
#include <math.h>

int main()
{
	std::cout << "a:\n";
	double a, b, c, result0, result1;
	std::cin >> a;
	std::cout << "b:\n";
	std::cin >> b;
	std::cout << "c:\n";
	std::cin >> c;
	double sqr = b * b - 4 * a * c;
	if(sqr >= 0)
	{
		result0 = (-b + sqrt(b * b - 4 * a * c))/2 * a;
		result1 = (-b - sqrt(b * b - 4 * a * c))/2 * a;
		std::cout << "x1 == " << result0 << " x2 == " << result1 << '\n';
 	}
	else
	{
		std::cout << "(b * b - 4 * a * c) < 0 !!!\n"; 
	}
	
	return 0;
}
