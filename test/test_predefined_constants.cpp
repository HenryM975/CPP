#include <iostream>

int main()
{
	std::cout << "\n__FILE__:" <<  __FILE__ << "\n__LINE__:" << __LINE__ << "\n__func__:" << __func__ << "\n__DATE__:" 
		<< __DATE__ << "\n__TIME__:" << __TIME__ << "\n__TIMESTAMP__:" << __TIMESTAMP__ << "\n__STDC__:" << __STDC__
		<< "\n__cplusplus:" << __cplusplus << std::endl;
	return 0;
}
