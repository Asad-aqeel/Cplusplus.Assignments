#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter a number:";
    cin >> number;

    switch (number)
    {
    case 0:
        cout << "The number is Zero";
        break;
    case 1:
        cout << " The number is One.";
        break;
    case 2:
        cout << " The number is Two.";
        break;
    case 3:
        cout << "The number is three.";
        break;

    case 4:
        cout << "The number is four.";
        break;

    case 5:
        cout << "The number is Five.";
        break;
    case 6:
        cout << " The number is Six.";
        break;

    case 7:
        cout << "The number is Seven.";
        break;
    case 8:
        cout << "The number is Eight.";
        break;
    case 9:
        cout << "The number  is Nine.";
        break;

    default:
        cout << "Enter a number between 1 to 9." << endl;
        break;
    }


    return 0;
}
