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
				cout << "Число больше 82?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//83 - 88
					cout << "Число больше 85?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//86 - 88
						cout << "Число больше 87?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//88!
							cout << "Число 88!\n";
						}
						else if(answer == 'n')
						{
							//86 - 87
							cout << "Число больше 86?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//87!
								cout << "Число 87!\n";
							}
							else if(answer == 'n')
							{
								//86!
								cout << "Число 86!\n";
							}

						}
						else
							cout << "Error\n";
					}
					if(answer == 'n')
					{
						//83 - 85
						cout << "Число болше 84?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//85!
							cout << "Число 85!\n";
						}
						else if(answer == 'n')
						{
							//83 - 84
							cout << "Число больше 83?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//84!
								cout << "Число 84!\n";
							}
							else if(answer == 'n')
							{
								//83!
								cout << "Число 83!\n";
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
				else if(answer == 'n')
				{
					//76 - 82
					cout << "Число больше 79?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//80 - 82
						cout << "Число больше 81?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//82!
							cout << "Число 82!\n";
						}
						else if(answer == 'n')
						{
							//80 - 81
							cout << "Число больше 80?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//81!
								cout << "Число 81!\n";
							}
							else if(answer == 'n')
							{
								//80!
								cout << "Число 80!\n";
							}
							else
								cout << "Error\n";
						}
						else
							cout << "Error\n";
					}
					else if(answer == 'n')
					{
						//76 - 79
						cout << "Число больше 77?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//78 - 79
							cout << "Число больше 78?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//79!
								cout << "Число 79!\n";
							}
							else if(answer == 'n')
							{
								//78!
								cout << "Число 78!\n";
							}
							else
								cout << "Error\n";

						}
						else if(answer == 'n')
						{
							//76 - 77
							cout << "Число больше 76?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//77!
								cout << "Число 77!\n";
							}
							else if(answer == 'n')
							{
								//76!
								cout << "Число 76!\n";
							}
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
			//51 - 75
		}
		else
			cout << "Error\n";

	}

		
}
