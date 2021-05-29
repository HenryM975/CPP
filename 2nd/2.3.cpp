#include "../include/std_lib_facilities.h"
int main()
{
	cout << "--------------------------------------\n введите целочисленн		ое значение и нажмите 'enter'\n";
	int num;
	cin >> num;
	cout << "\nnum == " << num
	     << "\nnum + num == "  << num + num
       	     << "\nnum - 1 == " << num - 1
	     << "\nnum * num == " << num * num
	     << "\nnum / 2 == " << num / 2
	     << "\nnum % 2 == " << num % 2
	     << "\nnum++ == " << num++
	     << "\nnum-- == " << num--
	    //?<< "\nnum += 1 == " << num += 1
    	    //? << "\nnum -= 1 == " << num -= 1
	    //? << "\nnum *= num == " << num *= num
	    //? << "\nnum /= 2 == " << num /= 2
	    //? << "\nnum %= 2 == " << num /= 2
	     << "\n";
	string str = "smth";
	cout << "str  + smth == " << str + "smth" << "\n";
	string str2 = "qwerty";
	cout << "str + str2 == " << str + str2 << "\n";
	
}
