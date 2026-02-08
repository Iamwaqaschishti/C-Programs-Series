// Write a C++ program to input three numbers from the user and display them in ascending order.

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter a 1st number = ";
    cin >> num1;
    cout << "Enter a 2nd number = ";
    cin >> num2;
    cout << "Enter a 3rd number = ";
    cin >> num3;
    if (num1 < num2 && num2 < num3)
    {
        cout << num1 << " ";
        cout << num2 << " ";
        cout << num3;
    }
    else if (num2 < num1 && num1 < num3)
    {
        cout << num2 << " ";
        cout << num1 << " ";
        cout << num3;
    }
    else if (num3 < num2 && num2 < num1)
    {
        cout << num3 << " ";
        cout << num2 << " ";
        cout << num1;
    }
    else if (num3 < num1 && num1 < num2)
    {
        cout << num3 << " ";
        cout << num1 << " ";
        cout << num2;
    }
    else if (num1 < num3 && num3 < num2)
    {
        cout << num1 << " ";
        cout << num3 << " ";
        cout << num2;
    }
    else if (num2 < num3 && num3 < num1)
    {
        cout << num2 << " ";
        cout << num3 << " ";
        cout << num1;
    }
    else
        cout << num2 << num1 << num3;
}