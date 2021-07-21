#include "../include/std_lib_facilities.h"

int main()
{
	vector <string> values = {"Камень", "Ножницы", "Бумага"};

	
	for(;;)
	{

	int input_data, rand_value = rand() % 3;
	cout << "Введите значение: Камень - 1, Ножницы - 2 или Бумага - 3 ctrl+c для завершения\n";
	cin >> input_data;
	if(input_data == 1 || input_data == 2 || input_data == 3)
	{
		switch(input_data)
		{	
			//Камень
			case 1:
			cout << "Камень!\n";
				switch(rand_value)
				{
					case 0: //k
						cout << values[rand_value] << "! Ничья\n";
					break;
					case 1: //n
						cout << values[rand_value] << " =( \n";
					break;
					case 2: //b
						cout << values[rand_value] << "! XD \n";
					break;
				}
			break;

			//Ножницы
			case 2:
			cout << "Ножницы!\n";
			switch(rand_value)
                                {
                                        case 0: //k
					       	cout << values[rand_value] <<"! XD \n";
                                        break;
                                        case 1: //n
						cout << values[rand_value] <<"! Ничья\n";
                                        break;
                                        case 2: //b
						cout << values[rand_value] <<" =( \n";
                                        break;
                                }
			break;

			//Бумага
			case 3:
			cout << "Бумага!\n";
			switch(rand_value)
                                {
                                        case 0: //k
						cout << values[rand_value] <<" =( \n";
                                        break;
                                        case 1: //n
						cout << values[rand_value] <<"! XD \n";
                                        break;
                                        case 2: //b
						cout << values[rand_value] <<"! Ничья\n";
                                        break;
                                }		
			break;
			default:
				cout << "error";
		}

	}
	else
		cout << "Error";
	

	}
}

