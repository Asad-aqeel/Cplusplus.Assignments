#include <iostream>

using namespace std;

int main()
{
    char char1, char2;

    cout << "Enter the first character: ";
    cin >> char1;

    cout << "Enter the second character: ";
    cin >> char2;

    if (char1 > char2)
    {
        cout << char1 << " has a higher ASCII value than " << char2 << endl;
    }
    else if (char2 > char1)
    {
        cout << char2 << " has a higher ASCII value than " << char1 << endl;
    }
    else
    {
        cout << "Both characters have the same ASCII value." << endl;
    }

    return 0;
}
