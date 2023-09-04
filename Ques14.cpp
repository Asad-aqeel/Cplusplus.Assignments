#include <iostream>
using namespace std;
int main()
{

    int marks;

    cout << "Enter marks obtained: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Error: Marks should be between 0 and 100." << endl;
    }
    else if (marks >= 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade: B" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}
