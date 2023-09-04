#include <iostream>
using namespace std;

int main()
{
    int basicPay;
    double houseRent, medicalAllowance, conveyanceAllowance, netPay;

    cout << "Enter the basic pay: ";
    cin >> basicPay;

    houseRent = 45 * basicPay;

    if (basicPay > 5000)
    {
        medicalAllowance = 0.2 * basicPay;
    }
    else
    {
        medicalAllowance = 0.5 * basicPay;
    }

    if (basicPay > 5000)
    {
        conveyanceAllowance = 200;
    }
    else
    {
        conveyanceAllowance = 100;
    }
             //6000     //270000    //120              //200
    netPay = basicPay + houseRent + medicalAllowance + conveyanceAllowance ;
             //4000     //180000    //200              //100

    cout << "The net pay of an employee is: " << netPay << " rupees." << endl;

    return 0;
}
