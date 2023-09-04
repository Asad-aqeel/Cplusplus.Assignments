#include <iostream>
using namespace std;

int main()
{

    int vari1, Vari2, Vari3;

    cout << "Enter first variable:";
    cin >> vari1;

    cout << "Enter second variable:";
    cin >> Vari2;

    cout << "Enter third variable:";
    cin >> Vari3;

    if (vari1 > Vari2 && vari1 > Vari3 )
    {
        cout << "The  variable " << vari1 << " has the highest value from those values . " << endl;
    }

    else if (Vari2 > vari1 && Vari2 > Vari3  )
    {
        cout << "The  variable " << Vari2 << " has the highest value from those values . " << endl;
    }

    else
    {
        cout << "The  variable " << Vari3 << " has the highest value from those values . " << endl;
    }

    return 0;
}
