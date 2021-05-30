#include "../include/std_lib_facilities.h"
int main()
{
	string previous = " ";
	string current;
	int number_of_words = 0;
	 while(cin>>current)
	{
		++number_of_words;
		if (previous == current)
			cout << "Повторяющееся слово: " << current
			     << " его номер: "<< number_of_words
		     	     << "\n";
		previous = current;

	}
}
