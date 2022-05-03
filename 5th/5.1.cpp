#include <cstdio> //с error не помогло
#include <cstdlib> //с error не помогло
#include <iostream>



int main()
{
	std::cout << "введите выражение + - * / \n Добавте к концу выражения x (1+2*3x):" << std::endl;
	int lval = 0;
	int rval;
	std::cin >> lval;
	if(!std::cin)
	{
		//std::error("нет первого операнда");
		std::cout << "нет первого операнда" << std::endl;
		return 1;
	}
	
	for (char op; std::cin >> op; )
	{
		if(op != 'x')
		{
			std::cin >> rval;
		}
		if(!std::cin)
		{
			//error("нет второго операнда");
		}
		switch (op)
		{
		case '+':
			lval += rval;
			break;
		case '-':
			lval -= rval;
			break;
		case '*':
			lval *= rval;
			break;
		case '/':
			lval /= rval;
			break;
		default:
			std::cout << "Результат: " << lval << std::endl;
			return 0;
		
	}

	}
	
	//error("неверное выражение");
}
