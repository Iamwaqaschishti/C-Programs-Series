/*Design and implement a C++ program that acts as a simple calculator.
The program should ask the user to enter two numbers and an operator (+ or /).
If the operator is +, the program should display the sum of the two numbers.
If the operator is /, the program should perform division and display the result, ensuring that division by zero is not allowed.
If the user enters any operator other than + or /, the program should display an appropriate error message.*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, /) ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+')
    {
        cout << "Result = " << num1 + num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            cout << "Result = " << num1 / num2;
        }
        else
        {
            cout << " Division by zero is not allowed.";
        }
    }
    else
    {
        cout << "Invalid operator!";
    }

    return 0;
}