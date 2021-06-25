#include "../include/std_lib_facilities.h"
int main()
{
	vector <string> words;
	vector <string> twords = {"qwe", "qwer", "qwert"};
	for(string word; cin >> word;)
	{
		for(int i = 0; i < (twords.size() - 1); ++i)
		{
			if(word != words[i] && i == (twords.size() - 1))
				words.push_back(word);
		}
	}
	cout << "\n--------------------\n";
	for(int i = 0; i < words.size(); ++i)
		cout << words[i] << "\n";
}
