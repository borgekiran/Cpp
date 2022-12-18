#include <iostream>
using namespace std;

int main()
{
    int divisor, dividend, quotient, reminder;

    cout << "Enter Dividend: ";
    cin >> dividend;

    cout << "Enter Divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Reminder = " << reminder;

    return 0;
}