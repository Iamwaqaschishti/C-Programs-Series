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
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            cout << num1 << " is smallest";
        }
        else
            cout << num3 << " is smallest";
    }
    else
        cout << num2 << " is smallest";
}