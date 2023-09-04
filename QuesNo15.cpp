#include <iostream>

using namespace std;

int main()
{

    //"This program is made by asad for how to make a calculator using c++"...

    int num1, num2, result;
    char operaton;

    cout << "Enter first number :";
    cin >> num1;

    cout << "Enter an operator ('+','-','*','/') ";
    cin >> operaton;

    cout << "Enter second number :";
    cin >> num2;

    switch (operaton)
    {
    case '+':
        result = num1 + num2;

        break;

    case '-':
        result = num1 - num2;

        break;

    case '*':
        result = num1 * num2;

        break;

    case '/':
        if (num1 != 0)
        {
            result = num1 / num2;

        }
        else
        {
            cout << "Divison by zero is not allowed" << endl;

            break;
        }
    default:

        cout << "Invalid operator" << "." << endl;
        
           break;
    }

      cout << "Result is " << result << ".";
        
  
    return 0;
}
