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
			cout << "Число больше 62?(y/n)\n";
			cin >> answer;
			if(answer == 'y')
			{
				//63 - 75
				cout << "Число больше 69?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//69 - 75
					cout << "Число больше 72?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//73 - 75
						cout << "Число больше 74?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//75!
							cout << "Число 75!\n";
						}
						else if(answer == 'n')
						{
							//73 - 74
							cout << "Число больше 73?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//74!
								cout << "Число 74!\n";
							}
							else if(answer == 'n')
							{
								//73!
								cout << "Число 73!\n";
							}
						}
						else
							cout << "Error\n";
					}				}
					else if(answer == 'n')
					{
						//69 - 72
						cout << "Число больше 70?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//71 - 72
							cout << "Число больше 71?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//72!
								cout << "Число 72!\n";
							}
							else if(answer == 'n')
							{
								//71!
								cout << "Число 71\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//69 - 70
							cout << "Число больше 69?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//70!
								cout << "Число 70!\n";
							}
							else if(answer == 'n')
							{
								//69!
								cout << "Число 69!\n";
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
					//63 - 69
					cout << "Число больше 66?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//67 - 69
						cout << "Число больше 68?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//69!
							cout << "Число 69!\n";
						}
						else if(answer == 'n')
						{
							//67 - 68
							cout << "Число больше 67?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//68!
								cout << "Число 68!";
							}
							else if(answer == 'n')
							{
								//67!
								cout << "Число 67!\n";
							}
							else
								cout << "Error\n";
						}
						else 
							cout << "Error\n";
					}
					else if(answer == 'n')
					{
						//63 - 66
						cout << "Число больше 64?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//65 - 66
							cout << "Число больше 65?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//66!
								cout << "Число 66!\n";
							}
							else if(answer == 'n')
							{
								//65!
								cout << "Число 65!\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//63 - 64
							cout << "Число больше 63?\n";
							cin >> answer;
							if(answer == 'y')
							{
								//64!
								cout << "Число 64!\n";
							}
							else if(answer == 'n')
							{
								//63!
								cout << "Число 63!\n";
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
				else
					cout << "Error\n";
			}
			else if(answer == 'n')
			{
				//51 - 62
				cout << "Число больше 56?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//57 - 62
					cout << "Число больше 59?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//60 - 62
						cout << "Число больше 61?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//62!
							cout << "Число 62!\n";
						}
						else if(answer == 'n')
						{
							//60 - 61
							cout << "Число больше 60?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//61!
								cout << "Число 61!\n";
							}
							else if(answer == 'n')
							{
								//60!
								cout << "Число 60!\n";
							}
							else
								cout << "Error!\n";
						}
						else 
							cout << "Error\n";
					}
					else if(answer == 'n')
					{
						//57 - 59
						cout << "Число больше 58?\n";
						cin >> answer;
						if(answer == 'y')
						{
							//59!
							cout << "Число 59!\n";
						}
						else if(answer == 'n')
						{
							//57 - 58
							cout << "Число больше 57?(y/n)";
							cin >> answer;
							if(answer == 'y')
							{
								//58!
								cout << "Число 58!\n";
							}
							else if(answer == 'n')
							{
								//57!
								cout << "Число 57!\n";
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
					//51-56
					cout << "Число больше 53?\n";
					cin >> answer;
					if(answer == 'y')
					{
						//54 - 56
						cout << "Число больше 55?\n";
						cin >> answer;
						if(answer == 'y')
						{
							//56!
							cout << "Число 56!\n";
						}
						else if(answer == 'n')
						{
							//54-55
							cout << "Число больше 54?\n";
							cin >> answer;
							if(answer == 'y')
							{
								//55!
								cout << "Число 55!\n";
							}
							else if(answer == 'n')
							{
								//54!
								cout << "Число 54!\n";
							}
							else
								cout << "Error\n";
						}
						else
							cout << "Error\n";
					}
					else if(answer == 'n')
					{
						//51 - 53
						cout << "Число больше 52?\n";
						cin >> answer;
						if(answer == 'y')
						{
							//53!
							cout << "Число 53!\n";
						}
						else if(answer == 'n')
						{
							//51-52!
							cout << "Число больше 51?\n";
							if(answer == 'y')
							{
								//52!
								cout << "Число 52!\n";
							}
							else if(answer == 'n')
							{
								//51!
								cout << "Число 51!\n";
							}
							else
								cout << "Error\n";
						}
						else
							cout << "Error\n";
					}
					else
						cout<< "Error\n";

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

	
		

