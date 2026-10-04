#include<iostream>
#include"calculator.h"
using namespace std;

void division()
{
    string a;
    double res;
    cout << "Enter numbers (Press '=' to exit): ";
    while(true)
    {
        cin >> a;
        if(a=="=") return;
        try
        {
            res=stod(a);
            break;
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

    while(true)
    {
        cin >> a;
        if(a=="=") break;
        try
        {
            double num=stod(a);
            if(num==0)
            {
                cout << "Error: Cannot divide by zero! Enter another number: ";
                continue;
            }
            res/=stod(a);
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