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
		else if(answer == 'n')
		{
			//1 - 50;
			cout << "Число больше 25?(y/n)\n";
			cin >> answer;
			if(answer == 'y')
			{
				//26 - 50
				cout << "Число больше 38?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//39 - 50
					cout << "Число больше 44?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//45 - 50
						cout << "Число больше 47?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//48 - 50
							cout << "Число больше 49?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//50!
								cout << "Число 50!\n";
							}
							else if(answer == 'n')
							{
								//48 - 49
								cout << "Число больше 48?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//49!
									cout << "Число 49!\n";
								}
								else if(answer == 'n')
								{
									//48!
									cout << "Число 48!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//45 - 47
							cout << "Число больше 46?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//47!
								cout << "Число 47!\n";
							}
							else if(answer == 'n')
							{
								//45 - 46
								cout << "Число больше 45?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//46!
									cout << "Число 46!\n";
								}
								else if(answer == 'n')
								{
									//45!
									cout << "Число 45!\n";
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
						//39 - 44
						cout << "Число больше 41?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//42 - 44
							cout << "Число больше 43?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//44!
								cout << "Число 44!\n";
							}
							else if(answer == 'n')
							{
								//42 - 43
								cout << "Число больше 42?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//43!
									cout << "Число 43!\n";
								}
								else if(answer == 'n')
								{
									//42!
									cout << "Число 42!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//39 - 41
							cout << "Число больше 40?(y/n)\n";
							cin >> answer;
							if(answer = 'y')
							{
								//41!
								cout << "Число 41!\n";
							}
							else if(answer == 'n')
							{
								//39 - 40
								cout << "Число больше 39?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//40!
									cout << "Число 40!\n";
								}
								else if(answer == 'n')
								{
									//39!
									cout << "Число 39!\n";
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
					//26 - 38
					cout << "Число больше 31?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//32 - 38
						cout << "Число больше 35?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//36 - 38
							cout << "Число больше 37?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//38!
								cout << "Число 38!\n";
							}
							else if(answer == 'n')
							{
								//36 - 37
								cout << "Число больше 36?\n";
								cin >> answer;
								if(answer == 'y')
								{
									//37!
									cout << "Число 37!\n";
								}
								else if(answer == 'n')
								{
									//36!
									cout << "Число 36!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//32 - 35
							cout << "Число больше 33?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//34 - 35
								cout << "Число больше 34?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//35!
									cout << "Число 35!\n";
								}
								else if(answer == 'n')
								{
									//34!
									cout << "Число 34!\n";
								}
								else
									cout << "Error\n";

							}
							else if(answer == 'n')
							{
								//32 - 33
								cout << "Число больше 32?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//33!
									cout << "Число 33!\n";
								}
								else if(answer == 'n')
								{
									//32!
									cout << "Число 32!\n";
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
						//26 - 31
						cout << "Число больше 28?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//29-31
							cout << "Число больше 30?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//31!
								cout << "Число 31!\n";
							}
							else if(answer == 'n')
							{
								//29 - 30
								cout << "Число больше 29?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//30!
									cout << "Число 30!\n";
								}
								else if(answer == 'n')
								{
									//29!
									cout << "Число 29!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//26 - 28
							cout << "Число боьше 27?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//28!
								cout << "Число 28!\n";
							}
							else if(answer == 'n')
							{
								//26 - 27
								cout << "Число больше 26?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//27!
									cout << "Число 27!\n";
								}
								else if(answer == 'n')
								{
									//26!
									cout << "Число 26!\n";
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
				else
					cout << "Error\n";
			}
			else if(answer == 'n')
			{
				//1 - 25
				cout << "Число больше 13?(y/n)\n";
				cin >> answer;
				if(answer == 'y')
				{
					//14 - 25
					cout << "Число больше 19?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//20 - 25
						cout << "Число больше 22?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//23 - 25
							cout << "Число больше 24?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//25!
								cout << "Число 25!\n";
							}
							else if(answer == 'n')
							{
								//23 - 24
								cout << "Число больше 23?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//24!
									cout << "Число 24!\n";
								}
								else if(answer == 'n')
								{
									//23!
									cout << "Число 23!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//20 - 22
							cout << "Число больше 21?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//22!
								cout << "Число 22!\n";
							}
							else if(answer == 'n')
							{
								//20 - 21
								cout << "Число больше 20?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//21!
									cout << "Число 21!\n";
								}
								else if(answer == 'n')
								{
									//20!
									cout << "Число 20!\n";
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
						//14 - 19
						cout << "Число больше 16?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//17 - 19
							cout << "Число больше 18?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//19!
								cout << "Число 19!\n";
							}
							else if(answer == 'n')
							{
								//17 - 18
								cout << "Число больше 17?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//18!
									cout << "Число 18!\n";
								}
								else if(answer == 'n')
								{
									//17!
									cout << "Число 17!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//14 - 16
							cout << "Число больше 15?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//16!
								cout << "Число 16!\n";
							}
							else if(answer == 'n')
							{
								//14 - 15
								cout << "Число больше 14?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//15!
									cout << "Число 15!\n";
								}
								else if(answer == 'n')
								{
									//14!
									cout << "Число 14!\n";
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
					//1 - 13
					cout << "Число больше 7?(y/n)\n";
					cin >> answer;
					if(answer == 'y')
					{
						//8 - 13
						cout << "Число больше 10?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//11 - 13
							cout << "Число больше 12?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//13!
								cout << "Число 13!\n";
							}
							else if(answer == 'n')
							{
								//11 - 12;
								cout << "Число больше 11?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//12!
									cout << "Число 12!\n";
								}
								else if(answer == 'n')
								{
									//11!
									cout << "Число 11!\n";
								}
								else
									cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//8 - 10
							cout << "Число больше 9?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//10!
								cout << "Число 10!\n";
							}
							else if(answer == 'n')
							{
								//8 - 9
								cout << "Число больше 8?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//9!
									cout << "Число 9!\n";
								}
								else if(answer == 'n')
								{
									//8!
									cout << "Число 8!\n";
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
						//1 - 7
						cout << "Число больше 4?(y/n)\n";
						cin >> answer;
						if(answer == 'y')
						{
							//5 - 7
							cout << "Число больше 6?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//7!
								cout << "Число 7!\n";
							}
							else if(answer == 'n')
							{
								//5 - 6
								cout << "Число больше 5?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//6!
									cout << "Число 6!\n";
								}
								else if(answer == 'n')
								{
									//5!
									cout << "Число 5!\n";
								}
								cout << "Error\n";
							}
							else
								cout << "Error\n";
						}
						else if(answer == 'n')
						{
							//1 - 4
							cout << "Число больше 2?(y/n)\n";
							cin >> answer;
							if(answer == 'y')
							{
								//3 - 4
								cout << "Число больше 3?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//4!
									cout << "Число 4!\n";
								}
								else if(answer == 'n')
								{
									//3!
									cout << "Число 3!\n";
								}
								else
									cout << "Error\n";
							}
							else if(answer == 'n')
							{
								//1 - 2
								cout << "Число больше 1?(y/n)\n";
								cin >> answer;
								if(answer == 'y')
								{
									//2!
									cout << "Число 2!\n";
								}
								else if(answer == 'n')
								{
									//1!
									cout << "Число 1!\n";
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
				else
					cout << "Error\n";
			}
			else
				cout << "Error\n";
		}
		else
			cout << "Error\n";

	}

	
		

