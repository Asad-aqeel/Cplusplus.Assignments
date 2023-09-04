#include <iostream>
using namespace std;

int main()
{

    char name;

    cout << "Enter a character:";
    cin >> name;

    if (name == 'm' || name == 'M')
    {
        cout << "Male.";
    }

    else if (name == 'f')
    {
        cout << "Female." << endl;
    }

    else
    {
        cout << "Unknown case. " << endl;
    }

    return 0;
}
