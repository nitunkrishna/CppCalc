#include<iostream>
#include"calculator.h"
using namespace std;

int main()
{
    char ch;
    while(true)
    {
        cout << "Enter 'e' to exit." << endl;
        cout << "Enter your operation (+, -, *, /, %): ";
        cin >> ch;
        if(ch=='e')
        {
            cout << "Calculator closed." << endl;
            break;
        }

        switch(ch)
        {
            case '+':
                addition();
                break;
    
            case '-':
                subtraction();
                break;
    
            case '*':
                multiplication();
                break;
    
            case '/':
                division();
                break;

            case '%':
                modulo();
                break;

            default:
                cout << "Enter a valid input (+, -, *, /, %)" << endl;
                break;
        }
    }
    return 0;
}