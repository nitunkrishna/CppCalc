#include<iostream>
#include"calculator.h"
using namespace std;

void multiplication()
{
    string a;
    double res=1;
    cout << "Enter numbers (Press '=' to exit): ";
    while(true)
    {
        cin >> a;
        if(a=="=") break;
        try
        {
            res*=stod(a);
        }
        catch(const invalid_argument&)
        {
            cout << "Invalid input! Enter a valid number: ";
        }
        catch(const out_of_range&)
        {
            cout << "Number is too large! Enter another number: ";
        }
    }
    cout << "Result: " << res << endl;
}