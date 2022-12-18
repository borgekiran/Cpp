// Program to add two number

#include <iostream>
using namespace std;

int main()
{
    int FirstNumber;
    int SecondNumber;
    int sum;

    cout << "Enter the First Number: " << endl;
    cin >> FirstNumber;

    cout << "Enter the Second Number: " << endl;
    cin >> SecondNumber;

    sum = FirstNumber + SecondNumber;

    cout << "The Addition of Two Number is: " << sum << endl;

    // You cana also do this way
    // cout << "The Addition of Two Number is: " << FirstNumber + SecondNumber << endl;
}