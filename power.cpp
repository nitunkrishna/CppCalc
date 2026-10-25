#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

void power()
{
    vector<double>numbers;
    string input;
    cout << "Enter numbers (Press '=' to calculate): " << endl;
    while(cin >> input)
    {
        if(input=="=") break;
        try
        {
            size_t pos;
            double num=stod(input, &pos);
            if(pos!=input.length())
            {
                cout << "Invalid input! Enter a digit." << endl;
                continue;
            }
            numbers.push_back(num);
        }
        catch(...)
        {
            cout << "Invalid input! Enter a digit." << endl;
        }
    }

    if(numbers.size()<2)
    {
        cout << "Enter at least two numbers!" << endl;
        return;
    }

    double result=numbers.back();

    for(int i=(int)numbers.size()-2; i>=0; i--)
        result=pow(numbers[i], result);

    if(!isfinite(result))
        cout << "Error: Result is too large or undefined!" << endl;
    else
        cout << "Result: " << result << endl;
}