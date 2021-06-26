#include "../include/std_lib_facilities.h"
int main()
{
	vector <string> words;
	vector <string> twords = {"qwe", "qwer", "qwert"};
	string tword = "tword";
	for(string word; cin >> word;)
	{
			if(word == twords[0] || word == twords[1] || word == twords[2])
				words.push_back(tword);
			else if(word != twords[1])
				words.push_back(word);


	}
	cout << twords.size() << "\n";
	cout << "\n--------------------\n";
	for(int i = 0; i < words.size(); ++i)
		cout << words[i] << "\n";
}
