//ex11p215


#include "../include/std_lib_facilities.h"

int main()
{
	vector<int> fibValues;
	fibValues.push_back(1);
	int lastValue = 1, vecPosition = 2;
	while(lastValue >= 0)
	{
		fibValues.push_back(lastValue);
		lastValue = fibValues[vecPosition - 1] + fibValues[vecPosition - 2];
		++vecPosition;
	}
	cout << "\n";
	for(int i = 0; i<fibValues.size()-1; ++i)
	{
		cout << fibValues[i] << " ";
	}	
	return 0;
}
