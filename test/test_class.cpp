#include <iostream>

class TestClass
{
	public:
		int Func(int smth1, int smth2)
		{
			return smth1 + smth2;
		}
		int num1;
		int num2;
};

int main()
{
	TestClass Class1;
	Class1.num1 = 1;
	Class1.num2 = 2;

	std::cout << Class1.num1 << "|" << Class1.num2 << "|" << Class1.Func(1, 2) << std::endl;
	
	//создание массива объектов
	TestClass t[10];
	t[0].num1 = 0;
	t[0].num2 = 0;
	t[1].num1 = 1;
	t[1].num2 = 1;


	std::cout << t[0].num1 << "|" << t[0].num2 << "|" << t[1].num1 <<  "|" << t[1].num2 << std::endl;
	
	//создание указателя на класс / объект класса
	TestClass* pT;
	TestClass* pClass1;
	pClass1 = &Class1;
	
	//способы указать на хронящийся элемент по указателю
	std::cout << pT << "|" << pClass1 << "|" << pClass1 << "|" << pClass1->num1 << "|" << pClass1->num2 << "||" << (*pClass1).num1<< "|" << (*pClass1).num2 << std::endl;



	return 0;

}
