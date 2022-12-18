#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 1, c, number;

    cout << "\n Enter the number: ";
    cin >> number;
    cout << a << " " << b << " ";

    for (int i = 2; i < number; ++i)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}