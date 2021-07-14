#include "../include/std_lib_facilities.h"

int main()
{
	char answer;
	cout << "Загадайте число от 1 до 100\n Число больше 50?(y/n)\n";
	cin >> answer;
	if(answer == 'y')
	{
		//51 - 100
		cout << "Число больше 75?(y/n)\n";
		cin >> answer;
		if(answer == 'y')
		{
			//76 - 100
			cout << "Число больше 88?(y/n)\n";
			cin >> answer;
			if(answer == 'y')
			{
				//89 - 100
				cout << "Число больше 95?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//96 - 100
					cout << "Число больше 98?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//99 - 100
						cout << "Число больше 99?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//100!
							cout << "Число 100!\n";
						}
						else if(answer == 'n')
						{	
							//99!
							cout << "Число 99!\n";
						}
						else
							cout << "Error\n";
					}
					else if(answer == 'n')
					{
						//96 - 98
						cout << "Число больше 97?(y/n)";
						cin >> answer;
						if(answer == 'y')
						{
							//98!
							cout << "Число 98!\n";	
						}
						else if(answer == 'n')
						{
							//96 - 97
							cout << "Число больше 96?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//97!
								cout << "Число 97!\n";
							}
							if(answer == 'n')
							{
								//96!!
								cout << "Число 96!\n";
							}
						}
						else
							cout << "Error\n";
					}
					else
						cout << "Error\n";


				}
				else if(answer == 'n')
				{
					//89 - 95
					cout << "Число больше 92?(у/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//93 - 95
						cout << "Число больше 94?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//95!
							cout << "Число 95!\n";
						}
						else if(answer == 'n')
						{
							//93 - 94
							cout << "Число больше 93?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//94!
								cout << "Число 94!\n"; 
							}
							else if(answer == 'n')
							{
								//93
								cout << "Число 93!\n";
							}
							else
								cout << "Error\n";
						}
						else
							cout << "Error\n";


					}
					else if(answer == 'n')
					{
						//89 - 92
						cout << "Число больше 90?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//91 - 92
							cout << "Число больше 91?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//92!
								cout << "Число 92!\n!";
							}
							else if(answer == 'n')
							{
								//91!
								cout << "Число 91!\n";
							}
						}
						else if(answer == 'n')
						{
							//89 - 90
							cout << "Число больше 89?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//90!
								cout << "Число 90!\n";
							}
							else if(answer == 'n')
							{
								//89!
								cout << "Число 89!\n";
							}
							else
								cout << "Error\n";

						}
						else
							cout << "Error\n";

					}
					else
						cout << "Error\n";
				}
			}
			else if(answer == 'n')
			{
				//76 - 88
			}
		}
		else if(answer == 'n')
		{
			//51 - 75
		}
		else
			cout << "Error\n";

	}

		
}
