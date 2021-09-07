#include "../include/std_lib_facilities.h"

int main()
{
	vector <int> ages;
	int age, a = 1,   n = 1;
	vector <string> names;
	string name;
	cout << "name" << " age" << endl;
	names[0] = "A";
	ages[0] = 1;

	while(name != "NoName" && age != 0)
	{
		cout << "---" << endl;
		
	/*	for(int k = 0; k < a; k++)
        {
                cout << "--" << names[k] << " " << ages[k] << endl;
        }
	*/
	

		cin >> name >> age;
		for(int j = 0; j < a; j++)
		{
			if(name == names[j])
			{
				j = a;
			}
			else if(j == a && name != names[j])
			{
			/*	//for(int a2 = 0; a2 < a; a2++)
				ages.push_back(age);
				++a;
				names.push_back(name);
				++n;
				cout << name << endl;
				*/
				cout << "ES" << endl;
			}
		}


	}


	
}
