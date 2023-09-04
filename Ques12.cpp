#include <iostream>
using namespace std;

int main()
{

    int unit;
    float cost;

    cout << "Enter the units of bill:";
    cin >> unit;

    if (unit <= 300)
    {
        cost = unit * 3.0;
    }

    else
    {
        cost = unit * 3.5;
        cost = 5.0 * cost;
    }

    cout << "The electricity bill is " << cost <<"$" << endl;

    return 0;
}
