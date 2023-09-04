#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter a number:";
    cin >> number;

    if (number == 17)
    {
        cout << "Yes it is divisible by, " << number << endl;
    }

    else
    {
        cout << "No, it is not divisible by, " << number <<  " try another number "<< endl;
    }

    return 0;
}
