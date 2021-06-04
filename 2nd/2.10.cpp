#include "../include/std_lib_facilities.h"
int main()
{
cout << "Введите 2 числа с плавающей точкой (через пробел):\n val1: ";
        double val1, val2;
        cin >> val1;
        cout << " val2: ";
        cin >> val2;
        cout << "val1 == " << val1 << " val2 == " << val2 << "\n";
        if(val1 > val2)
                cout << " val1 > val2\n";
        else if(val1 < val2)
               cout << " val1 < val2\n";
        else
                cout << " val1 == val2\n";
        cout << "val1 + val2 == " << val1+val2 << "\n val1 - val2 == " << val1 - val2 << "\n val2 - val1 == " << val2 - val1 << "\n val1 * vl2 == " << val1 * val2 << "\n val1 / val2 == " << val1 / val2 << "\n val2 / val1 == " << val2 / val1 << "\n";
}
